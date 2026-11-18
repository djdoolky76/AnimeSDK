#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_CONCURRENTOBJECTPOOLCOLLECTION_CLEARALLPOOL_OFFSET UNITYSDK_OFFSET(0x1F3DBB00)
#define FOUNDATION_CONCURRENTOBJECTPOOLCOLLECTION_REGISTERCLEARACTION_OFFSET UNITYSDK_OFFSET(0x1F3DB980)
#define FOUNDATION_CONCURRENTOBJECTPOOLCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3DBC90)

namespace Foundation
{
	inline static constexpr unsigned int ConcurrentObjectPoolCollection_TypeDefinitionIndex = 7938;

	class ConcurrentObjectPoolCollection : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_clearActionList()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(ConcurrentObjectPoolCollection_TypeDefinitionIndex)->GetStaticField(0x71A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_CONCURRENTOBJECTPOOLCOLLECTION__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterClearAction(::System::Action* action)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_CONCURRENTOBJECTPOOLCOLLECTION_REGISTERCLEARACTION_OFFSET))(action);
		}

		static ::System::Void ClearAllPool()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_CONCURRENTOBJECTPOOLCOLLECTION_CLEARALLPOOL_OFFSET))();
		}
	};
}
