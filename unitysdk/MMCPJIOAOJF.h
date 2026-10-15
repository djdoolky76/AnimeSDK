#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSpecialVisionProtect; }
namespace RPG::GameCore { class TaskContext; }

#define MMCPJIOAOJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB9BA860)
#define MMCPJIOAOJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9BA890)

inline static constexpr unsigned int MMCPJIOAOJF_TypeDefinitionIndex = 52510;

	class MMCPJIOAOJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSpecialVisionProtect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSpecialVisionProtect*))((::PBYTE)hIl2Cpp + MMCPJIOAOJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCPJIOAOJF_ONTASKBEGIN_OFFSET))(this);
		}

	};
