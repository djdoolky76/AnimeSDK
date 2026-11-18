#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define GMILJAKIGMG_MNJFJIHBBLL_OFGAJKPGBON_OFFSET UNITYSDK_OFFSET(0x15B2C3F0)
#define GMILJAKIGMG_MNJFJIHBBLL__CTOR_OFFSET UNITYSDK_OFFSET(0x15B2C3E0)

inline static constexpr unsigned int GMILJAKIGMG_MNJFJIHBBLL_TypeDefinitionIndex = 81088;

class GMILJAKIGMG_MNJFJIHBBLL : public ::System::Object
{
public:
	::UnityEngine::Animation* BKOLCDPOJAL; // 0x10
	::System::String* HIAIKHDFCLN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMILJAKIGMG_MNJFJIHBBLL__CTOR_OFFSET))(this);
	}

	::System::Void OFGAJKPGBON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMILJAKIGMG_MNJFJIHBBLL_OFGAJKPGBON_OFFSET))(this);
	}
};
