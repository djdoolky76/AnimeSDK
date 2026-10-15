#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueDLCADVRoomHideDestruct; }
namespace RPG::GameCore { class TaskContext; }

#define FJONEGHJKPK_CTOR_OFFSET UNITYSDK_OFFSET(0x157D7600)
#define FJONEGHJKPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157D7610)
#define FJONEGHJKPK_FHEPIDNFOEF_OFFSET UNITYSDK_OFFSET(0x157D78C0)
#define FJONEGHJKPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157D76B0)
#define FJONEGHJKPK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157D7A10)
#define FJONEGHJKPK_TICK_OFFSET UNITYSDK_OFFSET(0x157D7650)

inline static constexpr unsigned int FJONEGHJKPK_TypeDefinitionIndex = 58461;

	class FJONEGHJKPK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RogueDLCADVRoomHideDestruct* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLCADVRoomHideDestruct* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLCADVRoomHideDestruct*))((::PBYTE)hIl2Cpp + FJONEGHJKPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJONEGHJKPK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJONEGHJKPK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJONEGHJKPK_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void FHEPIDNFOEF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FJONEGHJKPK_FHEPIDNFOEF_OFFSET))(a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJONEGHJKPK_ONTASKRESET_OFFSET))(this);
		}

	};
