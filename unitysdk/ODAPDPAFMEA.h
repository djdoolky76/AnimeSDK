#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByComparePhoneMessageItem; }
namespace RPG::GameCore { class TaskContext; }

#define ODAPDPAFMEA_CTOR_OFFSET UNITYSDK_OFFSET(0xBD77D40)
#define ODAPDPAFMEA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBD77D70)

inline static constexpr unsigned int ODAPDPAFMEA_TypeDefinitionIndex = 52584;

	class ODAPDPAFMEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePhoneMessageItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePhoneMessageItem*))((::PBYTE)hIl2Cpp + ODAPDPAFMEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAPDPAFMEA_EVALUATE_OFFSET))(this);
		}

	};
