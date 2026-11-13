#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CJEEJFDPPNG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetCharacterFormation; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CIGFEKGGEKJ_AGLLMMLILAF_OFFSET UNITYSDK_OFFSET(0x16E437F0)
#define CIGFEKGGEKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16E42D00)
#define CIGFEKGGEKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E42D10)
#define CIGFEKGGEKJ_LNODDPMOEEJ_OFFSET UNITYSDK_OFFSET(0x16E434A0)
#define CIGFEKGGEKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E42D50)
#define CIGFEKGGEKJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16E433F0)
#define CIGFEKGGEKJ_PBGOLACGDKO_OFFSET UNITYSDK_OFFSET(0x16E433A0)
#define CIGFEKGGEKJ_TICK_OFFSET UNITYSDK_OFFSET(0x16E43440)

inline static constexpr unsigned int CIGFEKGGEKJ_TypeDefinitionIndex = 56554;

	class CIGFEKGGEKJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetCharacterFormation* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterFormation*))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_TICK_OFFSET))(this, a1);
		}

		::System::Void PBGOLACGDKO(::RPG::GameCore::GameEntity* a1, ::CJEEJFDPPNG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CJEEJFDPPNG*))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_PBGOLACGDKO_OFFSET))(this, a1, a2);
		}

		static ::System::String* LNODDPMOEEJ(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_LNODDPMOEEJ_OFFSET))(a1);
		}

		::System::Boolean AGLLMMLILAF(::RPG::GameCore::GameEntity* a1, ::CJEEJFDPPNG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CJEEJFDPPNG*))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_AGLLMMLILAF_OFFSET))(this, a1, a2);
		}

	};
