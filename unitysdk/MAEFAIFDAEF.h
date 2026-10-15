#pragma once
#include "unitysdk/unitysdk.h"
class PIPIGCPDNBO;
namespace RPG::GameCore { class TaskContext; }

#define MAEFAIFDAEF_CTOR_OFFSET UNITYSDK_OFFSET(0xB845910)
#define MAEFAIFDAEF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB845940)

inline static constexpr unsigned int MAEFAIFDAEF_TypeDefinitionIndex = 53887;

	class MAEFAIFDAEF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PIPIGCPDNBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PIPIGCPDNBO*))((::PBYTE)hIl2Cpp + MAEFAIFDAEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEFAIFDAEF_EVALUATE_OFFSET))(this);
		}

	};
