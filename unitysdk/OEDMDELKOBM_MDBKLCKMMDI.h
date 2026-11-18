#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OEDMDELKOBM_HJFEPBFBEJJ;

#define OEDMDELKOBM_MDBKLCKMMDI_EGHGJNOOKKF_OFFSET UNITYSDK_OFFSET(0x10061AD0)
#define OEDMDELKOBM_MDBKLCKMMDI__CTOR_OFFSET UNITYSDK_OFFSET(0x10061720)

inline static constexpr unsigned int OEDMDELKOBM_MDBKLCKMMDI_TypeDefinitionIndex = 77196;

class OEDMDELKOBM_MDBKLCKMMDI : public ::System::Object
{
public:
	::OEDMDELKOBM_HJFEPBFBEJJ* FGBNBFHOKAA; // 0x10
	::System::UInt32 OBGKMDFIEAJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDMDELKOBM_MDBKLCKMMDI__CTOR_OFFSET))(this);
	}

	::System::Void EGHGJNOOKKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDMDELKOBM_MDBKLCKMMDI_EGHGJNOOKKF_OFFSET))(this);
	}
};
