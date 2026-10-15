#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOKABAGIKFG.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StopSound; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define LBFFGDMHKPH_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F9CB0)
#define LBFFGDMHKPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5F9CE0)
#define LBFFGDMHKPH_LEGKMLGLAKD_OFFSET UNITYSDK_OFFSET(0xB5F9F00)
#define LBFFGDMHKPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5F9D20)

	class LBFFGDMHKPH
	{
	public:
		::System::String* CBBKMNEHIMB; // 0x28
		::RPG::GameCore::GameEntity* ONIACPBDNMH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopSound* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopSound*))((::PBYTE)hIl2Cpp + LBFFGDMHKPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFFGDMHKPH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBFFGDMHKPH_ONTASKBEGIN_OFFSET))(this);
		}

		::LOKABAGIKFG LEGKMLGLAKD(::RPG::GameCore::StopSound* a1)
		{
			return ((::LOKABAGIKFG(*)(::PVOID, ::RPG::GameCore::StopSound*))((::PBYTE)hIl2Cpp + LBFFGDMHKPH_LEGKMLGLAKD_OFFSET))(this, a1);
		}

	};
