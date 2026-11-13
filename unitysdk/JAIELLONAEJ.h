#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindEntityEventConfig; }

#define JAIELLONAEJ_AJKLODBHJNC_OFFSET UNITYSDK_OFFSET(0x19A53DB0)
#define JAIELLONAEJ_ALLIHCANELD_OFFSET UNITYSDK_OFFSET(0x19A53FD0)
#define JAIELLONAEJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x19A53BF0)
#define JAIELLONAEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19A54180)
#define JAIELLONAEJ_EICIBKHOECO_OFFSET UNITYSDK_OFFSET(0x19A53B80)
#define JAIELLONAEJ_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x19A53E80)
#define JAIELLONAEJ_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0x19A53C40)
#define JAIELLONAEJ_JANLFPMINAC_OFFSET UNITYSDK_OFFSET(0x19A53F10)
#define JAIELLONAEJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19A53ED0)
#define JAIELLONAEJ_MDDMJDOKKHF_OFFSET UNITYSDK_OFFSET(0x19A53CB0)
#define JAIELLONAEJ_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0x19A53E40)
#define JAIELLONAEJ_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x19A53E00)

inline static constexpr unsigned int JAIELLONAEJ_TypeDefinitionIndex = 62183;

	class JAIELLONAEJ : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x10
		::RPG::GameCore::TimeRewindEntityEventConfig* IGHAHBNLIJA; // 0x18
		::System::Single LDFDNKPCLGJ; // 0x20
		::System::Single FOMKPMGACFB; // 0x24
		::System::Single ONMEOCDIPMM; // 0x28
		::RPG::GameCore::TimeRewindState CFIKPOFNONJ; // 0x2C
		::System::Boolean MFGHMLJJNIG; // 0x30
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
