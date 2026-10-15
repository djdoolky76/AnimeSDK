#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FindClosestAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define AJFPGBDMLAL_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB6F80)
#define AJFPGBDMLAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CB6FB0)

inline static constexpr unsigned int AJFPGBDMLAL_TypeDefinitionIndex = 55063;

	class AJFPGBDMLAL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FindClosestAttachPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FindClosestAttachPoint*))((::PBYTE)hIl2Cpp + AJFPGBDMLAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFPGBDMLAL_ONTASKBEGIN_OFFSET))(this);
		}

	};
