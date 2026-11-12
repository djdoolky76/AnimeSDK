#pragma once
#include "unitysdk/unitysdk.h"
class BNHDGEHMMIO;
namespace RPG::GameCore { class ByAny; }
namespace RPG::GameCore { class TaskContext; }

#define LJDLJGPFKPB_CTOR_OFFSET UNITYSDK_OFFSET(0xBF7C9F0)
#define LJDLJGPFKPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF7CAF0)
#define LJDLJGPFKPB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF7CA80)

inline static constexpr unsigned int LJDLJGPFKPB_TypeDefinitionIndex = 55647;

	class LJDLJGPFKPB
	{
	public:
		::BNHDGEHMMIO* LMDHPABCOAB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAny* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAny*))((::PBYTE)hIl2Cpp + LJDLJGPFKPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDLJGPFKPB_EVALUATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDLJGPFKPB_DISPOSE_OFFSET))(this);
		}

	};
