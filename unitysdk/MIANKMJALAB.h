#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FJCHBJKDLLH;
class FMPCODLIOLG;
class GNMCMJDIMAA;
class HEOBEHMGCMG;
class PMPMKGFGICF;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define MIANKMJALAB_AAFDOHAMBOH_OFFSET UNITYSDK_OFFSET(0x1B36DB30)
#define MIANKMJALAB_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1B36D7F0)
#define MIANKMJALAB_CBHFBDCOAFF_OFFSET UNITYSDK_OFFSET(0x1B36D2E0)
#define MIANKMJALAB_CFLMMIMOJCE_OFFSET UNITYSDK_OFFSET(0x1B36D610)
#define MIANKMJALAB_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0x1B36DD00)
#define MIANKMJALAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B36DEA0)
#define MIANKMJALAB_DCODHLFNNGL_OFFSET UNITYSDK_OFFSET(0x1B36D460)
#define MIANKMJALAB_DGMBHHIANKI_OFFSET UNITYSDK_OFFSET(0x1B36D5C0)
#define MIANKMJALAB_EEBPFJBGKAP_OFFSET UNITYSDK_OFFSET(0x1B36DC60)
#define MIANKMJALAB_EHBGBIBFFAJ_OFFSET UNITYSDK_OFFSET(0x1B36D9E0)
#define MIANKMJALAB_EMFHBBJJGHG_OFFSET UNITYSDK_OFFSET(0x1B36D8A0)
#define MIANKMJALAB_FEGFHCCDKNE_OFFSET UNITYSDK_OFFSET(0x1B36DD90)
#define MIANKMJALAB_FNFBPFAOELN_OFFSET UNITYSDK_OFFSET(0x1B36DBB0)
#define MIANKMJALAB_FONIBOKMJMK_OFFSET UNITYSDK_OFFSET(0x1B36D660)
#define MIANKMJALAB_HCMPNPMEIKP_OFFSET UNITYSDK_OFFSET(0x1B36D6B0)
#define MIANKMJALAB_NEBEIPJLDMJ_OFFSET UNITYSDK_OFFSET(0x1B36DE20)
#define MIANKMJALAB_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0x1B36DDE0)
#define MIANKMJALAB_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1B36DD40)
#define MIANKMJALAB__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1B36D520)
#define MIANKMJALAB__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B36CF30)
#define MIANKMJALAB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B36D3E0)
#define MIANKMJALAB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B36D560)

inline static constexpr unsigned int MIANKMJALAB_TypeDefinitionIndex = 73367;

	class MIANKMJALAB : public ::FMPCODLIOLG
	{
	public:
		::HEOBEHMGCMG* LGKIBCBINEM; // 0x60
		::FJCHBJKDLLH* IPLHEPAIKFD; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::PMPMKGFGICF* MKNJNDLHMLA; // 0x78
		::UnityEngine::Transform* MOGAILKHMNA; // 0x80
		::UnityEngine::Transform* HCLHJIIKNNJ; // 0x88
		::UnityEngine::UI::Text* JLLGNMLKCJC; // 0x90
		::GNMCMJDIMAA* JCMPJLEDFAA; // 0x98
		::System::Boolean IDBHEIBEGBA; // 0xA0
		::System::Byte _padding0[0x3];
		::RPG::GameCore::CharacterHUDType PKJHLMMKILL; // 0xA4
		::System::Int32 FFNBLDFFMCN; // 0xA8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* CNMCPHAJAJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB__ONBIND_OFFSET))(this);
		}

		::System::Void CBHFBDCOAFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB_CBHFBDCOAFF_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + MIANKMJALAB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void DCODHLFNNGL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MIANKMJALAB_DCODHLFNNGL_OFFSET))(this, a1);
		}

		::System::Void DGMBHHIANKI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIANKMJALAB_DGMBHHIANKI_OFFSET))(this, a1);
		}

		::System::Void CFLMMIMOJCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB_CFLMMIMOJCE_OFFSET))(this);
		}

		::System::Void FONIBOKMJMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB_FONIBOKMJMK_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB__SETUPVIEW_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIANKMJALAB_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void EMFHBBJJGHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIANKMJALAB_EMFHBBJJGHG_OFFSET))(this, a1);
		}

		::System::Void EHBGBIBFFAJ(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIANKMJALAB_EHBGBIBFFAJ_OFFSET))(this, a1, a2);
		}

		::System::Void HCMPNPMEIKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB_HCMPNPMEIKP_OFFSET))(this);
		}

		::System::Void AAFDOHAMBOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB_AAFDOHAMBOH_OFFSET))(this);
		}

		::System::Void FNFBPFAOELN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIANKMJALAB_FNFBPFAOELN_OFFSET))(this, a1);
		}

		::System::Void EEBPFJBGKAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB_EEBPFJBGKAP_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CGDNPIJGNNK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB_CGDNPIJGNNK_OFFSET))(this);
		}

		::System::Int32 PCKEJOJIOOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB_PCKEJOJIOOM_OFFSET))(this);
		}

		::RPG::GameCore::CharacterHUDType FEGFHCCDKNE()
		{
			return ((::RPG::GameCore::CharacterHUDType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB_FEGFHCCDKNE_OFFSET))(this);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Boolean NEBEIPJLDMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANKMJALAB_NEBEIPJLDMJ_OFFSET))(this);
		}

	};
