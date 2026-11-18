#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class BLCIDFMMHIL;
class IGFKHLHKOAP;

#define IGFKHLHKOAP_FBMDFOAEGJA__CTOR_OFFSET UNITYSDK_OFFSET(0x153A61B0)

inline static constexpr unsigned int IGFKHLHKOAP_FBMDFOAEGJA_TypeDefinitionIndex = 64014;

class IGFKHLHKOAP_FBMDFOAEGJA : public ::System::Object
{
public:
	::IGFKHLHKOAP* KLHPEBKNIFB; // 0x10
	::BLCIDFMMHIL* OGMFOALCDAE; // 0x18
	::HOCDHMEPPEG MKGINGALGCN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_FBMDFOAEGJA__CTOR_OFFSET))(this);
	}
};
