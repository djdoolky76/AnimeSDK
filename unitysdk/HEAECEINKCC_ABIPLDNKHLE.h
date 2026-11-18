#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEAECEINKCC_ABIPLDNKHLE_GFMGOLJBPNF_OFFSET UNITYSDK_OFFSET(0x146F4800)
#define HEAECEINKCC_ABIPLDNKHLE__CTOR_OFFSET UNITYSDK_OFFSET(0x146F47F0)

inline static constexpr unsigned int HEAECEINKCC_ABIPLDNKHLE_TypeDefinitionIndex = 64564;

class HEAECEINKCC_ABIPLDNKHLE : public ::System::Object
{
public:
	::System::Single DLBFEAOALML; // 0x10
	::System::Byte _padding0[0x4];
	::System::Double JPIOGAGNJOJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_ABIPLDNKHLE__CTOR_OFFSET))(this);
	}

	::System::Void GFMGOLJBPNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_ABIPLDNKHLE_GFMGOLJBPNF_OFFSET))(this);
	}
};
