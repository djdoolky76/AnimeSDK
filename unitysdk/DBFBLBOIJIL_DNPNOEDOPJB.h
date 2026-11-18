#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class DBFBLBOIJIL_GHBGNBCIOPB;
namespace MoleMole::Config { class ConfigAraTrails; }

#define DBFBLBOIJIL_DNPNOEDOPJB_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15355290)
#define DBFBLBOIJIL_DNPNOEDOPJB__CTOR_OFFSET UNITYSDK_OFFSET(0x15355280)

inline static constexpr unsigned int DBFBLBOIJIL_DNPNOEDOPJB_TypeDefinitionIndex = 75805;

class DBFBLBOIJIL_DNPNOEDOPJB : public ::System::Object
{
public:
	::DBFBLBOIJIL_GHBGNBCIOPB* EEMOEMFLABI; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFBLBOIJIL_DNPNOEDOPJB__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigAraTrails* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAraTrails*))((::PBYTE)hIl2Cpp + DBFBLBOIJIL_DNPNOEDOPJB_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
