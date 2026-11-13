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

#define KHOHCMDMFBL_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0x1979DF60)
#define KHOHCMDMFBL_AEGPEOEKLCK_OFFSET UNITYSDK_OFFSET(0x1979B380)
#define KHOHCMDMFBL_ALOMCAMIMOD_OFFSET UNITYSDK_OFFSET(0x1979AF20)
#define KHOHCMDMFBL_AOONNHKOAMJ_OFFSET UNITYSDK_OFFSET(0x1979F070)
#define KHOHCMDMFBL_BCDGMOBHFID_OFFSET UNITYSDK_OFFSET(0x1979C300)
#define KHOHCMDMFBL_BMFLENPEOHO_OFFSET UNITYSDK_OFFSET(0x1979ED80)
#define KHOHCMDMFBL_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0x1979DC60)
#define KHOHCMDMFBL_CMDNCFBBJLA_OFFSET UNITYSDK_OFFSET(0x1979CB80)
#define KHOHCMDMFBL_CMNGPONHAKO_OFFSET UNITYSDK_OFFSET(0x1979D0C0)
#define KHOHCMDMFBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1979A670)
#define KHOHCMDMFBL_DNKMEPBLCNM_OFFSET UNITYSDK_OFFSET(0x1979BD20)
#define KHOHCMDMFBL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1979AA00)
#define KHOHCMDMFBL_FJNBLENNBCJ_OFFSET UNITYSDK_OFFSET(0x1979D6D0)
#define KHOHCMDMFBL_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0x1979E7B0)
#define KHOHCMDMFBL_HAPFLBLBMGP_OFFSET UNITYSDK_OFFSET(0x1979BFA0)
#define KHOHCMDMFBL_HJBJOGJNFEI_OFFSET UNITYSDK_OFFSET(0x1979D900)
#define KHOHCMDMFBL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1979B200)
#define KHOHCMDMFBL_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0x1979E390)
#define KHOHCMDMFBL_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0x1979CA10)
#define KHOHCMDMFBL_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0x1979E060)
#define KHOHCMDMFBL_LBAKLFGBFHK_OFFSET UNITYSDK_OFFSET(0x1979EBE0)
#define KHOHCMDMFBL_MAMKCCANAOH_OFFSET UNITYSDK_OFFSET(0x1979B9D0)
#define KHOHCMDMFBL_MDEKKFEOKDH_OFFSET UNITYSDK_OFFSET(0x1979E130)
#define KHOHCMDMFBL_MGOPOFJGNHA_OFFSET UNITYSDK_OFFSET(0x1979B040)
#define KHOHCMDMFBL_MHNABDJDMFP_OFFSET UNITYSDK_OFFSET(0x1979C280)
#define KHOHCMDMFBL_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0x1979CA90)
#define KHOHCMDMFBL_NAPEMFLELHM_OFFSET UNITYSDK_OFFSET(0x1979E840)
#define KHOHCMDMFBL_NFPGNJBDLDH_OFFSET UNITYSDK_OFFSET(0x1979CD50)
#define KHOHCMDMFBL_NGGHLBDENKP_OFFSET UNITYSDK_OFFSET(0x1979AA60)
#define KHOHCMDMFBL_NLAMGIEHEPI_OFFSET UNITYSDK_OFFSET(0x1979BC00)
#define KHOHCMDMFBL_OAPDEAPKDDJ_OFFSET UNITYSDK_OFFSET(0x1979C960)
#define KHOHCMDMFBL_OHIODDFOAHG_OFFSET UNITYSDK_OFFSET(0x1979DB90)
#define KHOHCMDMFBL_PCNNGCLFNMC_OFFSET UNITYSDK_OFFSET(0x1979AD30)
#define KHOHCMDMFBL_PHKBMIHMHBH_OFFSET UNITYSDK_OFFSET(0x1979C030)
#define KHOHCMDMFBL_POOLDMKLJLJ_OFFSET UNITYSDK_OFFSET(0x1979BB70)
#define KHOHCMDMFBL_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1979B590)

inline static constexpr unsigned int KHOHCMDMFBL_TypeDefinitionIndex = 79448;

	class KHOHCMDMFBL : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* OANIBMFFEMD; // 0x10
		::Entitas::ICollector_1<::HIOEAKHGILF*>* BFIIJDABOHP; // 0x18
		::KJFIKOKBCCA BPCIMAIENFL; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0xB0
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0xB8
		::PEEDLCHFAFL* PDENFEFCAGN; // 0xC0
		::System::Boolean ABKMPGNDAHO; // 0xC8
		::System::Boolean KCJFJMNCKIC; // 0xC9
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

		::System::Void BMFLENPEOHO(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_BMFLENPEOHO_OFFSET))(this, a1);
		}

		::System::Boolean AOONNHKOAMJ(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL_AOONNHKOAMJ_OFFSET))(this, a1, a2);
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
