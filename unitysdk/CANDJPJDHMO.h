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

#define CANDJPJDHMO_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0xC48B230)
#define CANDJPJDHMO_BGGMJNOJHJM_OFFSET UNITYSDK_OFFSET(0xC488680)
#define CANDJPJDHMO_CCGOEKPJCNG_OFFSET UNITYSDK_OFFSET(0xC486BF0)
#define CANDJPJDHMO_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0xC48ADB0)
#define CANDJPJDHMO_CTOR_OFFSET UNITYSDK_OFFSET(0xC4856A0)
#define CANDJPJDHMO_DMONNANHGJE_OFFSET UNITYSDK_OFFSET(0xC487C40)
#define CANDJPJDHMO_DNKMEPBLCNM_OFFSET UNITYSDK_OFFSET(0xC486910)
#define CANDJPJDHMO_EJBEJAKAPBM_OFFSET UNITYSDK_OFFSET(0xC486130)
#define CANDJPJDHMO_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC485A30)
#define CANDJPJDHMO_FGPGLHAPLHM_OFFSET UNITYSDK_OFFSET(0xC489A20)
#define CANDJPJDHMO_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0xC48BB00)
#define CANDJPJDHMO_GGPNNOLNFKP_OFFSET UNITYSDK_OFFSET(0xC488EB0)
#define CANDJPJDHMO_HAPFLBLBMGP_OFFSET UNITYSDK_OFFSET(0xC486B60)
#define CANDJPJDHMO_HICMDFPACKP_OFFSET UNITYSDK_OFFSET(0xC48ACE0)
#define CANDJPJDHMO_IBCMIEBGGNI_OFFSET UNITYSDK_OFFSET(0xC488A50)
#define CANDJPJDHMO_IFCOJCDDPAD_OFFSET UNITYSDK_OFFSET(0xC489590)
#define CANDJPJDHMO_IHJMGIHNOFA_OFFSET UNITYSDK_OFFSET(0xC489CB0)
#define CANDJPJDHMO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC485FB0)
#define CANDJPJDHMO_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0xC48B6C0)
#define CANDJPJDHMO_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0xC488510)
#define CANDJPJDHMO_JDDJLFIAMEG_OFFSET UNITYSDK_OFFSET(0xC489330)
#define CANDJPJDHMO_KKAKKPPBGMO_OFFSET UNITYSDK_OFFSET(0xC4875C0)
#define CANDJPJDHMO_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0xC48B3A0)
#define CANDJPJDHMO_MDEKKFEOKDH_OFFSET UNITYSDK_OFFSET(0xC48B470)
#define CANDJPJDHMO_MHNABDJDMFP_OFFSET UNITYSDK_OFFSET(0xC487540)
#define CANDJPJDHMO_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0xC488590)
#define CANDJPJDHMO_NADDJJBMLIP_OFFSET UNITYSDK_OFFSET(0xC48A830)
#define CANDJPJDHMO_NAPEMFLELHM_OFFSET UNITYSDK_OFFSET(0xC48BB90)
#define CANDJPJDHMO_NDCCMGMHALE_OFFSET UNITYSDK_OFFSET(0xC48B0B0)
#define CANDJPJDHMO_NGGHLBDENKP_OFFSET UNITYSDK_OFFSET(0xC485A80)
#define CANDJPJDHMO_NLAMGIEHEPI_OFFSET UNITYSDK_OFFSET(0xC4867F0)
#define CANDJPJDHMO_OAPDEAPKDDJ_OFFSET UNITYSDK_OFFSET(0xC488300)
#define CANDJPJDHMO_ODFIMEMNBGN_OFFSET UNITYSDK_OFFSET(0xC485D50)
#define CANDJPJDHMO_PGDDOJFOKGA_OFFSET UNITYSDK_OFFSET(0xC4891B0)
#define CANDJPJDHMO_POOLDMKLJLJ_OFFSET UNITYSDK_OFFSET(0xC486760)
#define CANDJPJDHMO_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xC486340)

inline static constexpr unsigned int CANDJPJDHMO_TypeDefinitionIndex = 77117;

	class CANDJPJDHMO : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* APOFCMHKEHD; // 0x10
		::KJFIKOKBCCA BPCIMAIENFL; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0xA8
		::Entitas::ICollector_1<::HIOEAKHGILF*>* EFMALHIKLCP; // 0xB0
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0xB8
		::PEEDLCHFAFL* PDENFEFCAGN; // 0xC0
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

		::System::Void HICMDFPACKP(::Entitas::IGroup_1<::HIOEAKHGILF*>* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::HIOEAKHGILF*>*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CANDJPJDHMO_HICMDFPACKP_OFFSET))(this, a1, a2, a3, a4);
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
