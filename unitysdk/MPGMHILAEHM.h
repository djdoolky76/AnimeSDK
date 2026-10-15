#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ConvincePanelActive; }
namespace RPG::GameCore { class TaskContext; }

#define MPGMHILAEHM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA382B0)
#define MPGMHILAEHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA382E0)

inline static constexpr unsigned int MPGMHILAEHM_TypeDefinitionIndex = 52710;

	class MPGMHILAEHM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvincePanelActive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvincePanelActive*))((::PBYTE)hIl2Cpp + MPGMHILAEHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGMHILAEHM_ONTASKBEGIN_OFFSET))(this);
		}

	};
