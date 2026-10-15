#pragma once
#include "unitysdk/unitysdk.h"
class AGAGMFCPBED;
namespace RPG::GameCore { class TaskContext; }

#define GGOIFGGCMPK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A05DF0)
#define GGOIFGGCMPK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A05E20)

inline static constexpr unsigned int GGOIFGGCMPK_TypeDefinitionIndex = 54497;

	class GGOIFGGCMPK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AGAGMFCPBED* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AGAGMFCPBED*))((::PBYTE)hIl2Cpp + GGOIFGGCMPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOIFGGCMPK_EVALUATE_OFFSET))(this);
		}

	};
