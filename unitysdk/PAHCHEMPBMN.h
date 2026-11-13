#pragma once
#include "unitysdk/unitysdk.h"
class HPCOJDJAHOG;
namespace RPG::GameCore { class TaskContext; }

#define PAHCHEMPBMN_CTOR_OFFSET UNITYSDK_OFFSET(0x18ADA140)
#define PAHCHEMPBMN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18ADA170)

inline static constexpr unsigned int PAHCHEMPBMN_TypeDefinitionIndex = 55050;

	class PAHCHEMPBMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HPCOJDJAHOG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HPCOJDJAHOG*))((::PBYTE)hIl2Cpp + PAHCHEMPBMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHCHEMPBMN_EVALUATE_OFFSET))(this);
		}

	};
