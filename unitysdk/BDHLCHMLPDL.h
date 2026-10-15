#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPHGAMLLKCO;
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { template <typename T> class LockableList_1; }

#define BDHLCHMLPDL_CTOR_OFFSET UNITYSDK_OFFSET(0x162FAF80)
#define BDHLCHMLPDL_DFJAMCIAJPP_OFFSET UNITYSDK_OFFSET(0x162FAEE0)
#define BDHLCHMLPDL_HPBCOLDFMNI_OFFSET UNITYSDK_OFFSET(0x162FAE50)
#define BDHLCHMLPDL_IMPGHABDBAP_OFFSET UNITYSDK_OFFSET(0x162FAC60)
#define BDHLCHMLPDL_JDLKOKILNCF_OFFSET UNITYSDK_OFFSET(0x162FAF70)
#define BDHLCHMLPDL_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x162FABD0)
#define BDHLCHMLPDL_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x162FAC20)

	class BDHLCHMLPDL : public ::System::Object
	{
	public:
		::RPG::GameCore::JsonEnum* JPEAMNAIOKH; // 0x10
		::RPG::GameCore::LockableList_1<::KPHGAMLLKCO*>* LAHJMFDLJPL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHLCHMLPDL_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + BDHLCHMLPDL_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHLCHMLPDL_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void IMPGHABDBAP(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + BDHLCHMLPDL_IMPGHABDBAP_OFFSET))(this, a1);
		}

		::System::Void HPBCOLDFMNI(::KPHGAMLLKCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPHGAMLLKCO*))((::PBYTE)hIl2Cpp + BDHLCHMLPDL_HPBCOLDFMNI_OFFSET))(this, a1);
		}

		::System::Void DFJAMCIAJPP(::KPHGAMLLKCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPHGAMLLKCO*))((::PBYTE)hIl2Cpp + BDHLCHMLPDL_DFJAMCIAJPP_OFFSET))(this, a1);
		}

		::RPG::GameCore::JsonEnum* JDLKOKILNCF()
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHLCHMLPDL_JDLKOKILNCF_OFFSET))(this);
		}

	};
