#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFDDLEHKGIK;
namespace System { class Action; }

#define LFDDLEHKGIK_LHEAGGFLLEH_DCHKEPBKOGG_OFFSET UNITYSDK_OFFSET(0x15186B50)
#define LFDDLEHKGIK_LHEAGGFLLEH_MDOCMKPNNJA_OFFSET UNITYSDK_OFFSET(0x15186AA0)
#define LFDDLEHKGIK_LHEAGGFLLEH__CTOR_OFFSET UNITYSDK_OFFSET(0x15186A90)

inline static constexpr unsigned int LFDDLEHKGIK_LHEAGGFLLEH_TypeDefinitionIndex = 66035;

class LFDDLEHKGIK_LHEAGGFLLEH : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::LFDDLEHKGIK* KLHPEBKNIFB; // 0x20
	::System::Single HCIAONBDNDE; // 0x28
	::System::Single GBMJIFHDMAM; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDDLEHKGIK_LHEAGGFLLEH__CTOR_OFFSET))(this);
	}

	::System::Void MDOCMKPNNJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDDLEHKGIK_LHEAGGFLLEH_MDOCMKPNNJA_OFFSET))(this);
	}

	::System::Void DCHKEPBKOGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDDLEHKGIK_LHEAGGFLLEH_DCHKEPBKOGG_OFFSET))(this);
	}
};
