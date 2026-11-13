#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMBPGMHIKPE.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_GRIDFIGHTPENDINGPRESENTATIONQUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DF1EEA0)
#define RPG_CLIENT_GRIDFIGHTPENDINGPRESENTATIONQUEUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1EF40)
#define RPG_CLIENT_GRIDFIGHTPENDINGPRESENTATIONQUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x1DF1EB90)
#define RPG_CLIENT_GRIDFIGHTPENDINGPRESENTATIONQUEUE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1DF1EC10)
#define RPG_CLIENT_GRIDFIGHTPENDINGPRESENTATIONQUEUE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DF1EAE0)
#define RPG_CLIENT_GRIDFIGHTPENDINGPRESENTATIONQUEUE_GET_HASPENDINGPRESENTATION_OFFSET UNITYSDK_OFFSET(0x1DF1EB30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPendingPresentationQueue_TypeDefinitionIndex = 66770;

	class GridFightPendingPresentationQueue : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::LMBPGMHIKPE>* _Queue; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGPRESENTATIONQUEUE_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGPRESENTATIONQUEUE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_HasPendingPresentation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGPRESENTATIONQUEUE_GET_HASPENDINGPRESENTATION_OFFSET))(this);
		}

		::System::Void Enqueue(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGPRESENTATIONQUEUE_ENQUEUE_OFFSET))(this, a1, a2);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGPRESENTATIONQUEUE_FLUSH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGPRESENTATIONQUEUE_CLEAR_OFFSET))(this);
		}

	};
}
