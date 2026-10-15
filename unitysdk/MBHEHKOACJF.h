#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BlockCameraDitherUpdate; }
namespace RPG::GameCore { class TaskContext; }

#define MBHEHKOACJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB85ADA0)
#define MBHEHKOACJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB85ADD0)

inline static constexpr unsigned int MBHEHKOACJF_TypeDefinitionIndex = 57960;

	class MBHEHKOACJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockCameraDitherUpdate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockCameraDitherUpdate*))((::PBYTE)hIl2Cpp + MBHEHKOACJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBHEHKOACJF_ONTASKBEGIN_OFFSET))(this);
		}

	};
