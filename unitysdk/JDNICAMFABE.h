#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByFateContent; }
namespace RPG::GameCore { class TaskContext; }

#define JDNICAMFABE_CTOR_OFFSET UNITYSDK_OFFSET(0x16610B60)
#define JDNICAMFABE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16610C40)

inline static constexpr unsigned int JDNICAMFABE_TypeDefinitionIndex = 55433;

	class JDNICAMFABE
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByFateContent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByFateContent*))((::PBYTE)hIl2Cpp + JDNICAMFABE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNICAMFABE_ONTASKBEGIN_OFFSET))(this);
		}

	};
