#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFOOOAHPHGD.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AGJFJGEMIPB_JLDJPIALOLL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x727C90)

inline static constexpr unsigned int AGJFJGEMIPB_JLDJPIALOLL_TypeDefinitionIndex = 91428;

struct alignas(8) AGJFJGEMIPB_JLDJPIALOLL
{
	::System::UInt32 DGMOLEDDPOA; // 0x10
	::System::UInt32 DKBGLBIECBN; // 0x14
	::MoleMole::Config::CharacterAliveState IAINONOBNEP; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* PKGDBDFHOMO; // 0x20
	::HFOOOAHPHGD EPAODNKNBFI; // 0x28
	::MoleMole::Config::DamageElementType HBMBILMFEII; // 0x2C
	::MoleMole::Config::BuffGroupName NINGBHIDDAA; // 0x30
	::System::Boolean KHABCHNADGA; // 0x34

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_JLDJPIALOLL_NPOLNFDBOOD_OFFSET))(this);
	}
};
