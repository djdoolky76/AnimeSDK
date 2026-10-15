#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_Hipplen_Unlock_Achievement; }
namespace RPG::GameCore { class TaskContext; }

#define FMDIKGEEBML_CTOR_OFFSET UNITYSDK_OFFSET(0x15843E10)
#define FMDIKGEEBML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15843FB0)
#define FMDIKGEEBML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15843E40)
#define FMDIKGEEBML_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15843F60)
#define FMDIKGEEBML_TICK_OFFSET UNITYSDK_OFFSET(0x15843F00)

inline static constexpr unsigned int FMDIKGEEBML_TypeDefinitionIndex = 52296;

	class FMDIKGEEBML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_Hipplen_Unlock_Achievement*))((::PBYTE)hIl2Cpp + FMDIKGEEBML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDIKGEEBML_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMDIKGEEBML_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDIKGEEBML_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDIKGEEBML_DISPOSE_OFFSET))(this);
		}

	};
