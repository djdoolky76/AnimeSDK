#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MBDEMPDPCEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E1C220)
#define MBDEMPDPCEA_IODDBJDEDDD_OFFSET UNITYSDK_OFFSET(0x15E1C310)
#define MBDEMPDPCEA_JFHOBAOPKLE_OFFSET UNITYSDK_OFFSET(0x15E1C2A0)
#define MBDEMPDPCEA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1C300)

inline static constexpr unsigned int MBDEMPDPCEA_TypeDefinitionIndex = 85560;

class MBDEMPDPCEA : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* AHGLCLGLNKO; // 0x10
	::MoleMole::Battle::Entity* NHNHJLKNHMI; // 0x18
	::MoleMole::Battle::Entity* PIDKGLBCFMH; // 0x20
	::MoleMole::Battle::Entity* PNADLEOIAHJ; // 0x28
	::MoleMole::Battle::Entity* OJBJPJFAIBC; // 0x30
	::MoleMole::Battle::Entity* ANFMBMMNMPP; // 0x38
	::MoleMole::Battle::Entity* EBFBAPHPJLL; // 0x40
	::System::Boolean PBLDBKCEOCD; // 0x48
	::System::Boolean MKGAFHPJBII; // 0x49
	::System::Boolean GNFAABJPKPN; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Single KJEEICIHBIC; // 0x4C
	::System::Double OJCBDICMAJB; // 0x50
	::System::Int32 ELHHHDPGGCJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDEMPDPCEA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDEMPDPCEA_DISPOSE_OFFSET))(this);
	}

	::System::Void IODDBJDEDDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDEMPDPCEA_IODDBJDEDDD_OFFSET))(this);
	}

	::System::Void JFHOBAOPKLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDEMPDPCEA_JFHOBAOPKLE_OFFSET))(this);
	}
};
