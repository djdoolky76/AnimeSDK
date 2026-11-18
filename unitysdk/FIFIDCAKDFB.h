#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FIFIDCAKDFB_JPENFNKNPFN_OFFSET UNITYSDK_OFFSET(0x156BEB60)
#define FIFIDCAKDFB_MHKDOEFPBLF_OFFSET UNITYSDK_OFFSET(0x156BE8E0)

inline static constexpr unsigned int FIFIDCAKDFB_TypeDefinitionIndex = 44399;

class FIFIDCAKDFB : public ::System::Object
{
public:
	// static const ::System::String* DICEPCMMAFG; // 0x0
	// static const ::System::String* JHHPHPMHGKE; // 0x0

	static ::UnityEngine::Color MHKDOEFPBLF(::System::UInt32 HCKDKJHAOMF)
	{
		return ((::UnityEngine::Color(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FIFIDCAKDFB_MHKDOEFPBLF_OFFSET))(HCKDKJHAOMF);
	}

	static ::System::Void JPENFNKNPFN(::UnityEngine::UI::Extension::UILocalizationText* FCKANAAMMIO, ::System::Boolean CACMHFNCPNM, ::System::UInt32 HCKDKJHAOMF, ::System::UInt32 NEHFONNELPO)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FIFIDCAKDFB_JPENFNKNPFN_OFFSET))(FCKANAAMMIO, CACMHFNCPNM, HCKDKJHAOMF, NEHFONNELPO);
	}
};
