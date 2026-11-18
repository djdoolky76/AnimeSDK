#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCPFHFOLBFF.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

#define ILNDBAKNIIH_CEPNHCOBFEC_OFFSET UNITYSDK_OFFSET(0x160B45B0)

inline static constexpr unsigned int ILNDBAKNIIH_TypeDefinitionIndex = 89507;

class ILNDBAKNIIH : public ::System::Object
{
public:
	static ::DCPFHFOLBFF CEPNHCOBFEC(::MoleMole::Level::RatingType NILNNELOMCG)
	{
		return ((::DCPFHFOLBFF(*)(::MoleMole::Level::RatingType))((::PBYTE)hIl2Cpp + ILNDBAKNIIH_CEPNHCOBFEC_OFFSET))(NILNNELOMCG);
	}
};
