#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SwitchPlatformState.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ICollector; }
namespace Entitas { class IComponent; }
namespace Entitas { class IGroup; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace System { class Object; }
namespace System { class String; }

#define GJLJLLKPEJH_AEPLJOPLKMK_OFFSET UNITYSDK_OFFSET(0x15A6D450)
#define GJLJLLKPEJH_AFBFBENLMFB_OFFSET UNITYSDK_OFFSET(0x15A6E9F0)
#define GJLJLLKPEJH_BHOKGPNBNOH_OFFSET UNITYSDK_OFFSET(0x15A6E330)
#define GJLJLLKPEJH_CEJOMINNFHL_OFFSET UNITYSDK_OFFSET(0x15A6E580)
#define GJLJLLKPEJH_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0x15A6E700)
#define GJLJLLKPEJH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A6CAB0)
#define GJLJLLKPEJH_DNOOEMIHJIG_OFFSET UNITYSDK_OFFSET(0x15A6E640)
#define GJLJLLKPEJH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15A6CC80)
#define GJLJLLKPEJH_FKBLMOOEACP_OFFSET UNITYSDK_OFFSET(0x15A6CCD0)
#define GJLJLLKPEJH_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0x15A6F1D0)
#define GJLJLLKPEJH_GPLJAKFAIDI_OFFSET UNITYSDK_OFFSET(0x15A6D7F0)
#define GJLJLLKPEJH_HNBBOGBGPJK_OFFSET UNITYSDK_OFFSET(0x15A6E1B0)
#define GJLJLLKPEJH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15A6CF30)
#define GJLJLLKPEJH_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0x15A6EDD0)
#define GJLJLLKPEJH_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0x15A6E000)
#define GJLJLLKPEJH_KKJCHNBOIAB_OFFSET UNITYSDK_OFFSET(0x15A6E230)
#define GJLJLLKPEJH_KLIMMINJACP_OFFSET UNITYSDK_OFFSET(0x15A6D900)
#define GJLJLLKPEJH_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0x15A6EA70)
#define GJLJLLKPEJH_MDEKKFEOKDH_OFFSET UNITYSDK_OFFSET(0x15A6EB80)
#define GJLJLLKPEJH_MHNABDJDMFP_OFFSET UNITYSDK_OFFSET(0x15A6D740)
#define GJLJLLKPEJH_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0x15A6E080)
#define GJLJLLKPEJH_NDNFBCJOIJO_OFFSET UNITYSDK_OFFSET(0x15A6CF90)
#define GJLJLLKPEJH_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15A6D1A0)

	class GJLJLLKPEJH : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0x18
		::Entitas::ICollector* JOPKGDIAGPP; // 0x20
		::Entitas::IGroup* BANPMJMECAI; // 0x28
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x30
		// static const ::System::String* CCICHKBCHLC; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_TEARDOWN_OFFSET))(this);
		}

		::System::Void FKBLMOOEACP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_FKBLMOOEACP_OFFSET))(this);
		}

		::System::Void NDNFBCJOIJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_NDNFBCJOIJO_OFFSET))(this);
		}

		::System::Void AEPLJOPLKMK(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_AEPLJOPLKMK_OFFSET))(this, a1);
		}

		::System::Void KLIMMINJACP(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_KLIMMINJACP_OFFSET))(this, a1);
		}

		::System::Void HNBBOGBGPJK(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_HNBBOGBGPJK_OFFSET))(this, a1);
		}

		::System::Void KKJCHNBOIAB(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_KKJCHNBOIAB_OFFSET))(this, a1);
		}

		::System::Void BHOKGPNBNOH(::HIOEAKHGILF* a1, ::RPG::Client::LittleGame::FiveDim::SwitchPlatformState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::Client::LittleGame::FiveDim::SwitchPlatformState))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_BHOKGPNBNOH_OFFSET))(this, a1, a2);
		}

		::System::Void GPLJAKFAIDI(::System::Boolean a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_GPLJAKFAIDI_OFFSET))(this, a1, a2);
		}

		::System::Void CEJOMINNFHL(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_CEJOMINNFHL_OFFSET))(this, a1, a2);
		}

		::System::Void MHPLGOAHLPJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_MHPLGOAHLPJ_OFFSET))(this, a1);
		}

		::System::Void DNOOEMIHJIG(::Entitas::IGroup* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_DNOOEMIHJIG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* AFBFBENLMFB(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameDynamicVar* a2)
		{
			return ((::System::String*(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameDynamicVar*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_AFBFBENLMFB_OFFSET))(this, a1, a2);
		}

		::System::Boolean MHNABDJDMFP(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_MHNABDJDMFP_OFFSET))(this, a1);
		}

		::System::Boolean LAGAFLIFFMN(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_LAGAFLIFFMN_OFFSET))(this, a1, a2);
		}

		::System::Void JCONBLBJFJJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_JCONBLBJFJJ_OFFSET))(this, a1);
		}

		::System::Void JCONBLBJFJJ_1(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_JCONBLBJFJJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void CFDCFBDGKEB(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_CFDCFBDGKEB_OFFSET))(this, a1, a2);
		}

		::System::Void FNHOOMOJJJO(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_FNHOOMOJJJO_OFFSET))(this, a1, a2);
		}

		::System::Boolean MDEKKFEOKDH(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH_MDEKKFEOKDH_OFFSET))(this, a1, a2);
		}

	};
