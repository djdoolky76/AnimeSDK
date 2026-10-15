#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class RtSetDynamicValueByProperty; }
namespace RPG::GameCore { class TaskContext; }

#define LBOCPCILMEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB607780)
#define LBOCPCILMEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB607860)

inline static constexpr unsigned int LBOCPCILMEC_TypeDefinitionIndex = 53916;

	class LBOCPCILMEC
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSetDynamicValueByProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSetDynamicValueByProperty*))((::PBYTE)hIl2Cpp + LBOCPCILMEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBOCPCILMEC_ONTASKBEGIN_OFFSET))(this);
		}

	};
