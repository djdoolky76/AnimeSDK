#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KBLANADAHOM;
namespace RPG::GameCore { class TaskContext; }

#define JAFHLHBJNLP_CTOR_OFFSET UNITYSDK_OFFSET(0x16541C40)
#define JAFHLHBJNLP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16541C70)
#define JAFHLHBJNLP_OPOPFDFJIAE_OFFSET UNITYSDK_OFFSET(0x16541FA0)

inline static constexpr unsigned int JAFHLHBJNLP_TypeDefinitionIndex = 55058;

	class JAFHLHBJNLP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KBLANADAHOM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KBLANADAHOM*))((::PBYTE)hIl2Cpp + JAFHLHBJNLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFHLHBJNLP_EVALUATE_OFFSET))(this);
		}

		::System::Boolean OPOPFDFJIAE(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JAFHLHBJNLP_OPOPFDFJIAE_OFFSET))(this, a1);
		}

	};
