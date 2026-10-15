#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropInitDayOfWeekAction; }
namespace RPG::GameCore { class TaskContext; }

#define HKBLDCPIMMB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D30840)
#define HKBLDCPIMMB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D30870)

inline static constexpr unsigned int HKBLDCPIMMB_TypeDefinitionIndex = 53175;

	class HKBLDCPIMMB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropInitDayOfWeekAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitDayOfWeekAction*))((::PBYTE)hIl2Cpp + HKBLDCPIMMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKBLDCPIMMB_ONTASKBEGIN_OFFSET))(this);
		}

	};
