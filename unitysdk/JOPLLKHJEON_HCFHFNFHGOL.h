#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JOPLLKHJEON_OMBLDLFAIMM;
namespace UnityEngine::UI { class LayoutElement; }

#define JOPLLKHJEON_HCFHFNFHGOL_GIFMLPKONAM_OFFSET UNITYSDK_OFFSET(0x19476200)
#define JOPLLKHJEON_HCFHFNFHGOL__CTOR_OFFSET UNITYSDK_OFFSET(0x194761F0)

inline static constexpr unsigned int JOPLLKHJEON_HCFHFNFHGOL_TypeDefinitionIndex = 62013;

class JOPLLKHJEON_HCFHFNFHGOL : public ::System::Object
{
public:
	::UnityEngine::UI::LayoutElement* LOKPFMHIPPI; // 0x10
	::JOPLLKHJEON_OMBLDLFAIMM* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPLLKHJEON_HCFHFNFHGOL__CTOR_OFFSET))(this);
	}

	::System::Void GIFMLPKONAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOPLLKHJEON_HCFHFNFHGOL_GIFMLPKONAM_OFFSET))(this);
	}
};
