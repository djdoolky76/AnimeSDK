#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_TriggerInstantAbility; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define AGBAGDBHMEN_CTOR_OFFSET UNITYSDK_OFFSET(0xCF1E100)
#define AGBAGDBHMEN_OMGJCBAHIFG_OFFSET UNITYSDK_OFFSET(0xCF1E1A0)
#define AGBAGDBHMEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF1E130)
#define AGBAGDBHMEN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF1E360)

inline static constexpr unsigned int AGBAGDBHMEN_TypeDefinitionIndex = 52256;

	class AGBAGDBHMEN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_TriggerInstantAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_TriggerInstantAbility*))((::PBYTE)hIl2Cpp + AGBAGDBHMEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAGDBHMEN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAGDBHMEN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OMGJCBAHIFG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGBAGDBHMEN_OMGJCBAHIFG_OFFSET))(this, a1);
		}

	};
