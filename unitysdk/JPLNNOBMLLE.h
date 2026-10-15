#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }

#define JPLNNOBMLLE_AJKLODBHJNC_OFFSET UNITYSDK_OFFSET(0xB2C9A80)
#define JPLNNOBMLLE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB2C97B0)
#define JPLNNOBMLLE_CONFIAMBBBC_OFFSET UNITYSDK_OFFSET(0xB2C99E0)
#define JPLNNOBMLLE_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C9BE0)
#define JPLNNOBMLLE_EICIBKHOECO_OFFSET UNITYSDK_OFFSET(0xB2C9730)
#define JPLNNOBMLLE_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0xB2C9B50)
#define JPLNNOBMLLE_IHKPOLCCPPL_OFFSET UNITYSDK_OFFSET(0xB2C9800)
#define JPLNNOBMLLE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB2C9BA0)
#define JPLNNOBMLLE_MONODNDCLJI_OFFSET UNITYSDK_OFFSET(0xB2C9B10)
#define JPLNNOBMLLE_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xB2C9AD0)

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
