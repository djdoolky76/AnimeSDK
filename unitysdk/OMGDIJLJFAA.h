#pragma once
#include "unitysdk/unitysdk.h"
class AJBACDGLCMO;
namespace RPG::GameCore { class TaskContext; }

#define OMGDIJLJFAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF1F440)
#define OMGDIJLJFAA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF1F470)

inline static constexpr unsigned int OMGDIJLJFAA_TypeDefinitionIndex = 52782;

	class OMGDIJLJFAA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AJBACDGLCMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AJBACDGLCMO*))((::PBYTE)hIl2Cpp + OMGDIJLJFAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGDIJLJFAA_EVALUATE_OFFSET))(this);
		}

	};
