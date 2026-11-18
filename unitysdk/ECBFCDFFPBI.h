#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJEKKPINGNN.h"

namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define ECBFCDFFPBI_BPBHIIDIJAA_OFFSET UNITYSDK_OFFSET(0xF9B6B20)
#define ECBFCDFFPBI_EAIANNCCPNB_OFFSET UNITYSDK_OFFSET(0xF9B69F0)
#define ECBFCDFFPBI_EDBDPDJAIEB_OFFSET UNITYSDK_OFFSET(0xF9B6890)
#define ECBFCDFFPBI_EGHBMCOKHOH_OFFSET UNITYSDK_OFFSET(0xF9B6B30)
#define ECBFCDFFPBI_FFKAABNOMEG_OFFSET UNITYSDK_OFFSET(0xF9B69E0)
#define ECBFCDFFPBI_GBCIOIMAIJL_OFFSET UNITYSDK_OFFSET(0xF9B6AA0)
#define ECBFCDFFPBI_KIBKMMDLHFD_OFFSET UNITYSDK_OFFSET(0xF9B66A0)
#define ECBFCDFFPBI_KKDOBHLNHOP_OFFSET UNITYSDK_OFFSET(0xF9B6630)
#define ECBFCDFFPBI__CTOR_OFFSET UNITYSDK_OFFSET(0xF9B6880)

inline static constexpr unsigned int ECBFCDFFPBI_TypeDefinitionIndex = 59632;

class ECBFCDFFPBI : public ::HJEKKPINGNN
{
public:
	::UnityEngine::Events::UnityAction* JKMLEJCMOAE; // 0x30
	::UnityEngine::UI::Extension::UIButtonBase* PHDLHCELKKC; // 0x38
	::System::Boolean _JFLECCJGJFL_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBFCDFFPBI__CTOR_OFFSET))(this);
	}

	::System::Void KKDOBHLNHOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBFCDFFPBI_KKDOBHLNHOP_OFFSET))(this);
	}

	::System::Void KIBKMMDLHFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBFCDFFPBI_KIBKMMDLHFD_OFFSET))(this);
	}

	::System::Void EDBDPDJAIEB(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + ECBFCDFFPBI_EDBDPDJAIEB_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Boolean FFKAABNOMEG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBFCDFFPBI_FFKAABNOMEG_OFFSET))(this);
	}

	::System::Void EAIANNCCPNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBFCDFFPBI_EAIANNCCPNB_OFFSET))(this);
	}

	::System::Void GBCIOIMAIJL(::UnityEngine::UI::Extension::UIButtonBase* BJCIGIPMFCL, ::System::Int32 EHDLEOPFKDN, ::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonBase*, ::System::Int32, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + ECBFCDFFPBI_GBCIOIMAIJL_OFFSET))(this, BJCIGIPMFCL, EHDLEOPFKDN, EJGDHCIBCJH);
	}

	::System::Void BPBHIIDIJAA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECBFCDFFPBI_BPBHIIDIJAA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EGHBMCOKHOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBFCDFFPBI_EGHBMCOKHOH_OFFSET))(this);
	}
};
