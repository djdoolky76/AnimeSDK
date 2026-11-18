#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HHOBGKLENPF_MLBMDCONALK_BLINFBHMHAM_OFFSET UNITYSDK_OFFSET(0x16CF12F0)
#define HHOBGKLENPF_MLBMDCONALK_FJKMCGDPJPL_OFFSET UNITYSDK_OFFSET(0x16CF12D0)
#define HHOBGKLENPF_MLBMDCONALK_OLCFGLJHNLD_OFFSET UNITYSDK_OFFSET(0x16CF12E0)
#define HHOBGKLENPF_MLBMDCONALK__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF1190)

inline static constexpr unsigned int HHOBGKLENPF_MLBMDCONALK_TypeDefinitionIndex = 54313;

class HHOBGKLENPF_MLBMDCONALK : public ::System::Object
{
public:
	::System::Boolean CGFLLPOCDJM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_MLBMDCONALK__CTOR_OFFSET))(this);
	}

	::System::Void FJKMCGDPJPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_MLBMDCONALK_FJKMCGDPJPL_OFFSET))(this);
	}

	::System::Void OLCFGLJHNLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_MLBMDCONALK_OLCFGLJHNLD_OFFSET))(this);
	}

	::System::Boolean BLINFBHMHAM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_MLBMDCONALK_BLINFBHMHAM_OFFSET))(this);
	}
};
