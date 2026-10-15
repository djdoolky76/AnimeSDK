#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PauseCameraUpdate; }
namespace RPG::GameCore { class TaskContext; }

#define CEAANJJMHGC_CTOR_OFFSET UNITYSDK_OFFSET(0xC775FB0)
#define CEAANJJMHGC_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC7760C0)
#define CEAANJJMHGC_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC7760D0)
#define CEAANJJMHGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC775FE0)

inline static constexpr unsigned int CEAANJJMHGC_TypeDefinitionIndex = 53058;

	class CEAANJJMHGC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseCameraUpdate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseCameraUpdate*))((::PBYTE)hIl2Cpp + CEAANJJMHGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAANJJMHGC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAANJJMHGC_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAANJJMHGC_ONSKIP_OFFSET))(this);
		}

	};
