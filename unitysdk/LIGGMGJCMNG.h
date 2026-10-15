#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ConvinceSplitLine; }
namespace RPG::GameCore { class TaskContext; }

#define LIGGMGJCMNG_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C4A80)
#define LIGGMGJCMNG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6C4AB0)

inline static constexpr unsigned int LIGGMGJCMNG_TypeDefinitionIndex = 52714;

	class LIGGMGJCMNG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceSplitLine* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceSplitLine*))((::PBYTE)hIl2Cpp + LIGGMGJCMNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGGMGJCMNG_ONTASKBEGIN_OFFSET))(this);
		}

	};
