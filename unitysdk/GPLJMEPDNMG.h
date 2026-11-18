#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIECADGCFDC;

#define GPLJMEPDNMG__CTOR_OFFSET UNITYSDK_OFFSET(0x125F0800)

inline static constexpr unsigned int GPLJMEPDNMG_TypeDefinitionIndex = 86550;

class GPLJMEPDNMG : public ::System::Object
{
public:
	::GIECADGCFDC* JMINOGAOFIL; // 0x10
	::System::Int32 OBNIAHNMHPF; // 0x18
	::System::Int32 MGMDLMBEDJF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLJMEPDNMG__CTOR_OFFSET))(this);
	}
};
