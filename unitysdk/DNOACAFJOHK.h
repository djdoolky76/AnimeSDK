#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueInRange; }
namespace RPG::GameCore { class TaskContext; }

#define DNOACAFJOHK_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD6680)
#define DNOACAFJOHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FD6760)

inline static constexpr unsigned int DNOACAFJOHK_TypeDefinitionIndex = 55483;

	class DNOACAFJOHK
	{
	public:
		::RPG::GameCore::StringHash GJAGEOPALLJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueInRange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueInRange*))((::PBYTE)hIl2Cpp + DNOACAFJOHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOACAFJOHK_ONTASKBEGIN_OFFSET))(this);
		}

	};
