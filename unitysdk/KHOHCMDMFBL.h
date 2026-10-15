#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define KHOHCMDMFBL_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0xB413630)
#define KHOHCMDMFBL_AEGPEOEKLCK_OFFSET UNITYSDK_OFFSET(0xB410A80)
#define KHOHCMDMFBL_ALOMCAMIMOD_OFFSET UNITYSDK_OFFSET(0xB410630)
#define KHOHCMDMFBL_BCDGMOBHFID_OFFSET UNITYSDK_OFFSET(0xB4119F0)
#define KHOHCMDMFBL_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0xB413340)
#define KHOHCMDMFBL_CMDNCFBBJLA_OFFSET UNITYSDK_OFFSET(0xB412270)
#define KHOHCMDMFBL_CMNGPONHAKO_OFFSET UNITYSDK_OFFSET(0xB4127B0)
#define KHOHCMDMFBL_CTOR_OFFSET UNITYSDK_OFFSET(0xB40FD90)
#define KHOHCMDMFBL_DNKMEPBLCNM_OFFSET UNITYSDK_OFFSET(0xB411420)
#define KHOHCMDMFBL_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB410120)
#define KHOHCMDMFBL_FJNBLENNBCJ_OFFSET UNITYSDK_OFFSET(0xB412DC0)
#define KHOHCMDMFBL_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0xB413E80)
#define KHOHCMDMFBL_HAPFLBLBMGP_OFFSET UNITYSDK_OFFSET(0xB4116A0)
#define KHOHCMDMFBL_HJBJOGJNFEI_OFFSET UNITYSDK_OFFSET(0xB412FE0)
#define KHOHCMDMFBL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB410900)
#define KHOHCMDMFBL_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0xB413A40)
#define KHOHCMDMFBL_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0xB412100)
#define KHOHCMDMFBL_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0xB413730)
#define KHOHCMDMFBL_LBAKLFGBFHK_OFFSET UNITYSDK_OFFSET(0xB4140F0)
#define KHOHCMDMFBL_MAMKCCANAOH_OFFSET UNITYSDK_OFFSET(0xB4110E0)
#define KHOHCMDMFBL_MDEKKFEOKDH_OFFSET UNITYSDK_OFFSET(0xB4137F0)
#define KHOHCMDMFBL_MGOPOFJGNHA_OFFSET UNITYSDK_OFFSET(0xB410750)
#define KHOHCMDMFBL_MHNABDJDMFP_OFFSET UNITYSDK_OFFSET(0xB411970)
#define KHOHCMDMFBL_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0xB412180)
#define KHOHCMDMFBL_NAPEMFLELHM_OFFSET UNITYSDK_OFFSET(0xB413F00)
#define KHOHCMDMFBL_NFPGNJBDLDH_OFFSET UNITYSDK_OFFSET(0xB412440)
#define KHOHCMDMFBL_NGGHLBDENKP_OFFSET UNITYSDK_OFFSET(0xB410180)
#define KHOHCMDMFBL_NLAMGIEHEPI_OFFSET UNITYSDK_OFFSET(0xB411300)
#define KHOHCMDMFBL_OAPDEAPKDDJ_OFFSET UNITYSDK_OFFSET(0xB412050)
#define KHOHCMDMFBL_OHIODDFOAHG_OFFSET UNITYSDK_OFFSET(0xB413270)
#define KHOHCMDMFBL_PCNNGCLFNMC_OFFSET UNITYSDK_OFFSET(0xB410440)
#define KHOHCMDMFBL_PHKBMIHMHBH_OFFSET UNITYSDK_OFFSET(0xB411720)
#define KHOHCMDMFBL_POOLDMKLJLJ_OFFSET UNITYSDK_OFFSET(0xB411280)
#define KHOHCMDMFBL_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB410CA0)

inline static constexpr unsigned int KHOHCMDMFBL_TypeDefinitionIndex = 77115;

	class KHOHCMDMFBL : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::KJFIKOKBCCA BPCIMAIENFL; // 0x28
		::Entitas::IGroup_1<::HIOEAKHGILF*>* OANIBMFFEMD; // 0xB8
		::Entitas::ICollector_1<::HIOEAKHGILF*>* BFIIJDABOHP; // 0xC0
		::System::Boolean KCJFJMNCKIC; // 0xC8
		::System::Boolean ABKMPGNDAHO; // 0xC9
		// static const ::System::String* COCDCEBNBML; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_EXECUTE_OFFSET))(this);
		}

		::System::Void ALOMCAMIMOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_ALOMCAMIMOD_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_TEARDOWN_OFFSET))(this);
		}

		::System::Void NLAMGIEHEPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_NLAMGIEHEPI_OFFSET))(this);
		}

		::System::Void NGGHLBDENKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_NGGHLBDENKP_OFFSET))(this);
		}

		::System::Void HAPFLBLBMGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_HAPFLBLBMGP_OFFSET))(this);
		}

		::System::Void POOLDMKLJLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_POOLDMKLJLJ_OFFSET))(this);
		}

		::System::Void AEGPEOEKLCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_AEGPEOEKLCK_OFFSET))(this);
		}

		::System::Void PCNNGCLFNMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_PCNNGCLFNMC_OFFSET))(this);
		}

		::System::Void PHKBMIHMHBH(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_PHKBMIHMHBH_OFFSET))(this, a1);
		}

		::System::Void BCDGMOBHFID(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_BCDGMOBHFID_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelTriggerInfo* CMDNCFBBJLA(::HIOEAKHGILF* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_CMDNCFBBJLA_OFFSET))(this, a1, a2);
		}

		::System::Void NFPGNJBDLDH(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_NFPGNJBDLDH_OFFSET))(this, a1, a2);
		}

		::System::Void HJBJOGJNFEI(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_HJBJOGJNFEI_OFFSET))(this, a1, a2);
		}

		::System::Void DNKMEPBLCNM(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_DNKMEPBLCNM_OFFSET))(this, a1);
		}

		::System::Boolean CMNGPONHAKO(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_CMNGPONHAKO_OFFSET))(this, a1, a2);
		}

		::System::Void FJNBLENNBCJ(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_FJNBLENNBCJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OHIODDFOAHG(::Entitas::IGroup_1<::HIOEAKHGILF*>* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::HIOEAKHGILF*>*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_OHIODDFOAHG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

		::System::Boolean MHNABDJDMFP(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_MHNABDJDMFP_OFFSET))(this, a1);
		}

		::System::Boolean LAGAFLIFFMN(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_LAGAFLIFFMN_OFFSET))(this, a1, a2);
		}

		::System::Void JCONBLBJFJJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_JCONBLBJFJJ_OFFSET))(this, a1);
		}

		::System::Void JCONBLBJFJJ_1(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_JCONBLBJFJJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void CFDCFBDGKEB(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_CFDCFBDGKEB_OFFSET))(this, a1, a2);
		}

		::System::Void FNHOOMOJJJO(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_FNHOOMOJJJO_OFFSET))(this, a1, a2);
		}

		::System::Boolean MDEKKFEOKDH(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_MDEKKFEOKDH_OFFSET))(this, a1, a2);
		}

		::System::Void MGOPOFJGNHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_MGOPOFJGNHA_OFFSET))(this);
		}

		::System::Void LBAKLFGBFHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_LBAKLFGBFHK_OFFSET))(this);
		}

		::System::Void MAMKCCANAOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_MAMKCCANAOH_OFFSET))(this);
		}

		::System::Void NAPEMFLELHM(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_NAPEMFLELHM_OFFSET))(this, a1, a2);
		}

		::System::Void MHPLGOAHLPJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_MHPLGOAHLPJ_OFFSET))(this, a1);
		}

		::System::Void OAPDEAPKDDJ(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_OAPDEAPKDDJ_OFFSET))(this, a1, a2);
		}

	};
