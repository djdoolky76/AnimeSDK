#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddMazeBuff; }
namespace RPG::GameCore { class TaskContext; }

#define EHGBMLGICLA_CTOR_OFFSET UNITYSDK_OFFSET(0x154A5980)
#define EHGBMLGICLA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154A5990)

inline static constexpr unsigned int EHGBMLGICLA_TypeDefinitionIndex = 57863;

	class EHGBMLGICLA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddMazeBuff* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddMazeBuff*))((::PBYTE)hIl2Cpp + EHGBMLGICLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGBMLGICLA_ONTASKBEGIN_OFFSET))(this);
		}

	};
