#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPMFOHDCMFF.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KCMGAIFFBPL;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define LOICGOMHPCA_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0xB8048C0)
#define LOICGOMHPCA_BAKIIABNOFG_OFFSET UNITYSDK_OFFSET(0xB804950)
#define LOICGOMHPCA_CTOR_OFFSET UNITYSDK_OFFSET(0xB805100)
#define LOICGOMHPCA_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0xB804530)
#define LOICGOMHPCA_GMFCFCGIOEB_OFFSET UNITYSDK_OFFSET(0xB804F00)
#define LOICGOMHPCA_HJCLBHDEPKG_OFFSET UNITYSDK_OFFSET(0xB804C50)
#define LOICGOMHPCA_KCPMJOILBAA_OFFSET UNITYSDK_OFFSET(0xB804D00)
#define LOICGOMHPCA_LOFEKLDHMHA_OFFSET UNITYSDK_OFFSET(0xB804E90)
#define LOICGOMHPCA_OFNNKAKNCFB_OFFSET UNITYSDK_OFFSET(0xB804BC0)
#define LOICGOMHPCA_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB8044E0)
#define LOICGOMHPCA_PDJEELONEOI_OFFSET UNITYSDK_OFFSET(0xB804DD0)
#define LOICGOMHPCA__ONBIND_OFFSET UNITYSDK_OFFSET(0xB804390)

inline static constexpr unsigned int LOICGOMHPCA_TypeDefinitionIndex = 71755;

	class LOICGOMHPCA : public ::GPMFOHDCMFF
	{
	public:
		::UnityEngine::Animator* CFNGLMDMENE; // 0x68
		::UnityEngine::UI::Text* BKNMOHNMHJP; // 0x70
		::UnityEngine::UI::Text* FMFPEOGMDLE; // 0x78
		::UnityEngine::UI::Image* CLGLAMAGHDB; // 0x80
		::UnityEngine::UI::Image* KPJABAOCFLE; // 0x88
		::UnityEngine::UI::Text* HIPHDLIIPNJ; // 0x90
		::UnityEngine::UI::Text* LPHFOJAILDL; // 0x98
		::RPG::GameCore::EnergyBarState LLBADFLDEIA; // 0xA0
		::System::Boolean ANHLMBLPDBP; // 0xA4
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint FADFHGIJLCK; // 0xA8
		::RPG::GameCore::FixPoint DGPGFPKOHCA; // 0xB0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* LGIGALKBHLA; // 0x0
		// static const ::System::String* CLNKJHCNIBO; // 0x0
		// static const ::System::String* ODIALKBLDDJ; // 0x0
		// static const ::System::String* CKCDPJALNII; // 0x0
		// static const ::System::String* FMMIMLOBFGO; // 0x0
		// static const ::System::String* NOEKNNOEBLG; // 0x0
		// static const ::System::String* PNOIGDDGEBA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOICGOMHPCA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOICGOMHPCA__ONBIND_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOICGOMHPCA_ONRETURN_OFFSET))(this);
		}

		::System::Void GGAHGOJJBIP(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + LOICGOMHPCA_GGAHGOJJBIP_OFFSET))(this, a1);
		}

		::System::Void HJCLBHDEPKG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOICGOMHPCA_HJCLBHDEPKG_OFFSET))(this, a1);
		}

		::System::Void BAKIIABNOFG(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + LOICGOMHPCA_BAKIIABNOFG_OFFSET))(this, a1);
		}

		::System::Void AJLCJJOOOOE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOICGOMHPCA_AJLCJJOOOOE_OFFSET))(this, a1);
		}

		::System::Void KCPMJOILBAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOICGOMHPCA_KCPMJOILBAA_OFFSET))(this);
		}

		::System::Void PDJEELONEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOICGOMHPCA_PDJEELONEOI_OFFSET))(this);
		}

		::System::String* LOFEKLDHMHA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOICGOMHPCA_LOFEKLDHMHA_OFFSET))(this);
		}

		::System::Void OFNNKAKNCFB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LOICGOMHPCA_OFNNKAKNCFB_OFFSET))(this, a1);
		}

		::System::Void GMFCFCGIOEB(::UnityEngine::Animator* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + LOICGOMHPCA_GMFCFCGIOEB_OFFSET))(this, a1, a2);
		}

	};
