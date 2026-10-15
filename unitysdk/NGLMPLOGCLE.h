#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueDLC1Dot3DiceRotate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define NGLMPLOGCLE_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAF170)
#define NGLMPLOGCLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBAF180)
#define NGLMPLOGCLE_LHOMIPANFKB_OFFSET UNITYSDK_OFFSET(0xBBAF410)
#define NGLMPLOGCLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBAF2A0)
#define NGLMPLOGCLE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBAF360)
#define NGLMPLOGCLE_TICK_OFFSET UNITYSDK_OFFSET(0xBBAF240)

inline static constexpr unsigned int NGLMPLOGCLE_TypeDefinitionIndex = 58456;

	class NGLMPLOGCLE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RogueDLC1Dot3DiceRotate* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3DiceRotate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3DiceRotate*))((::PBYTE)hIl2Cpp + NGLMPLOGCLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLMPLOGCLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGLMPLOGCLE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLMPLOGCLE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLMPLOGCLE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void LHOMIPANFKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGLMPLOGCLE_LHOMIPANFKB_OFFSET))(this, a1);
		}

	};
