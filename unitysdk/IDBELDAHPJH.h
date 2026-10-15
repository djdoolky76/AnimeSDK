#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowRubbingUI; }
namespace RPG::GameCore { class TaskContext; }

#define IDBELDAHPJH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E685A0)
#define IDBELDAHPJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E685D0)

inline static constexpr unsigned int IDBELDAHPJH_TypeDefinitionIndex = 53285;

	class IDBELDAHPJH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRubbingUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRubbingUI*))((::PBYTE)hIl2Cpp + IDBELDAHPJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBELDAHPJH_ONTASKBEGIN_OFFSET))(this);
		}

	};
