#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPMFOHDCMFF.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KCMGAIFFBPL;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Text; }

#define LOBFGPKEKOB_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0xB7F2A30)
#define LOBFGPKEKOB_BAKIIABNOFG_OFFSET UNITYSDK_OFFSET(0xB7F2AC0)
#define LOBFGPKEKOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7F3140)
#define LOBFGPKEKOB_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0xB7F28A0)
#define LOBFGPKEKOB_GMFCFCGIOEB_OFFSET UNITYSDK_OFFSET(0xB7F2F40)
#define LOBFGPKEKOB_HJCLBHDEPKG_OFFSET UNITYSDK_OFFSET(0xB7F2C90)
#define LOBFGPKEKOB_KCPMJOILBAA_OFFSET UNITYSDK_OFFSET(0xB7F2D40)
#define LOBFGPKEKOB_LOFEKLDHMHA_OFFSET UNITYSDK_OFFSET(0xB7F2ED0)
#define LOBFGPKEKOB_OFNNKAKNCFB_OFFSET UNITYSDK_OFFSET(0xB7F2C00)
#define LOBFGPKEKOB_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB7F2850)
#define LOBFGPKEKOB_PDJEELONEOI_OFFSET UNITYSDK_OFFSET(0xB7F2E10)
#define LOBFGPKEKOB__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7F27D0)

inline static constexpr unsigned int LOBFGPKEKOB_TypeDefinitionIndex = 71751;

	class LOBFGPKEKOB : public ::GPMFOHDCMFF
	{
	public:
		::UnityEngine::Animator* CFNGLMDMENE; // 0x68
		::UnityEngine::UI::Text* BFPHJEFDDNB; // 0x70
		::RPG::GameCore::FixPoint FADFHGIJLCK; // 0x78
		::System::Boolean ANHLMBLPDBP; // 0x80
		::System::Byte _padding0[0x3];
		::RPG::GameCore::EnergyBarState LLBADFLDEIA; // 0x84
		::RPG::GameCore::FixPoint DGPGFPKOHCA; // 0x88
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* LGIGALKBHLA; // 0x0
		// static const ::System::String* CLNKJHCNIBO; // 0x0
		// static const ::System::String* ODIALKBLDDJ; // 0x0
		// static const ::System::String* CKCDPJALNII; // 0x0
		// static const ::System::String* OBOIJOJOHEK; // 0x0
		// static const ::System::String* FMMIMLOBFGO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFGPKEKOB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFGPKEKOB__ONBIND_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFGPKEKOB_ONRETURN_OFFSET))(this);
		}

		::System::Void GGAHGOJJBIP(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + LOBFGPKEKOB_GGAHGOJJBIP_OFFSET))(this, a1);
		}

		::System::Void HJCLBHDEPKG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOBFGPKEKOB_HJCLBHDEPKG_OFFSET))(this, a1);
		}

		::System::Void BAKIIABNOFG(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + LOBFGPKEKOB_BAKIIABNOFG_OFFSET))(this, a1);
		}

		::System::Void AJLCJJOOOOE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOBFGPKEKOB_AJLCJJOOOOE_OFFSET))(this, a1);
		}

		::System::Void KCPMJOILBAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFGPKEKOB_KCPMJOILBAA_OFFSET))(this);
		}

		::System::Void PDJEELONEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFGPKEKOB_PDJEELONEOI_OFFSET))(this);
		}

		::System::String* LOFEKLDHMHA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBFGPKEKOB_LOFEKLDHMHA_OFFSET))(this);
		}

		::System::Void OFNNKAKNCFB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LOBFGPKEKOB_OFNNKAKNCFB_OFFSET))(this, a1);
		}

		::System::Void GMFCFCGIOEB(::UnityEngine::Animator* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + LOBFGPKEKOB_GMFCFCGIOEB_OFFSET))(this, a1, a2);
		}

	};
