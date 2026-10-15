#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FJHCAKDCLEF;
class HLFEDPHBLBE;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define HGCPKGBMMPH_AMMHPHJEMLL_OFFSET UNITYSDK_OFFSET(0x15C85E90)
#define HGCPKGBMMPH_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x15C85A10)
#define HGCPKGBMMPH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C86290)
#define HGCPKGBMMPH_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15C85A60)
#define HGCPKGBMMPH_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x15C85850)
#define HGCPKGBMMPH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15C85550)
#define HGCPKGBMMPH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15C85360)
#define HGCPKGBMMPH_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x15C85380)
#define HGCPKGBMMPH_GGGPEKKMBHP_OFFSET UNITYSDK_OFFSET(0x15C85B90)
#define HGCPKGBMMPH_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x15C855A0)
#define HGCPKGBMMPH_KGDGCEKOMNE_OFFSET UNITYSDK_OFFSET(0x15C857D0)
#define HGCPKGBMMPH_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15C853E0)
#define HGCPKGBMMPH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15C85AF0)
#define HGCPKGBMMPH_PGPGMIIAHAE_OFFSET UNITYSDK_OFFSET(0x15C85CB0)
#define HGCPKGBMMPH_PIIIJNEACHE_OFFSET UNITYSDK_OFFSET(0x15C860E0)
#define HGCPKGBMMPH_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15C85370)
#define HGCPKGBMMPH__ONBIND_OFFSET UNITYSDK_OFFSET(0x15C851C0)

inline static constexpr unsigned int HGCPKGBMMPH_TypeDefinitionIndex = 71705;

	class HGCPKGBMMPH : public ::FMPCODLIOLG
	{
	public:
		::FJHCAKDCLEF* DMFEKIIDMFL; // 0x60
		::UnityEngine::UI::Text* GBFKFBCCLKK; // 0x68
		::UnityEngine::Transform* EMCOODAIONP; // 0x70
		::UnityEngine::Transform* ILHPAIHKJNN; // 0x78
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x80
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x88
		::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x90
		::UnityEngine::UI::Button* JOODINOFCLL; // 0x98
		::UnityEngine::UI::Text* HCPKJEKHAPF; // 0xA0
		::UnityEngine::Transform* JNLPLFIOEAN; // 0xA8
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0xB0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xB8
		::System::UInt32 LBADPLDHDPE; // 0xC0
		::System::Int32 _Index_k__BackingField; // 0xC4
		// static const ::System::String* LGNIMOIHBEK; // 0x0
		// static const ::System::String* CKKEBDJGLGJ; // 0x0
		// static const ::System::String* AMADNKBJFIL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCPKGBMMPH__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_GET_TRANS_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::FJHCAKDCLEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJHCAKDCLEF*))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void GGGPEKKMBHP(::HLFEDPHBLBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLFEDPHBLBE*))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_GGGPEKKMBHP_OFFSET))(this, a1);
		}

		::System::Void KGDGCEKOMNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_KGDGCEKOMNE_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void AMMHPHJEMLL(::HLFEDPHBLBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLFEDPHBLBE*))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_AMMHPHJEMLL_OFFSET))(this, a1);
		}

		::System::Void PGPGMIIAHAE(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_PGPGMIIAHAE_OFFSET))(this, a1, a2);
		}

		::System::Void PIIIJNEACHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGCPKGBMMPH_PIIIJNEACHE_OFFSET))(this, a1);
		}

	};
