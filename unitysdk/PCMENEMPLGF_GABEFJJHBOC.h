#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class PCMENEMPLGF;
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PCMENEMPLGF_GABEFJJHBOC_FIIBAMIPPII_OFFSET UNITYSDK_OFFSET(0x11B58580)
#define PCMENEMPLGF_GABEFJJHBOC_HJPKADJLKEC_OFFSET UNITYSDK_OFFSET(0x11B587C0)
#define PCMENEMPLGF_GABEFJJHBOC_ILKPAAJDMCE_OFFSET UNITYSDK_OFFSET(0x11B58C50)
#define PCMENEMPLGF_GABEFJJHBOC_MPGDPPOHHCH_OFFSET UNITYSDK_OFFSET(0x11B58340)
#define PCMENEMPLGF_GABEFJJHBOC__CTOR_OFFSET UNITYSDK_OFFSET(0x11B58330)

inline static constexpr unsigned int PCMENEMPLGF_GABEFJJHBOC_TypeDefinitionIndex = 62826;

class PCMENEMPLGF_GABEFJJHBOC : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EECGFBPFAOF; // 0x10
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JDIGKLJLOLA; // 0x20
	::UnityEngine::Color KNBEFIKPGFC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_GABEFJJHBOC__CTOR_OFFSET))(this);
	}

	::System::String* MPGDPPOHHCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_GABEFJJHBOC_MPGDPPOHHCH_OFFSET))(this);
	}

	::System::String* FIIBAMIPPII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_GABEFJJHBOC_FIIBAMIPPII_OFFSET))(this);
	}

	::System::String* HJPKADJLKEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_GABEFJJHBOC_HJPKADJLKEC_OFFSET))(this);
	}

	::System::String* ILKPAAJDMCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_GABEFJJHBOC_ILKPAAJDMCE_OFFSET))(this);
	}
};
