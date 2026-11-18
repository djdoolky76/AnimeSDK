#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFDDLEHKGIK;
namespace System { class Action; }

#define LFDDLEHKGIK_BMCAMDFMBIH_ALFKBJBICIB_OFFSET UNITYSDK_OFFSET(0x151869A0)
#define LFDDLEHKGIK_BMCAMDFMBIH_BMHELNHPKOK_OFFSET UNITYSDK_OFFSET(0x15186A50)
#define LFDDLEHKGIK_BMCAMDFMBIH__CTOR_OFFSET UNITYSDK_OFFSET(0x15186990)

inline static constexpr unsigned int LFDDLEHKGIK_BMCAMDFMBIH_TypeDefinitionIndex = 66033;

class LFDDLEHKGIK_BMCAMDFMBIH : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::LFDDLEHKGIK* KLHPEBKNIFB; // 0x18
	::System::Action* EJGDHCIBCJH; // 0x20
	::System::Single MDPPNMIPDMP; // 0x28
	::System::Single HCIAONBDNDE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDDLEHKGIK_BMCAMDFMBIH__CTOR_OFFSET))(this);
	}

	::System::Void ALFKBJBICIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDDLEHKGIK_BMCAMDFMBIH_ALFKBJBICIB_OFFSET))(this);
	}

	::System::Void BMHELNHPKOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDDLEHKGIK_BMCAMDFMBIH_BMHELNHPKOK_OFFSET))(this);
	}
};
