#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class MazeBuffParamKey; }
namespace RPG::GameCore { class SetDynamicValueByMazeBuffConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define LPMEAGPFNHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB8240D0)
#define LPMEAGPFNHE_LAPFHJPBOED_OFFSET UNITYSDK_OFFSET(0xB824280)
#define LPMEAGPFNHE_NOICODFGEIE_OFFSET UNITYSDK_OFFSET(0xB824400)
#define LPMEAGPFNHE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB824100)

inline static constexpr unsigned int LPMEAGPFNHE_TypeDefinitionIndex = 55453;

	class LPMEAGPFNHE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByMazeBuffConfig*))((::PBYTE)hIl2Cpp + LPMEAGPFNHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMEAGPFNHE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean LAPFHJPBOED(::RPG::GameCore::MazeBuffParamKey* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffParamKey*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LPMEAGPFNHE_LAPFHJPBOED_OFFSET))(this, a1, a2);
		}

		::System::Void NOICODFGEIE(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LPMEAGPFNHE_NOICODFGEIE_OFFSET))(this, a1, a2);
		}

	};
