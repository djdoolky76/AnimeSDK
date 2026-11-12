#pragma once
#include "unitysdk/unitysdk.h"
class GBCBJOBGHNO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define KOIFLDBHOFB_APMBIDBPGIC_OFFSET UNITYSDK_OFFSET(0xBDEB350)
#define KOIFLDBHOFB_CTOR_OFFSET UNITYSDK_OFFSET(0xBDEB110)
#define KOIFLDBHOFB_NEKEDKBJMFL_OFFSET UNITYSDK_OFFSET(0xBDEB2C0)
#define KOIFLDBHOFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDEB140)

inline static constexpr unsigned int KOIFLDBHOFB_TypeDefinitionIndex = 56747;

	class KOIFLDBHOFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GBCBJOBGHNO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GBCBJOBGHNO*))((::PBYTE)hIl2Cpp + KOIFLDBHOFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIFLDBHOFB_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void NEKEDKBJMFL(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + KOIFLDBHOFB_NEKEDKBJMFL_OFFSET))(a1, a2);
		}

		static ::System::Void APMBIDBPGIC(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + KOIFLDBHOFB_APMBIDBPGIC_OFFSET))(a1, a2);
		}

	};
