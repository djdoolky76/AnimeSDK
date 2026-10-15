#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class RtSetDynamicValueByHealDataProperty; }
namespace RPG::GameCore { class TaskContext; }

#define EPBBCEMBBDK_CTOR_OFFSET UNITYSDK_OFFSET(0x155CE2A0)
#define EPBBCEMBBDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155CE380)

inline static constexpr unsigned int EPBBCEMBBDK_TypeDefinitionIndex = 53866;

	class EPBBCEMBBDK
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSetDynamicValueByHealDataProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSetDynamicValueByHealDataProperty*))((::PBYTE)hIl2Cpp + EPBBCEMBBDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBBCEMBBDK_ONTASKBEGIN_OFFSET))(this);
		}

	};
