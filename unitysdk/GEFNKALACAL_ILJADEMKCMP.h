#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class GEFNKALACAL_KIOHEMMOMKN;
namespace MoleMole::Config { class ConfigLockTargets; }

#define GEFNKALACAL_ILJADEMKCMP_CBAABJLBLDH_OFFSET UNITYSDK_OFFSET(0x189F8650)
#define GEFNKALACAL_ILJADEMKCMP__CTOR_OFFSET UNITYSDK_OFFSET(0x189F8640)

inline static constexpr unsigned int GEFNKALACAL_ILJADEMKCMP_TypeDefinitionIndex = 53697;

class GEFNKALACAL_ILJADEMKCMP : public ::System::Object
{
public:
	::GEFNKALACAL_KIOHEMMOMKN* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFNKALACAL_ILJADEMKCMP__CTOR_OFFSET))(this);
	}

	::System::Void CBAABJLBLDH(::MoleMole::Config::ConfigLockTargets* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLockTargets*))((::PBYTE)hIl2Cpp + GEFNKALACAL_ILJADEMKCMP_CBAABJLBLDH_OFFSET))(this, DFMKILICPFB);
	}
};
