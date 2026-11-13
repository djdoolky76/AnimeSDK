#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ConvinceSplitLineChange; }
namespace RPG::GameCore { class TaskContext; }

#define EFDANHABBGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A333480)
#define EFDANHABBGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A3334B0)

inline static constexpr unsigned int EFDANHABBGB_TypeDefinitionIndex = 53857;

	class EFDANHABBGB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceSplitLineChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceSplitLineChange*))((::PBYTE)hIl2Cpp + EFDANHABBGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDANHABBGB_ONTASKBEGIN_OFFSET))(this);
		}

	};
