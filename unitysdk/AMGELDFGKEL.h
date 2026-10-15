#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByHPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define AMGELDFGKEL_CTOR_OFFSET UNITYSDK_OFFSET(0x15572EA0)
#define AMGELDFGKEL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15572F80)

inline static constexpr unsigned int AMGELDFGKEL_TypeDefinitionIndex = 55444;

	class AMGELDFGKEL
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByHPRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByHPRatio*))((::PBYTE)hIl2Cpp + AMGELDFGKEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGELDFGKEL_ONTASKBEGIN_OFFSET))(this);
		}

	};
