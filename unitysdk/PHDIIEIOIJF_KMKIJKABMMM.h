#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGFBDEFDLAM;

#define PHDIIEIOIJF_KMKIJKABMMM_FIGDBNOKOCO_OFFSET UNITYSDK_OFFSET(0x178CC5A0)
#define PHDIIEIOIJF_KMKIJKABMMM__CTOR_OFFSET UNITYSDK_OFFSET(0x178CC590)

inline static constexpr unsigned int PHDIIEIOIJF_KMKIJKABMMM_TypeDefinitionIndex = 48109;

class PHDIIEIOIJF_KMKIJKABMMM : public ::System::Object
{
public:
	::AGFBDEFDLAM* IKHHLFCGLBP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDIIEIOIJF_KMKIJKABMMM__CTOR_OFFSET))(this);
	}

	::System::Void FIGDBNOKOCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDIIEIOIJF_KMKIJKABMMM_FIGDBNOKOCO_OFFSET))(this);
	}
};
