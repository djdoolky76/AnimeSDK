#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OnTimeRewindParentPropStateChangeEnd; }
namespace RPG::GameCore { class TaskContext; }

#define ODKHDDALABB_CTOR_OFFSET UNITYSDK_OFFSET(0xBD97C30)
#define ODKHDDALABB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD97CC0)
#define ODKHDDALABB_MNOEFBBHJDC_OFFSET UNITYSDK_OFFSET(0xBD984B0)
#define ODKHDDALABB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD98140)
#define ODKHDDALABB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD98330)
#define ODKHDDALABB_OOJIFECGAGE_OFFSET UNITYSDK_OFFSET(0xBD97FF0)
#define ODKHDDALABB_TICK_OFFSET UNITYSDK_OFFSET(0xBD97E80)

	class ODKHDDALABB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* GELDCMCEBJF; // 0x30
		::System::Boolean MFGHMLJJNIG; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd*))((::PBYTE)hIl2Cpp + ODKHDDALABB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKHDDALABB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODKHDDALABB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKHDDALABB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKHDDALABB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void MNOEFBBHJDC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + ODKHDDALABB_MNOEFBBHJDC_OFFSET))(this, a1);
		}

		::System::Void OOJIFECGAGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKHDDALABB_OOJIFECGAGE_OFFSET))(this);
		}

	};
