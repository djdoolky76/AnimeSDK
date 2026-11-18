#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HEAECEINKCC_CCEOGLFLIJI;

#define HEAECEINKCC_CGKEIKIKBPL_CCBNLNAEDAD_OFFSET UNITYSDK_OFFSET(0x146F4BB0)
#define HEAECEINKCC_CGKEIKIKBPL_DLOHLEHOOEC_OFFSET UNITYSDK_OFFSET(0x146F4BC0)
#define HEAECEINKCC_CGKEIKIKBPL__CTOR_OFFSET UNITYSDK_OFFSET(0x146F4BA0)

inline static constexpr unsigned int HEAECEINKCC_CGKEIKIKBPL_TypeDefinitionIndex = 64576;

class HEAECEINKCC_CGKEIKIKBPL : public ::System::Object
{
public:
	::HEAECEINKCC_CCEOGLFLIJI* FGBNBFHOKAA; // 0x10
	::System::Double CIIPCCLOHLH; // 0x18
	::System::Boolean JOBJDBBKHBM; // 0x20
	::System::Byte _padding0[0x7];
	::System::Double DLBFEAOALML; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CGKEIKIKBPL__CTOR_OFFSET))(this);
	}

	::System::Boolean CCBNLNAEDAD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CGKEIKIKBPL_CCBNLNAEDAD_OFFSET))(this);
	}

	::System::Void DLOHLEHOOEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_CGKEIKIKBPL_DLOHLEHOOEC_OFFSET))(this);
	}
};
