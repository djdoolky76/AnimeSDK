#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ALCEJNMFHOK_LBODOFGMIIL_OFFSET UNITYSDK_OFFSET(0x1FA94C90)

inline static constexpr unsigned int ALCEJNMFHOK_TypeDefinitionIndex = 18065;

class ALCEJNMFHOK : public ::System::Object
{
public:
	::System::Int32 _BLMDEHMEEKJ_k__BackingField; // 0x10

	::System::Int32 LBODOFGMIIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCEJNMFHOK_LBODOFGMIIL_OFFSET))(this);
	}
};
