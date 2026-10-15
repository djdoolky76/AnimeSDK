#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueDLCADVRoomHideTrotter; }
namespace RPG::GameCore { class TaskContext; }

#define EGPKJEODIOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1549B780)
#define EGPKJEODIOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1549B790)
#define EGPKJEODIOA_FHEPIDNFOEF_OFFSET UNITYSDK_OFFSET(0x1549BB30)
#define EGPKJEODIOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1549B830)
#define EGPKJEODIOA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1549BC80)
#define EGPKJEODIOA_TICK_OFFSET UNITYSDK_OFFSET(0x1549B7D0)

	class EGPKJEODIOA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RogueDLCADVRoomHideTrotter* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLCADVRoomHideTrotter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLCADVRoomHideTrotter*))((::PBYTE)hIl2Cpp + EGPKJEODIOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPKJEODIOA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGPKJEODIOA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPKJEODIOA_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void FHEPIDNFOEF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EGPKJEODIOA_FHEPIDNFOEF_OFFSET))(a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPKJEODIOA_ONTASKRESET_OFFSET))(this);
		}

	};
