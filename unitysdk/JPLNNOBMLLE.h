#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }

#define JPLNNOBMLLE_AJKLODBHJNC_OFFSET UNITYSDK_OFFSET(0xB2C3060)
#define JPLNNOBMLLE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB2C2D90)
#define JPLNNOBMLLE_CONFIAMBBBC_OFFSET UNITYSDK_OFFSET(0xB2C2FC0)
#define JPLNNOBMLLE_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C31C0)
#define JPLNNOBMLLE_EICIBKHOECO_OFFSET UNITYSDK_OFFSET(0xB2C2D10)
#define JPLNNOBMLLE_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0xB2C3130)
#define JPLNNOBMLLE_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0xB2C2DE0)
#define JPLNNOBMLLE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB2C3180)
#define JPLNNOBMLLE_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0xB2C30F0)
#define JPLNNOBMLLE_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xB2C30B0)

inline static constexpr unsigned int JPLNNOBMLLE_TypeDefinitionIndex = 60805;

	class JPLNNOBMLLE : public ::System::Object
	{
	public:
		::RPG::GameCore::EntityTimeRewindComponent* KCONLBKIGHD; // 0x10
		::System::Single ONMEOCDIPMM; // 0x18
		::System::Single LDFDNKPCLGJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLNNOBMLLE_CTOR_OFFSET))(this);
		}

		::System::Void EICIBKHOECO(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + JPLNNOBMLLE_EICIBKHOECO_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLNNOBMLLE_CLEAR_OFFSET))(this);
		}

		::System::Void IHKPOLCCPPL(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + JPLNNOBMLLE_IHKPOLCCPPL_OFFSET))(this, a1, a2);
		}

		::System::Void CONFIAMBBBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLNNOBMLLE_CONFIAMBBBC_OFFSET))(this);
		}

		::System::Void AJKLODBHJNC(::RPG::GameCore::TimeRewindState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + JPLNNOBMLLE_AJKLODBHJNC_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLNNOBMLLE_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void MONODNDCLJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLNNOBMLLE_MONODNDCLJI_OFFSET))(this);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLNNOBMLLE_HDOFEPFEOEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLNNOBMLLE_JLANKNHFKCN_OFFSET))(this);
		}

	};
