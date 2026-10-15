#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerGridFightWaveSettle; }

#define HGLIPPGNBGF_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB0EE0)
#define HGLIPPGNBGF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CB0F10)

inline static constexpr unsigned int HGLIPPGNBGF_TypeDefinitionIndex = 55738;

	class HGLIPPGNBGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerGridFightWaveSettle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerGridFightWaveSettle*))((::PBYTE)hIl2Cpp + HGLIPPGNBGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLIPPGNBGF_ONTASKBEGIN_OFFSET))(this);
		}

	};
