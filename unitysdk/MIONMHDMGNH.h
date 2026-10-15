#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvBlockRewardToast; }
namespace RPG::GameCore { class TaskContext; }

#define MIONMHDMGNH_CTOR_OFFSET UNITYSDK_OFFSET(0xB960B70)
#define MIONMHDMGNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB960BA0)

inline static constexpr unsigned int MIONMHDMGNH_TypeDefinitionIndex = 57870;

	class MIONMHDMGNH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvBlockRewardToast* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvBlockRewardToast*))((::PBYTE)hIl2Cpp + MIONMHDMGNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIONMHDMGNH_ONTASKBEGIN_OFFSET))(this);
		}

	};
