#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIWeaponGacha; }
namespace System { class Action; }

#define CADLFLNOJEJ_MNNLIGKONHD_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x10E268B0)
#define CADLFLNOJEJ_MNNLIGKONHD__CTOR_OFFSET UNITYSDK_OFFSET(0x10E268A0)

inline static constexpr unsigned int CADLFLNOJEJ_MNNLIGKONHD_TypeDefinitionIndex = 39674;

class CADLFLNOJEJ_MNNLIGKONHD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADLFLNOJEJ_MNNLIGKONHD__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigUIWeaponGacha* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIWeaponGacha*))((::PBYTE)hIl2Cpp + CADLFLNOJEJ_MNNLIGKONHD_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
