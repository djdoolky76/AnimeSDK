#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AJOGKBGIPGN;
class BKMPDMKHBOK;
class FJCHBJKDLLH;
class FJJDEHFCIIL;
class FMPCODLIOLG;
class GJGLDDAHDHG;
class GNMCMJDIMAA;
class MHOEIMBHDGK;
class MPJNLFLJDLA;
class PMPMKGFGICF;
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define GIPFFGFJCBF_AAFDOHAMBOH_OFFSET UNITYSDK_OFFSET(0x1A3F8340)
#define GIPFFGFJCBF_AJCEKLOAHDH_OFFSET UNITYSDK_OFFSET(0x1A3F7AE0)
#define GIPFFGFJCBF_APGHHMOCMMM_OFFSET UNITYSDK_OFFSET(0x1A3F7D90)
#define GIPFFGFJCBF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A3F85F0)
#define GIPFFGFJCBF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A3F86C0)
#define GIPFFGFJCBF_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1A3F7B60)
#define GIPFFGFJCBF_CBHFBDCOAFF_OFFSET UNITYSDK_OFFSET(0x1A3F6820)
#define GIPFFGFJCBF_CELBGENCNGD_OFFSET UNITYSDK_OFFSET(0x1A3F8090)
#define GIPFFGFJCBF_CFLMMIMOJCE_OFFSET UNITYSDK_OFFSET(0x1A3F7480)
#define GIPFFGFJCBF_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0x1A3F83A0)
#define GIPFFGFJCBF_CGOHFICPALD_OFFSET UNITYSDK_OFFSET(0x1A3F8530)
#define GIPFFGFJCBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F8760)
#define GIPFFGFJCBF_DCODHLFNNGL_OFFSET UNITYSDK_OFFSET(0x1A3F71E0)
#define GIPFFGFJCBF_DGMBHHIANKI_OFFSET UNITYSDK_OFFSET(0x1A3F7430)
#define GIPFFGFJCBF_EEBPFJBGKAP_OFFSET UNITYSDK_OFFSET(0x1A3F7F50)
#define GIPFFGFJCBF_EHBGBIBFFAJ_OFFSET UNITYSDK_OFFSET(0x1A3F8000)
#define GIPFFGFJCBF_EKMBJNEBKBJ_OFFSET UNITYSDK_OFFSET(0x1A3F7060)
#define GIPFFGFJCBF_EMFHBBJJGHG_OFFSET UNITYSDK_OFFSET(0x1A3F7ED0)
#define GIPFFGFJCBF_FCFPGAMLGJA_OFFSET UNITYSDK_OFFSET(0x1A3F6D00)
#define GIPFFGFJCBF_FEGFHCCDKNE_OFFSET UNITYSDK_OFFSET(0x1A3F8440)
#define GIPFFGFJCBF_FKAMHDCJLJG_OFFSET UNITYSDK_OFFSET(0x1A3F6930)
#define GIPFFGFJCBF_FNFBPFAOELN_OFFSET UNITYSDK_OFFSET(0x1A3F7FA0)
#define GIPFFGFJCBF_FONIBOKMJMK_OFFSET UNITYSDK_OFFSET(0x1A3F74E0)
#define GIPFFGFJCBF_HCMPNPMEIKP_OFFSET UNITYSDK_OFFSET(0x1A3F7530)
#define GIPFFGFJCBF_IGNGPMMNMIM_OFFSET UNITYSDK_OFFSET(0x1A3F7870)
#define GIPFFGFJCBF_IPBMLGAHOJB_OFFSET UNITYSDK_OFFSET(0x1A3F6F30)
#define GIPFFGFJCBF_KCDFLALIPIO_OFFSET UNITYSDK_OFFSET(0x1A3F76F0)
#define GIPFFGFJCBF_KCODHKAAGFB_OFFSET UNITYSDK_OFFSET(0x1A3F7C10)
#define GIPFFGFJCBF_LLLDCKOAAAB_OFFSET UNITYSDK_OFFSET(0x1A3F6BA0)
#define GIPFFGFJCBF_MGLBNIFIBIF_OFFSET UNITYSDK_OFFSET(0x1A3F7780)
#define GIPFFGFJCBF_NEBEIPJLDMJ_OFFSET UNITYSDK_OFFSET(0x1A3F84D0)
#define GIPFFGFJCBF_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0x1A3F8490)
#define GIPFFGFJCBF_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1A3F83F0)
#define GIPFFGFJCBF__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1A3F72B0)
#define GIPFFGFJCBF__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A3F5DC0)
#define GIPFFGFJCBF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A3F7150)
#define GIPFFGFJCBF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A3F7330)
#define GIPFFGFJCBF___ONBIND_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A3F8790)

inline static constexpr unsigned int GIPFFGFJCBF_TypeDefinitionIndex = 73412;

	class GIPFFGFJCBF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* KDCAMNMEGAD; // 0x60
		::RPG::Client::PrefabLoadMeta* JJFOOEEELPG; // 0x68
		::MHOEIMBHDGK* LFEDKGDBGGF; // 0x70
		::GNMCMJDIMAA* JCMPJLEDFAA; // 0x78
		::BKMPDMKHBOK* OADDNIDAOEJ; // 0x80
		::UnityEngine::Transform* PILIBLJGLPP; // 0x88
		::UnityEngine::Transform* ELFNIKLDAGO; // 0x90
		::UnityEngine::Transform* MOGAILKHMNA; // 0x98
		::UnityEngine::Transform* EJDADDHBPCM; // 0xA0
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xA8
		::UnityEngine::UI::Text* JLLGNMLKCJC; // 0xB0
		::UnityEngine::Transform* DMGCALAAEJP; // 0xB8
		::RPG::GameCore::SpecialAvatarRow* PHDPOMDNDLA; // 0xC0
		::UnityEngine::UI::Text* OJHEKOMJGCM; // 0xC8
		::RPG::Client::MonoUIColorSwitcher* NKABIONLONM; // 0xD0
		::UnityEngine::Transform* CPNOLDPAPLJ; // 0xD8
		::UnityEngine::UI::Text* LBONONJNNIO; // 0xE0
		::UnityEngine::Transform* FDMEHLCNBCJ; // 0xE8
		::GJGLDDAHDHG* BJJCJCLKPEB; // 0xF0
		::UnityEngine::Transform* HCLHJIIKNNJ; // 0xF8
		::FJJDEHFCIIL* LJADIDLONKO; // 0x100
		::FJCHBJKDLLH* IPLHEPAIKFD; // 0x108
		::RPG::GameCore::AvatarDataComponent* HFKMDPCLJJB; // 0x110
		::MPJNLFLJDLA* ANKLIGBBBEL; // 0x118
		::UnityEngine::Transform* FPNAJDCNMCF; // 0x120
		::PMPMKGFGICF* MKNJNDLHMLA; // 0x128
		::System::Int32 FFNBLDFFMCN; // 0x130
		::System::Boolean IDBHEIBEGBA; // 0x134
		::System::Byte _padding0[0x3];
		::RPG::GameCore::CharacterHUDType PKJHLMMKILL; // 0x138
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* FJPLFDDGFED; // 0x0
		// static const ::System::String* CNMCPHAJAJO; // 0x0
		// static const ::System::String* MMOCFOHKGBI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF__ONBIND_OFFSET))(this);
		}

		::System::Void CBHFBDCOAFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_CBHFBDCOAFF_OFFSET))(this);
		}

		::System::Void FKAMHDCJLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_FKAMHDCJLJG_OFFSET))(this);
		}

		::System::Void FCFPGAMLGJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_FCFPGAMLGJA_OFFSET))(this);
		}

		::System::Void IPBMLGAHOJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_IPBMLGAHOJB_OFFSET))(this);
		}

		::System::Void LLLDCKOAAAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_LLLDCKOAAAB_OFFSET))(this);
		}

		::System::Void EKMBJNEBKBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_EKMBJNEBKBJ_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GIPFFGFJCBF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void DCODHLFNNGL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_DCODHLFNNGL_OFFSET))(this, a1);
		}

		::System::Void DGMBHHIANKI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_DGMBHHIANKI_OFFSET))(this, a1);
		}

		::System::Void CFLMMIMOJCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_CFLMMIMOJCE_OFFSET))(this);
		}

		::System::Void FONIBOKMJMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_FONIBOKMJMK_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF__SETUPVIEW_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void EMFHBBJJGHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_EMFHBBJJGHG_OFFSET))(this, a1);
		}

		::System::Void EEBPFJBGKAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_EEBPFJBGKAP_OFFSET))(this);
		}

		::System::Void FNFBPFAOELN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_FNFBPFAOELN_OFFSET))(this, a1);
		}

		::System::Void EHBGBIBFFAJ(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_EHBGBIBFFAJ_OFFSET))(this, a1, a2);
		}

		::System::Void CELBGENCNGD(::AJOGKBGIPGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJOGKBGIPGN*))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_CELBGENCNGD_OFFSET))(this, a1);
		}

		::System::Void AAFDOHAMBOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_AAFDOHAMBOH_OFFSET))(this);
		}

		::System::Void APGHHMOCMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_APGHHMOCMMM_OFFSET))(this);
		}

		::System::Void HCMPNPMEIKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_HCMPNPMEIKP_OFFSET))(this);
		}

		::System::Void KCODHKAAGFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_KCODHKAAGFB_OFFSET))(this);
		}

		::System::Void KCDFLALIPIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_KCDFLALIPIO_OFFSET))(this);
		}

		::System::Void MGLBNIFIBIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_MGLBNIFIBIF_OFFSET))(this);
		}

		::System::Void IGNGPMMNMIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_IGNGPMMNMIM_OFFSET))(this);
		}

		::System::Void AJCEKLOAHDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_AJCEKLOAHDH_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CGDNPIJGNNK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_CGDNPIJGNNK_OFFSET))(this);
		}

		::System::Int32 PCKEJOJIOOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_PCKEJOJIOOM_OFFSET))(this);
		}

		::RPG::GameCore::CharacterHUDType FEGFHCCDKNE()
		{
			return ((::RPG::GameCore::CharacterHUDType(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_FEGFHCCDKNE_OFFSET))(this);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Boolean NEBEIPJLDMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_NEBEIPJLDMJ_OFFSET))(this);
		}

		::System::Void CGOHFICPALD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_CGOHFICPALD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __OnBind_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPFFGFJCBF___ONBIND_B__1_0_OFFSET))(this);
		}

	};
