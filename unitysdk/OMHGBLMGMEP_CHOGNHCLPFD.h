#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class OMHGBLMGMEP_IMDGPNHBOFN;
namespace MoleMole::Config { class ConfigHitDatas; }

#define OMHGBLMGMEP_CHOGNHCLPFD_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15FEE040)
#define OMHGBLMGMEP_CHOGNHCLPFD__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEE030)

inline static constexpr unsigned int OMHGBLMGMEP_CHOGNHCLPFD_TypeDefinitionIndex = 52054;

class OMHGBLMGMEP_CHOGNHCLPFD : public ::System::Object
{
public:
	::OMHGBLMGMEP_IMDGPNHBOFN* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHGBLMGMEP_CHOGNHCLPFD__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigHitDatas* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHitDatas*))((::PBYTE)hIl2Cpp + OMHGBLMGMEP_CHOGNHCLPFD_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
