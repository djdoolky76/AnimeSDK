#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDIJJFMOHEC_InnerState.h"
#include "unitysdk/KFCMMMMMIIO.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KDIJJFMOHEC_IGKDABGNDPI;
class KDIJJFMOHEC_PFBNNGIFCFF;
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class HipplenBallFetchInteractWorkConfig; }
namespace RPG::GameCore { class HipplenInteractWorkConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define KDIJJFMOHEC_ABHKAJJDMIM_OFFSET UNITYSDK_OFFSET(0xB3622F0)
#define KDIJJFMOHEC_AEIFMBMKDBF_OFFSET UNITYSDK_OFFSET(0xB361F90)
#define KDIJJFMOHEC_AKOIBFEHNMM_OFFSET UNITYSDK_OFFSET(0xB35FC70)
#define KDIJJFMOHEC_BOMMECEBBEK_OFFSET UNITYSDK_OFFSET(0xB361C10)
#define KDIJJFMOHEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB363180)
#define KDIJJFMOHEC_EDKFLMCNMDJ_OFFSET UNITYSDK_OFFSET(0xB361950)
#define KDIJJFMOHEC_EPMKCJPIFFN_OFFSET UNITYSDK_OFFSET(0xB361E90)
#define KDIJJFMOHEC_FOLPPJNKKCM_OFFSET UNITYSDK_OFFSET(0xB35F7F0)
#define KDIJJFMOHEC_FPHBEPKCANO_OFFSET UNITYSDK_OFFSET(0xB361D30)
#define KDIJJFMOHEC_GELEIOJNDGP_OFFSET UNITYSDK_OFFSET(0xB3614E0)
#define KDIJJFMOHEC_GENDGPCKNAF_OFFSET UNITYSDK_OFFSET(0xB361B70)
#define KDIJJFMOHEC_HFGGADCMEIH_OFFSET UNITYSDK_OFFSET(0xB3621E0)
#define KDIJJFMOHEC_HMLFPKIHPCA_OFFSET UNITYSDK_OFFSET(0xB3611B0)
#define KDIJJFMOHEC_HOLNFPGHHFH_OFFSET UNITYSDK_OFFSET(0xB360050)
#define KDIJJFMOHEC_HOMJHIEPIJP_OFFSET UNITYSDK_OFFSET(0xB361100)
#define KDIJJFMOHEC_IDCCDNBLMLG_OFFSET UNITYSDK_OFFSET(0xB35FE10)
#define KDIJJFMOHEC_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xB362C50)
#define KDIJJFMOHEC_IMMKPNJPLDP_OFFSET UNITYSDK_OFFSET(0xB361390)
#define KDIJJFMOHEC_JLJNOGAGCLA_OFFSET UNITYSDK_OFFSET(0xB362270)
#define KDIJJFMOHEC_KLNJEPHMCGI_OFFSET UNITYSDK_OFFSET(0xB361E40)
#define KDIJJFMOHEC_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xB360650)
#define KDIJJFMOHEC_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xB3601B0)
#define KDIJJFMOHEC_LJMOJMHAKPN_OFFSET UNITYSDK_OFFSET(0xB361F00)
#define KDIJJFMOHEC_MBOCAJADFOO_OFFSET UNITYSDK_OFFSET(0xB361430)
#define KDIJJFMOHEC_MDJJMCECOIA_OFFSET UNITYSDK_OFFSET(0xB35F870)
#define KDIJJFMOHEC_MKOJLFJCNDP_OFFSET UNITYSDK_OFFSET(0xB35ED50)
#define KDIJJFMOHEC_MMKDPAPJBLJ_OFFSET UNITYSDK_OFFSET(0xB362560)
#define KDIJJFMOHEC_MNAOCHOKFFJ_OFFSET UNITYSDK_OFFSET(0xB361DF0)
#define KDIJJFMOHEC_NGOJBCDGNOL_OFFSET UNITYSDK_OFFSET(0xB3600C0)
#define KDIJJFMOHEC_NHFPNPAGPPI_OFFSET UNITYSDK_OFFSET(0xB361860)
#define KDIJJFMOHEC_NIBJNBCAAIA_OFFSET UNITYSDK_OFFSET(0xB3608D0)
#define KDIJJFMOHEC_NMOMLPEJLBB_OFFSET UNITYSDK_OFFSET(0xB3629C0)
#define KDIJJFMOHEC_NPBLGGGDOLB_OFFSET UNITYSDK_OFFSET(0xB3620C0)
#define KDIJJFMOHEC_PAHEIGLPKJE_OFFSET UNITYSDK_OFFSET(0xB3630F0)

	class KDIJJFMOHEC : public ::KFCMMMMMIIO
	{
	public:
		::KDIJJFMOHEC_PFBNNGIFCFF* PHHIGAPJHLM; // 0x48
		::RPG::GameCore::HipplenBallFetchInteractWorkConfig* AMPLPKPJHNF; // 0x50
		::KDIJJFMOHEC_IGKDABGNDPI* EOFFAMLLEJK; // 0x58
		::UnityEngine::Transform* JHHCLEPBAGP; // 0x60
		::KDIJJFMOHEC_PFBNNGIFCFF* LAGCHNGDEGK; // 0x68
		::System::Collections::Generic::List_1<::System::Object*>* PJHNIDBMCFG; // 0x70
		::System::Boolean HOMJJHKFJJM; // 0x78
		::System::Byte _padding0[0x3];
		::System::Single LMABGBJJIED; // 0x7C
		::UnityEngine::Vector3 BEDPGAOCOHG; // 0x80
		::System::Single CNGCGMEGEOG; // 0x8C
		::System::Single GLHFPIGMBLN; // 0x90
		::KDIJJFMOHEC_InnerState DLNIGFGLPLJ; // 0x94
		::System::Int32 LIBMNBMKPHG; // 0x98
		::System::Single EOJBENPBAPG; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_CTOR_OFFSET))(this);
		}

		::System::Void MKOJLFJCNDP(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_MKOJLFJCNDP_OFFSET))(this, a1, a2);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void NIBJNBCAAIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_NIBJNBCAAIA_OFFSET))(this);
		}

		::UnityEngine::GameObject* MBOCAJADFOO(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_MBOCAJADFOO_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* NHFPNPAGPPI()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_NHFPNPAGPPI_OFFSET))(this);
		}

		::UnityEngine::Transform* EDKFLMCNMDJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_EDKFLMCNMDJ_OFFSET))(this);
		}

		::System::Void GENDGPCKNAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_GENDGPCKNAF_OFFSET))(this);
		}

		::System::Void BOMMECEBBEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_BOMMECEBBEK_OFFSET))(this);
		}

		::System::Void FPHBEPKCANO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_FPHBEPKCANO_OFFSET))(this, a1);
		}

		::System::Boolean MNAOCHOKFFJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_MNAOCHOKFFJ_OFFSET))(this);
		}

		::System::Void KLNJEPHMCGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_KLNJEPHMCGI_OFFSET))(this);
		}

		::System::Void EPMKCJPIFFN(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_EPMKCJPIFFN_OFFSET))(this, a1);
		}

		::System::Void LJMOJMHAKPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_LJMOJMHAKPN_OFFSET))(this);
		}

		::System::Void AEIFMBMKDBF(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_AEIFMBMKDBF_OFFSET))(this, a1);
		}

		::System::Void AKOIBFEHNMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_AKOIBFEHNMM_OFFSET))(this);
		}

		::System::Void NPBLGGGDOLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_NPBLGGGDOLB_OFFSET))(this);
		}

		::System::Void NGOJBCDGNOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_NGOJBCDGNOL_OFFSET))(this);
		}

		::System::Void HOMJHIEPIJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_HOMJHIEPIJP_OFFSET))(this);
		}

		::System::Void JLJNOGAGCLA(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_JLJNOGAGCLA_OFFSET))(this, a1, a2);
		}

		::System::Void HOLNFPGHHFH(::KDIJJFMOHEC_InnerState a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KDIJJFMOHEC_InnerState, ::System::Single))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_HOLNFPGHHFH_OFFSET))(this, a1, a2);
		}

		::System::Void ABHKAJJDMIM(::UnityEngine::Collision* a1, ::KDIJJFMOHEC_PFBNNGIFCFF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*, ::KDIJJFMOHEC_PFBNNGIFCFF*))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_ABHKAJJDMIM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 IDCCDNBLMLG(::KDIJJFMOHEC_PFBNNGIFCFF* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::KDIJJFMOHEC_PFBNNGIFCFF*))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_IDCCDNBLMLG_OFFSET))(this, a1);
		}

		::System::Void HMLFPKIHPCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_HMLFPKIHPCA_OFFSET))(this);
		}

		::System::Void NMOMLPEJLBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_NMOMLPEJLBB_OFFSET))(this);
		}

		::RPG::GameCore::HipplenInteractWorkConfig* IIFINBAGBDG(::System::String* a1)
		{
			return ((::RPG::GameCore::HipplenInteractWorkConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_IIFINBAGBDG_OFFSET))(this, a1);
		}

		::System::Void IMMKPNJPLDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_IMMKPNJPLDP_OFFSET))(this);
		}

		::System::Void MMKDPAPJBLJ(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_MMKDPAPJBLJ_OFFSET))(this, a1);
		}

		::System::Void HFGGADCMEIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_HFGGADCMEIH_OFFSET))(this);
		}

		::System::Void FOLPPJNKKCM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_FOLPPJNKKCM_OFFSET))(this, a1);
		}

		::System::Void MDJJMCECOIA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_MDJJMCECOIA_OFFSET))(this, a1);
		}

		::KDIJJFMOHEC_PFBNNGIFCFF* GELEIOJNDGP()
		{
			return ((::KDIJJFMOHEC_PFBNNGIFCFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_GELEIOJNDGP_OFFSET))(this);
		}

		::RPG::GameCore::ActivityHipplenInteractInfoRow* PAHEIGLPKJE()
		{
			return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIJJFMOHEC_PAHEIGLPKJE_OFFSET))(this);
		}

	};
