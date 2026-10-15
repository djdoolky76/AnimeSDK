#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropAnimTriggerRandomPlay; }
namespace RPG::GameCore { class TaskContext; }

#define AELLMIMNCMI_CTOR_OFFSET UNITYSDK_OFFSET(0xCEFAF10)
#define AELLMIMNCMI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCEFAF40)

inline static constexpr unsigned int AELLMIMNCMI_TypeDefinitionIndex = 55881;

	class AELLMIMNCMI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropAnimTriggerRandomPlay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropAnimTriggerRandomPlay*))((::PBYTE)hIl2Cpp + AELLMIMNCMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELLMIMNCMI_ONTASKBEGIN_OFFSET))(this);
		}

	};
