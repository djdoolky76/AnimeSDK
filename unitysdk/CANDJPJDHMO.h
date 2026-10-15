#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ICollector; }
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { class IGroup; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CANDJPJDHMO_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0xC492480)
#define CANDJPJDHMO_BGGMJNOJHJM_OFFSET UNITYSDK_OFFSET(0xC48F890)
#define CANDJPJDHMO_CCGOEKPJCNG_OFFSET UNITYSDK_OFFSET(0xC48DE00)
#define CANDJPJDHMO_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0xC492000)
#define CANDJPJDHMO_CTOR_OFFSET UNITYSDK_OFFSET(0xC48C890)
#define CANDJPJDHMO_DMONNANHGJE_OFFSET UNITYSDK_OFFSET(0xC48EE50)
#define CANDJPJDHMO_DNKMEPBLCNM_OFFSET UNITYSDK_OFFSET(0xC48DB20)
#define CANDJPJDHMO_EJBEJAKAPBM_OFFSET UNITYSDK_OFFSET(0xC48D330)
#define CANDJPJDHMO_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC48CC30)
#define CANDJPJDHMO_FGPGLHAPLHM_OFFSET UNITYSDK_OFFSET(0xC490C60)
#define CANDJPJDHMO_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0xC492D50)
#define CANDJPJDHMO_GGPNNOLNFKP_OFFSET UNITYSDK_OFFSET(0xC4900E0)
#define CANDJPJDHMO_HAPFLBLBMGP_OFFSET UNITYSDK_OFFSET(0xC48DD70)
#define CANDJPJDHMO_HICMDFPACKP_OFFSET UNITYSDK_OFFSET(0xC491F30)
#define CANDJPJDHMO_IBCMIEBGGNI_OFFSET UNITYSDK_OFFSET(0xC48FC70)
#define CANDJPJDHMO_IFCOJCDDPAD_OFFSET UNITYSDK_OFFSET(0xC4907C0)
#define CANDJPJDHMO_IHJMGIHNOFA_OFFSET UNITYSDK_OFFSET(0xC490EF0)
#define CANDJPJDHMO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC48D1B0)
#define CANDJPJDHMO_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0xC492910)
#define CANDJPJDHMO_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0xC48F720)
#define CANDJPJDHMO_JDDJLFIAMEG_OFFSET UNITYSDK_OFFSET(0xC490560)
#define CANDJPJDHMO_KKAKKPPBGMO_OFFSET UNITYSDK_OFFSET(0xC48E7D0)
#define CANDJPJDHMO_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0xC4925F0)
#define CANDJPJDHMO_MDEKKFEOKDH_OFFSET UNITYSDK_OFFSET(0xC4926C0)
#define CANDJPJDHMO_MHNABDJDMFP_OFFSET UNITYSDK_OFFSET(0xC48E750)
#define CANDJPJDHMO_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0xC48F7A0)
#define CANDJPJDHMO_NADDJJBMLIP_OFFSET UNITYSDK_OFFSET(0xC491A80)
#define CANDJPJDHMO_NAPEMFLELHM_OFFSET UNITYSDK_OFFSET(0xC492DE0)
#define CANDJPJDHMO_NDCCMGMHALE_OFFSET UNITYSDK_OFFSET(0xC492300)
#define CANDJPJDHMO_NGGHLBDENKP_OFFSET UNITYSDK_OFFSET(0xC48CC80)
#define CANDJPJDHMO_NLAMGIEHEPI_OFFSET UNITYSDK_OFFSET(0xC48DA00)
#define CANDJPJDHMO_OAPDEAPKDDJ_OFFSET UNITYSDK_OFFSET(0xC48F510)
#define CANDJPJDHMO_ODFIMEMNBGN_OFFSET UNITYSDK_OFFSET(0xC48CF50)
#define CANDJPJDHMO_PGDDOJFOKGA_OFFSET UNITYSDK_OFFSET(0xC4903E0)
#define CANDJPJDHMO_POOLDMKLJLJ_OFFSET UNITYSDK_OFFSET(0xC48D970)
#define CANDJPJDHMO_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xC48D550)

	class CANDJPJDHMO : public ::System::Object
	{
	public:
		::KJFIKOKBCCA BPCIMAIENFL; // 0x10
		::Entitas::IGroup* APOFCMHKEHD; // 0xA0
		::PEEDLCHFAFL* PDENFEFCAGN; // 0xA8
		::Entitas::ICollector* EFMALHIKLCP; // 0xB0
		::NDDFLGNNMDK* FKINCGODJEP; // 0xB8
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0xC0
		::System::Boolean ABKMPGNDAHO; // 0xC8
		// static const ::System::String* BFHILHIBKNJ; // 0x0
		// static const ::System::String* IAODABBMAMF; // 0x0
		// static const ::System::String* GJOGGOKACBD; // 0x0
		// static const ::System::String* OEPEFPEBOKD; // 0x0
		// static const ::System::String* NNBCDELGBBN; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANDJPJDHMO_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANDJPJDHMO_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANDJPJDHMO_TEARDOWN_OFFSET))(this);
		}

		::System::Void NLAMGIEHEPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANDJPJDHMO_NLAMGIEHEPI_OFFSET))(this);
		}

		::System::Void NGGHLBDENKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANDJPJDHMO_NGGHLBDENKP_OFFSET))(this);
		}

		::System::Void HAPFLBLBMGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANDJPJDHMO_HAPFLBLBMGP_OFFSET))(this);
		}

		::System::Void POOLDMKLJLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANDJPJDHMO_POOLDMKLJLJ_OFFSET))(this);
		}

		::System::Void EJBEJAKAPBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANDJPJDHMO_EJBEJAKAPBM_OFFSET))(this);
		}

		::System::Void ODFIMEMNBGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANDJPJDHMO_ODFIMEMNBGN_OFFSET))(this);
		}

		::System::Void CCGOEKPJCNG(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_CCGOEKPJCNG_OFFSET))(this, a1);
		}

		::System::Void KKAKKPPBGMO(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_KKAKKPPBGMO_OFFSET))(this, a1);
		}

		::System::Void DMONNANHGJE(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_DMONNANHGJE_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelTriggerInfo* IBCMIEBGGNI(::HIOEAKHGILF* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CANDJPJDHMO_IBCMIEBGGNI_OFFSET))(this, a1, a2);
		}

		::System::Void GGPNNOLNFKP(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_GGPNNOLNFKP_OFFSET))(this, a1, a2);
		}

		::System::Void PGDDOJFOKGA(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_PGDDOJFOKGA_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::LevelTriggerInfo* BGGMJNOJHJM(::HIOEAKHGILF* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CANDJPJDHMO_BGGMJNOJHJM_OFFSET))(this, a1, a2);
		}

		::System::Void JDDJLFIAMEG(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_JDDJLFIAMEG_OFFSET))(this, a1, a2);
		}

		::System::Void FGPGLHAPLHM(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_FGPGLHAPLHM_OFFSET))(this, a1, a2);
		}

		::System::Void DNKMEPBLCNM(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_DNKMEPBLCNM_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 NADDJJBMLIP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::KLNKLOMDIIC a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + CANDJPJDHMO_NADDJJBMLIP_OFFSET))(a1, a2, a3);
		}

		::System::Boolean IFCOJCDDPAD(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::KLNKLOMDIIC a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + CANDJPJDHMO_IFCOJCDDPAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HICMDFPACKP(::Entitas::IGroup* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_HICMDFPACKP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IHJMGIHNOFA(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_IHJMGIHNOFA_OFFSET))(this, a1, a2);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

		::System::Boolean MHNABDJDMFP(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_MHNABDJDMFP_OFFSET))(this, a1);
		}

		::System::Boolean LAGAFLIFFMN(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_LAGAFLIFFMN_OFFSET))(this, a1, a2);
		}

		::System::Void JCONBLBJFJJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_JCONBLBJFJJ_OFFSET))(this, a1);
		}

		::System::Void JCONBLBJFJJ_1(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_JCONBLBJFJJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void CFDCFBDGKEB(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_CFDCFBDGKEB_OFFSET))(this, a1, a2);
		}

		::System::Void FNHOOMOJJJO(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_FNHOOMOJJJO_OFFSET))(this, a1, a2);
		}

		::System::Boolean MDEKKFEOKDH(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_MDEKKFEOKDH_OFFSET))(this, a1, a2);
		}

		::System::Void NAPEMFLELHM(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CANDJPJDHMO_NAPEMFLELHM_OFFSET))(this, a1, a2);
		}

		::System::Void OAPDEAPKDDJ(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CANDJPJDHMO_OAPDEAPKDDJ_OFFSET))(this, a1, a2);
		}

		::System::Void MHPLGOAHLPJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_MHPLGOAHLPJ_OFFSET))(this, a1);
		}

		::System::Void NDCCMGMHALE(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + CANDJPJDHMO_NDCCMGMHALE_OFFSET))(this, a1);
		}

	};
