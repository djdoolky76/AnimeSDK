#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALGKMLLALFG;
class FHNHJEBNBBJ;

#define FHNHJEBNBBJ_IHDKGOGIGDB_EOKPEMGOPNA_OFFSET UNITYSDK_OFFSET(0x116B3880)
#define FHNHJEBNBBJ_IHDKGOGIGDB_MKIFLNPIBEN_OFFSET UNITYSDK_OFFSET(0x116B3370)
#define FHNHJEBNBBJ_IHDKGOGIGDB__CTOR_OFFSET UNITYSDK_OFFSET(0x116B3360)

inline static constexpr unsigned int FHNHJEBNBBJ_IHDKGOGIGDB_TypeDefinitionIndex = 88067;

class FHNHJEBNBBJ_IHDKGOGIGDB : public ::System::Object
{
public:
	::FHNHJEBNBBJ* KLHPEBKNIFB; // 0x10
	::ALGKMLLALFG* LMLPPLMKLFL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNHJEBNBBJ_IHDKGOGIGDB__CTOR_OFFSET))(this);
	}

	::System::Void MKIFLNPIBEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNHJEBNBBJ_IHDKGOGIGDB_MKIFLNPIBEN_OFFSET))(this);
	}

	::System::Void EOKPEMGOPNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNHJEBNBBJ_IHDKGOGIGDB_EOKPEMGOPNA_OFFSET))(this);
	}
};
