#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class MapEntityDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VerifyInteractingEntity; }

#define DDMKMJIFNHE_AOAAJAPJKOK_OFFSET UNITYSDK_OFFSET(0xE4E8570)
#define DDMKMJIFNHE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E81D0)
#define DDMKMJIFNHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4E81E0)
#define DDMKMJIFNHE_NDIDDNPAKBO_OFFSET UNITYSDK_OFFSET(0xE4E8620)
#define DDMKMJIFNHE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4E8220)
#define DDMKMJIFNHE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE4E8750)
#define DDMKMJIFNHE_TICK_OFFSET UNITYSDK_OFFSET(0xE4E87A0)

inline static constexpr unsigned int DDMKMJIFNHE_TypeDefinitionIndex = 58846;

	class DDMKMJIFNHE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::VerifyInteractingEntity* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VerifyInteractingEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VerifyInteractingEntity*))((::PBYTE)hIl2Cpp + DDMKMJIFNHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMKMJIFNHE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMKMJIFNHE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMKMJIFNHE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDMKMJIFNHE_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::MapEntityDef* AOAAJAPJKOK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DDMKMJIFNHE_AOAAJAPJKOK_OFFSET))(this, a1);
		}

		::System::Void NDIDDNPAKBO(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + DDMKMJIFNHE_NDIDDNPAKBO_OFFSET))(this, a1);
		}

	};
