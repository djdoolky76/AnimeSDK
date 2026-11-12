#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindEntityEventConfig; }

#define JAIELLONAEJ_AJKLODBHJNC_OFFSET UNITYSDK_OFFSET(0xB88A7A0)
#define JAIELLONAEJ_ALLIHCANELD_OFFSET UNITYSDK_OFFSET(0xB88A9C0)
#define JAIELLONAEJ_CLEAR_OFFSET UNITYSDK_OFFSET(0xB88A5D0)
#define JAIELLONAEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB88AB70)
#define JAIELLONAEJ_EICIBKHOECO_OFFSET UNITYSDK_OFFSET(0xB88A560)
#define JAIELLONAEJ_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0xB88A870)
#define JAIELLONAEJ_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0xB88A630)
#define JAIELLONAEJ_JANLFPMINAC_OFFSET UNITYSDK_OFFSET(0xB88A900)
#define JAIELLONAEJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB88A8C0)
#define JAIELLONAEJ_MDDMJDOKKHF_OFFSET UNITYSDK_OFFSET(0xB88A6A0)
#define JAIELLONAEJ_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0xB88A830)
#define JAIELLONAEJ_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xB88A7F0)

inline static constexpr unsigned int JAIELLONAEJ_TypeDefinitionIndex = 62183;

	class JAIELLONAEJ : public ::System::Object
	{
	public:
		::RPG::GameCore::TimeRewindEntityEventConfig* IGHAHBNLIJA; // 0x10
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x18
		::RPG::GameCore::TimeRewindState CFIKPOFNONJ; // 0x20
		::System::Boolean MFGHMLJJNIG; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single FOMKPMGACFB; // 0x28
		::System::Single LDFDNKPCLGJ; // 0x2C
		::System::Single ONMEOCDIPMM; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIELLONAEJ_CTOR_OFFSET))(this);
		}

		::System::Void EICIBKHOECO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TimeRewindEntityEventConfig* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TimeRewindEntityEventConfig*, ::System::Single))((::PBYTE)hIl2Cpp + JAIELLONAEJ_EICIBKHOECO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIELLONAEJ_CLEAR_OFFSET))(this);
		}

		::System::Void IHKPOLCCPPL(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + JAIELLONAEJ_IHKPOLCCPPL_OFFSET))(this, a1, a2);
		}

		::System::Void AJKLODBHJNC(::RPG::GameCore::TimeRewindState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + JAIELLONAEJ_AJKLODBHJNC_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIELLONAEJ_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void MONODNDCLJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIELLONAEJ_MONODNDCLJI_OFFSET))(this);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIELLONAEJ_HDOFEPFEOEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIELLONAEJ_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void MDDMJDOKKHF(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + JAIELLONAEJ_MDDMJDOKKHF_OFFSET))(this, a1, a2);
		}

		::System::Void JANLFPMINAC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAIELLONAEJ_JANLFPMINAC_OFFSET))(this, a1);
		}

		::System::Void ALLIHCANELD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIELLONAEJ_ALLIHCANELD_OFFSET))(this);
		}

	};
