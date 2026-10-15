#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OGKHOEGNFOF_CTOR_OFFSET UNITYSDK_OFFSET(0xBE59A50)
#define OGKHOEGNFOF_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xBE59A70)
#define OGKHOEGNFOF__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xBE59B00)

inline static constexpr unsigned int OGKHOEGNFOF_TypeDefinitionIndex = 59869;

	class OGKHOEGNFOF : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 POFKHMFFPAL; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGKHOEGNFOF_CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + OGKHOEGNFOF_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKHOEGNFOF__DOCHECKIMPL_OFFSET))(this);
		}

	};
