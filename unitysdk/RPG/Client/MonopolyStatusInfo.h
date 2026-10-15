#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCDBIMIBNCD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYSTATUSINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD8AEA30)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD8AE3A0)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_GET_TRIGGEREDOPTIONLIST_OFFSET UNITYSDK_OFFSET(0xD8AEA10)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_INIT_OFFSET UNITYSDK_OFFSET(0xD8AE320)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_ISOPTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xD8AE950)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_SET_TRIGGEREDOPTIONLIST_OFFSET UNITYSDK_OFFSET(0xD8AEA20)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD8AE400)
#define RPG_CLIENT_MONOPOLYSTATUSINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0xD8AE360)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyStatusInfo_TypeDefinitionIndex = 66296;

	class MonopolyStatusInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TriggeredOptionList_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_UNINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::OCDBIMIBNCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCDBIMIBNCD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsOptionTriggered(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_ISOPTIONTRIGGERED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TriggeredOptionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_GET_TRIGGEREDOPTIONLIST_OFFSET))(this);
		}

		::System::Void set_TriggeredOptionList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYSTATUSINFO_SET_TRIGGEREDOPTIONLIST_OFFSET))(this, a1);
		}

	};
}
