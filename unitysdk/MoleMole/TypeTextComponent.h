#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class TypeTextComponent_MPDLPMIBGHK; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_TYPETEXTCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A0FEF80)
#define MOLEMOLE_TYPETEXTCOMPONENT_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1A0FEFD0)
#define MOLEMOLE_TYPETEXTCOMPONENT_GMNAMJKDPEF_OFFSET UNITYSDK_OFFSET(0x1A0FF440)
#define MOLEMOLE_TYPETEXTCOMPONENT_ISSKIPPABLE_OFFSET UNITYSDK_OFFSET(0x1A0FFAD0)
#define MOLEMOLE_TYPETEXTCOMPONENT_KNALGDKFNKO_OFFSET UNITYSDK_OFFSET(0x1A0FFD40)
#define MOLEMOLE_TYPETEXTCOMPONENT_SETONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A0FFB20)
#define MOLEMOLE_TYPETEXTCOMPONENT_SETREALTEXT_OFFSET UNITYSDK_OFFSET(0x1A0FF200)
#define MOLEMOLE_TYPETEXTCOMPONENT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1A0FF250)
#define MOLEMOLE_TYPETEXTCOMPONENT_SKIPTYPETEXT_OFFSET UNITYSDK_OFFSET(0x1A0FF8B0)
#define MOLEMOLE_TYPETEXTCOMPONENT_TYPETEXT_OFFSET UNITYSDK_OFFSET(0x1A0FF820)
#define MOLEMOLE_TYPETEXTCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A0FF1A0)
#define MOLEMOLE_TYPETEXTCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0FFBE0)
#define MOLEMOLE_TYPETEXTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FFB70)

namespace MoleMole
{
	inline static constexpr unsigned int TypeTextComponent_TypeDefinitionIndex = 91392;

	class TypeTextComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_KKFJOFHIDKO()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TypeTextComponent_TypeDefinitionIndex)->GetStaticField(0x48850);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_ACJOOMHJBKL()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TypeTextComponent_TypeDefinitionIndex)->GetStaticField(0x48858);
		}
		// static const ::System::String* GHKMCKFELCB; // 0x0
		// static const ::System::String* EMBAABDJLNO; // 0x0
		::System::Single _defaultSpeed; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Text* GFKCABHFFEE; // 0x20
		::System::String* GMGJKAMJMCE; // 0x28
		::System::String* FNBBCAPLIKM; // 0x30
		::UnityEngine::Coroutine* ODGLAEOBKFJ; // 0x38
		::MoleMole::TypeTextComponent_MPDLPMIBGHK* KNFNPHEFDHM; // 0x40
		::System::Single OABDJPFOHJP; // 0x48
		::System::Single NFGGDNFPEIK; // 0x4C
		::System::Text::StringBuilder* BIOMAMKFIAM; // 0x50
		::System::Boolean KPEJCPCLHCF; // 0x58
		::System::Byte _padding1[0x7];
		::System::String* KNDONPHAAHM; // 0x60
		::System::Int32 NBHLNDEOEMG; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_UPDATE_OFFSET))(this);
		}

		::System::Void SetRealText(::System::String* FCCLIEJAKLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_SETREALTEXT_OFFSET))(this, FCCLIEJAKLI);
		}

		::System::Void SetText(::System::String* FCCLIEJAKLI, ::System::Single IAKPGBCAAKM, ::System::Boolean KPEJCPCLHCF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_SETTEXT_OFFSET))(this, FCCLIEJAKLI, IAKPGBCAAKM, KPEJCPCLHCF);
		}

		::System::Void SkipTypeText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_SKIPTYPETEXT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* TypeText(::System::String* FCCLIEJAKLI)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_TYPETEXT_OFFSET))(this, FCCLIEJAKLI);
		}

		::System::Boolean IsSkippable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_ISSKIPPABLE_OFFSET))(this);
		}

		::System::Void SetOnComplete(::MoleMole::TypeTextComponent_MPDLPMIBGHK* HKEBHFKHBCC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TypeTextComponent_MPDLPMIBGHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_SETONCOMPLETE_OFFSET))(this, HKEBHFKHBCC);
		}

		::System::String* KNALGDKFNKO(::System::String* FCCLIEJAKLI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_KNALGDKFNKO_OFFSET))(this, FCCLIEJAKLI);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_BBOMJDBNHIC_OFFSET))(this);
		}

		::System::String* GMNAMJKDPEF(::System::String* FCCLIEJAKLI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_GMNAMJKDPEF_OFFSET))(this, FCCLIEJAKLI);
		}
	};
}
