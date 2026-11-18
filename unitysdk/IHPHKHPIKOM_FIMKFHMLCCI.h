#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKCGFNKLIBA;
class IHPHKHPIKOM;
class IPFNGDNNODB;

#define IHPHKHPIKOM_FIMKFHMLCCI_CGABDJGKAKE_OFFSET UNITYSDK_OFFSET(0x197C85A0)
#define IHPHKHPIKOM_FIMKFHMLCCI__CTOR_OFFSET UNITYSDK_OFFSET(0x197C8590)

inline static constexpr unsigned int IHPHKHPIKOM_FIMKFHMLCCI_TypeDefinitionIndex = 92496;

class IHPHKHPIKOM_FIMKFHMLCCI : public ::System::Object
{
public:
	::IPFNGDNNODB* BDAJIGIOAMM; // 0x10
	::IHPHKHPIKOM* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPHKHPIKOM_FIMKFHMLCCI__CTOR_OFFSET))(this);
	}

	::System::Void CGABDJGKAKE(::AKCGFNKLIBA* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::AKCGFNKLIBA*))((::PBYTE)hIl2Cpp + IHPHKHPIKOM_FIMKFHMLCCI_CGABDJGKAKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
