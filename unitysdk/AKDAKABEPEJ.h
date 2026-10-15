#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvModifierOverrideFeatureFlagParam; }
namespace RPG::GameCore { class TaskContext; }

#define AKDAKABEPEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC7970)
#define AKDAKABEPEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CC79A0)

inline static constexpr unsigned int AKDAKABEPEJ_TypeDefinitionIndex = 52399;

	class AKDAKABEPEJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvModifierOverrideFeatureFlagParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvModifierOverrideFeatureFlagParam*))((::PBYTE)hIl2Cpp + AKDAKABEPEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDAKABEPEJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
