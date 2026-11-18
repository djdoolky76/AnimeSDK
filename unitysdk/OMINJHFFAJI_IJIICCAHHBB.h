#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MFHEIOBAEDI.h"
#include "unitysdk/NHEPPDKDPPD.h"

class FKBAHIEGCII;

#define OMINJHFFAJI_IJIICCAHHBB_BPKAFMLPCPO_OFFSET UNITYSDK_OFFSET(0x1B7AB0F0)
#define OMINJHFFAJI_IJIICCAHHBB_LMLCFMCJFDK_OFFSET UNITYSDK_OFFSET(0x1B7AB0E0)
#define OMINJHFFAJI_IJIICCAHHBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7AB0D0)

inline static constexpr unsigned int OMINJHFFAJI_IJIICCAHHBB_TypeDefinitionIndex = 56960;

class OMINJHFFAJI_IJIICCAHHBB : public ::System::Object
{
public:
	::MoleMole::EntityHandle HPADNAEINPK; // 0x10
	::FKBAHIEGCII* HONJDLBIEMK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINJHFFAJI_IJIICCAHHBB__CTOR_OFFSET))(this);
	}

	::FKBAHIEGCII* LMLCFMCJFDK(::MFHEIOBAEDI HBMGHPEPBNC)
	{
		return ((::FKBAHIEGCII*(*)(::PVOID, ::MFHEIOBAEDI))((::PBYTE)hIl2Cpp + OMINJHFFAJI_IJIICCAHHBB_LMLCFMCJFDK_OFFSET))(this, HBMGHPEPBNC);
	}

	::System::Boolean BPKAFMLPCPO(::NHEPPDKDPPD MOEKEKKJGBB)
	{
		return ((::System::Boolean(*)(::PVOID, ::NHEPPDKDPPD))((::PBYTE)hIl2Cpp + OMINJHFFAJI_IJIICCAHHBB_BPKAFMLPCPO_OFFSET))(this, MOEKEKKJGBB);
	}
};
