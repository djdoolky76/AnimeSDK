#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SwitchPlatformState.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;
namespace Entitas { class ICollector; }
namespace Entitas { class IComponent; }
namespace Entitas { class IGroup; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AOILEMOBPJN_AEPLJOPLKMK_OFFSET UNITYSDK_OFFSET(0x158AE590)
#define AOILEMOBPJN_AFBFBENLMFB_OFFSET UNITYSDK_OFFSET(0x158B00A0)
#define AOILEMOBPJN_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x158ADA10)
#define AOILEMOBPJN_BHOKGPNBNOH_OFFSET UNITYSDK_OFFSET(0x158AF5A0)
#define AOILEMOBPJN_CEJOMINNFHL_OFFSET UNITYSDK_OFFSET(0x158AFC40)
#define AOILEMOBPJN_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0x158AF840)
#define AOILEMOBPJN_CTOR_OFFSET UNITYSDK_OFFSET(0x158AD7A0)
#define AOILEMOBPJN_DNOOEMIHJIG_OFFSET UNITYSDK_OFFSET(0x158AF770)
#define AOILEMOBPJN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x158AE110)
#define AOILEMOBPJN_FKBLMOOEACP_OFFSET UNITYSDK_OFFSET(0x158ADAA0)
#define AOILEMOBPJN_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0x158B0540)
#define AOILEMOBPJN_GPLJAKFAIDI_OFFSET UNITYSDK_OFFSET(0x158AF640)
#define AOILEMOBPJN_HNBBOGBGPJK_OFFSET UNITYSDK_OFFSET(0x158AF370)
#define AOILEMOBPJN_IDFCCHDFLHK_OFFSET UNITYSDK_OFFSET(0x158AF080)
#define AOILEMOBPJN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x158ADA50)
#define AOILEMOBPJN_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0x158B0150)
#define AOILEMOBPJN_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0x158AF000)
#define AOILEMOBPJN_KKJCHNBOIAB_OFFSET UNITYSDK_OFFSET(0x158AF3F0)
#define AOILEMOBPJN_KLIMMINJACP_OFFSET UNITYSDK_OFFSET(0x158AE7D0)
#define AOILEMOBPJN_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0x158AFD00)
#define AOILEMOBPJN_LKFDEHDOOJF_OFFSET UNITYSDK_OFFSET(0x158AED50)
#define AOILEMOBPJN_MDEKKFEOKDH_OFFSET UNITYSDK_OFFSET(0x158AFDA0)
#define AOILEMOBPJN_MHNABDJDMFP_OFFSET UNITYSDK_OFFSET(0x158AE720)
#define AOILEMOBPJN_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0x158AFAE0)
#define AOILEMOBPJN_NDNFBCJOIJO_OFFSET UNITYSDK_OFFSET(0x158AE160)
#define AOILEMOBPJN_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x158AE3B0)

	class AOILEMOBPJN : public ::System::Object
	{
	public:
		::Entitas::IGroup* BANPMJMECAI; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0x18
		::MNCOPNHONHO* PDENFEFCAGN; // 0x20
		::BABNOKHOBCF* FKINCGODJEP; // 0x28
		::Entitas::ICollector* JOPKGDIAGPP; // 0x30
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOILEMOBPJN_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOILEMOBPJN_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOILEMOBPJN_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOILEMOBPJN_TEARDOWN_OFFSET))(this);
		}

		::System::Void FKBLMOOEACP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOILEMOBPJN_FKBLMOOEACP_OFFSET))(this);
		}

		::System::Void NDNFBCJOIJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOILEMOBPJN_NDNFBCJOIJO_OFFSET))(this);
		}

		::System::Void AEPLJOPLKMK(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_AEPLJOPLKMK_OFFSET))(this, a1);
		}

		::System::Void KLIMMINJACP(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_KLIMMINJACP_OFFSET))(this, a1);
		}

		::System::Void HNBBOGBGPJK(::INMMPMDELKE* a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_HNBBOGBGPJK_OFFSET))(this, a1, a2);
		}

		::System::Void KKJCHNBOIAB(::INMMPMDELKE* a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_KKJCHNBOIAB_OFFSET))(this, a1, a2);
		}

		::System::Void LKFDEHDOOJF(::INMMPMDELKE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::Boolean))((::PBYTE)hIl2Cpp + AOILEMOBPJN_LKFDEHDOOJF_OFFSET))(this, a1, a2);
		}

		::System::Void GPLJAKFAIDI(::System::Boolean a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_GPLJAKFAIDI_OFFSET))(this, a1, a2);
		}

		::System::Void DNOOEMIHJIG(::Entitas::IGroup* a1, ::INMMPMDELKE* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup*, ::INMMPMDELKE*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_DNOOEMIHJIG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BHOKGPNBNOH(::INMMPMDELKE* a1, ::RPG::Client::LittleGame::FiveDim::SwitchPlatformState a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::Client::LittleGame::FiveDim::SwitchPlatformState))((::PBYTE)hIl2Cpp + AOILEMOBPJN_BHOKGPNBNOH_OFFSET))(this, a1, a2);
		}

		::System::Void CEJOMINNFHL(::INMMPMDELKE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::Boolean))((::PBYTE)hIl2Cpp + AOILEMOBPJN_CEJOMINNFHL_OFFSET))(this, a1, a2);
		}

		::System::Void IDFCCHDFLHK(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_IDFCCHDFLHK_OFFSET))(this, a1);
		}

		::System::Void MHPLGOAHLPJ(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_MHPLGOAHLPJ_OFFSET))(this, a1);
		}

		::System::Boolean MHNABDJDMFP(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_MHNABDJDMFP_OFFSET))(this, a1);
		}

		::System::String* AFBFBENLMFB(::INMMPMDELKE* a1, ::RPG::GameCore::LittleGameDynamicVar* a2)
		{
			return ((::System::String*(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::LittleGameDynamicVar*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_AFBFBENLMFB_OFFSET))(this, a1, a2);
		}

		::System::Boolean LAGAFLIFFMN(::INMMPMDELKE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::System::String*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_LAGAFLIFFMN_OFFSET))(this, a1, a2);
		}

		::System::Void JCONBLBJFJJ(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_JCONBLBJFJJ_OFFSET))(this, a1);
		}

		::System::Void JCONBLBJFJJ_1(::INMMPMDELKE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::String*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_JCONBLBJFJJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void CFDCFBDGKEB(::INMMPMDELKE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::String*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_CFDCFBDGKEB_OFFSET))(this, a1, a2);
		}

		::System::Void FNHOOMOJJJO(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_FNHOOMOJJJO_OFFSET))(this, a1, a2);
		}

		::System::Boolean MDEKKFEOKDH(::INMMPMDELKE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::System::String*))((::PBYTE)hIl2Cpp + AOILEMOBPJN_MDEKKFEOKDH_OFFSET))(this, a1, a2);
		}

	};
