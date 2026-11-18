#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define GPPMPHICDEA_PJKNGNBFJOI_ILNFAEADFJA_OFFSET UNITYSDK_OFFSET(0x13E043D0)
#define GPPMPHICDEA_PJKNGNBFJOI__CTOR_OFFSET UNITYSDK_OFFSET(0x13E043C0)

inline static constexpr unsigned int GPPMPHICDEA_PJKNGNBFJOI_TypeDefinitionIndex = 42639;

class GPPMPHICDEA_PJKNGNBFJOI : public ::System::Object
{
public:
	::System::String* OLOMNNBBHPJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_PJKNGNBFJOI__CTOR_OFFSET))(this);
	}

	::System::Void ILNFAEADFJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_PJKNGNBFJOI_ILNFAEADFJA_OFFSET))(this);
	}
};
