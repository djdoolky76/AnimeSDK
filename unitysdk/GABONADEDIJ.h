#pragma once
#include "unitysdk/unitysdk.h"
class AOOFHMBDLPL;
namespace RPG::GameCore { class TaskContext; }

#define GABONADEDIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1592B950)
#define GABONADEDIJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1592B980)

inline static constexpr unsigned int GABONADEDIJ_TypeDefinitionIndex = 52932;

	class GABONADEDIJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AOOFHMBDLPL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AOOFHMBDLPL*))((::PBYTE)hIl2Cpp + GABONADEDIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GABONADEDIJ_EVALUATE_OFFSET))(this);
		}

	};
