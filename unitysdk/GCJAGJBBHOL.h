#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"
class LBILCOPLPPF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GCJAGJBBHOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1597E2B0)
#define GCJAGJBBHOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1597E170)
#define GCJAGJBBHOL_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x1597D9C0)
#define GCJAGJBBHOL_EEAKNHEIOAP_OFFSET UNITYSDK_OFFSET(0x1597D930)
#define GCJAGJBBHOL_EIODGBOEACH_OFFSET UNITYSDK_OFFSET(0x1597D8A0)
#define GCJAGJBBHOL_EPOLDGPEFPO_OFFSET UNITYSDK_OFFSET(0x1597DE40)
#define GCJAGJBBHOL_HNKBEBMODFP_OFFSET UNITYSDK_OFFSET(0x1597E040)
#define GCJAGJBBHOL_MGNNIPNAOKI_OFFSET UNITYSDK_OFFSET(0x1597D6D0)
#define GCJAGJBBHOL_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x1597CF40)
#define GCJAGJBBHOL_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x1597D380)

	class GCJAGJBBHOL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::LBILCOPLPPF*>* KNLPBDKAGLP; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* EAJCPNKLDID; // 0x20
		static ::System::Boolean* StaticGet_MOKNCFJICIC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GCJAGJBBHOL")->GetStaticField(0x12A30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAGJBBHOL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCJAGJBBHOL_CCTOR_OFFSET))();
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + GCJAGJBBHOL_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAGJBBHOL_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void MGNNIPNAOKI(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GCJAGJBBHOL_MGNNIPNAOKI_OFFSET))(this, a1, a2);
		}

		::System::Void EIODGBOEACH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJAGJBBHOL_EIODGBOEACH_OFFSET))(this);
		}

		::System::Void EEAKNHEIOAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GCJAGJBBHOL_EEAKNHEIOAP_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCJAGJBBHOL_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void EPOLDGPEFPO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GCJAGJBBHOL_EPOLDGPEFPO_OFFSET))(this, a1);
		}

		::System::Void HNKBEBMODFP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + GCJAGJBBHOL_HNKBEBMODFP_OFFSET))(this, a1, a2);
		}

	};
