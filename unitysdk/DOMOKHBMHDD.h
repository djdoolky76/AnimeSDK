#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowActionCountDownIcon; }
namespace RPG::GameCore { class TaskContext; }

#define DOMOKHBMHDD_CTOR_OFFSET UNITYSDK_OFFSET(0x12DEC780)
#define DOMOKHBMHDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12DEC7B0)

inline static constexpr unsigned int DOMOKHBMHDD_TypeDefinitionIndex = 55972;

	class DOMOKHBMHDD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowActionCountDownIcon* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowActionCountDownIcon*))((::PBYTE)hIl2Cpp + DOMOKHBMHDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMOKHBMHDD_ONTASKBEGIN_OFFSET))(this);
		}

	};
