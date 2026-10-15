#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvStopTickValue; }
namespace RPG::GameCore { class TaskContext; }

#define DJFGIKFOAMA_CTOR_OFFSET UNITYSDK_OFFSET(0xF234620)
#define DJFGIKFOAMA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF234650)

inline static constexpr unsigned int DJFGIKFOAMA_TypeDefinitionIndex = 57893;

	class DJFGIKFOAMA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvStopTickValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvStopTickValue*))((::PBYTE)hIl2Cpp + DJFGIKFOAMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFGIKFOAMA_ONTASKBEGIN_OFFSET))(this);
		}

	};
