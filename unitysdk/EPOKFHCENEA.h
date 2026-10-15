#pragma once
#include "unitysdk/unitysdk.h"
class MJCOCAMJABP;
namespace RPG::GameCore { class TaskContext; }

#define EPOKFHCENEA_CTOR_OFFSET UNITYSDK_OFFSET(0x155D9050)
#define EPOKFHCENEA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155D9080)

inline static constexpr unsigned int EPOKFHCENEA_TypeDefinitionIndex = 53889;

	class EPOKFHCENEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MJCOCAMJABP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MJCOCAMJABP*))((::PBYTE)hIl2Cpp + EPOKFHCENEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPOKFHCENEA_EVALUATE_OFFSET))(this);
		}

	};
