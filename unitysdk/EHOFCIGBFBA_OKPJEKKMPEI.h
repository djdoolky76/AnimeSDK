#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHOFCIGBFBA;
class IFOHGNLIAKH;
namespace System { class Action; }

#define EHOFCIGBFBA_OKPJEKKMPEI_ACMJAOHAHOL_OFFSET UNITYSDK_OFFSET(0x16144E70)
#define EHOFCIGBFBA_OKPJEKKMPEI_NGKIMIBDGKP_OFFSET UNITYSDK_OFFSET(0x161448B0)
#define EHOFCIGBFBA_OKPJEKKMPEI__CTOR_OFFSET UNITYSDK_OFFSET(0x161448A0)

inline static constexpr unsigned int EHOFCIGBFBA_OKPJEKKMPEI_TypeDefinitionIndex = 52220;

class EHOFCIGBFBA_OKPJEKKMPEI : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::IFOHGNLIAKH* KBIPKADLPFK; // 0x18
	::EHOFCIGBFBA* KLHPEBKNIFB; // 0x20
	::System::Int32 BLIIBGEDDEI; // 0x28
	::System::Boolean HFJILCMCDAP; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Int32 CJAENJGONJH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_OKPJEKKMPEI__CTOR_OFFSET))(this);
	}

	::System::Void NGKIMIBDGKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_OKPJEKKMPEI_NGKIMIBDGKP_OFFSET))(this);
	}

	::System::Void ACMJAOHAHOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOFCIGBFBA_OKPJEKKMPEI_ACMJAOHAHOL_OFFSET))(this);
	}
};
