#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LDLPKIGOKHH__CTOR_OFFSET UNITYSDK_OFFSET(0x15181E70)

inline static constexpr unsigned int LDLPKIGOKHH_TypeDefinitionIndex = 53557;

class LDLPKIGOKHH : public ::System::Object
{
public:
	::System::UInt32 KGIOFDBFGAM; // 0x10
	::System::Int32 LEEJEBIJDPL; // 0x14
	::System::UInt32 JHFKDGBCOBA; // 0x18
	::System::Int32 OIKFFGKDHME; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLPKIGOKHH__CTOR_OFFSET))(this);
	}
};
