#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKBIMHDIBIF_GPLEPMILLBG__CTOR_OFFSET UNITYSDK_OFFSET(0x12D00CB0)

inline static constexpr unsigned int AKBIMHDIBIF_GPLEPMILLBG_TypeDefinitionIndex = 58145;

class AKBIMHDIBIF_GPLEPMILLBG : public ::System::Object
{
public:
	// static const ::System::String* FLJFGHANAPN; // 0x0
	// static const ::System::String* PCFOCCHAKLL; // 0x0
	// static const ::System::String* HPELNFEHKCG; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBIMHDIBIF_GPLEPMILLBG__CTOR_OFFSET))(this);
	}
};
