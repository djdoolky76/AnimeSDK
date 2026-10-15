#pragma once
#include "unitysdk/unitysdk.h"
class OGCPMCECAPG;
namespace RPG::GameCore { class TaskContext; }

#define IIKIBNKOLPD_CTOR_OFFSET UNITYSDK_OFFSET(0x16433850)
#define IIKIBNKOLPD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16433880)

inline static constexpr unsigned int IIKIBNKOLPD_TypeDefinitionIndex = 54954;

	class IIKIBNKOLPD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OGCPMCECAPG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OGCPMCECAPG*))((::PBYTE)hIl2Cpp + IIKIBNKOLPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKIBNKOLPD_EVALUATE_OFFSET))(this);
		}

	};
