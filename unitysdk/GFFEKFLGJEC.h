#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPamActionPhaseTalk; }
namespace RPG::GameCore { class TaskContext; }

#define GFFEKFLGJEC_CTOR_OFFSET UNITYSDK_OFFSET(0x169287F0)
#define GFFEKFLGJEC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16928820)

inline static constexpr unsigned int GFFEKFLGJEC_TypeDefinitionIndex = 54317;

	class GFFEKFLGJEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + GFFEKFLGJEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFEKFLGJEC_EVALUATE_OFFSET))(this);
		}

	};
