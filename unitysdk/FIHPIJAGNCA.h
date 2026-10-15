#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetAudioEmotionState; }
namespace RPG::GameCore { class TaskContext; }

#define FIHPIJAGNCA_CTOR_OFFSET UNITYSDK_OFFSET(0x157A8E90)
#define FIHPIJAGNCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157A8EA0)
#define FIHPIJAGNCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157A8EE0)
#define FIHPIJAGNCA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157A9420)
#define FIHPIJAGNCA_TICK_OFFSET UNITYSDK_OFFSET(0x157A9470)

inline static constexpr unsigned int FIHPIJAGNCA_TypeDefinitionIndex = 58512;

	class FIHPIJAGNCA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetAudioEmotionState* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAudioEmotionState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAudioEmotionState*))((::PBYTE)hIl2Cpp + FIHPIJAGNCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHPIJAGNCA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHPIJAGNCA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHPIJAGNCA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIHPIJAGNCA_TICK_OFFSET))(this, a1);
		}

	};
