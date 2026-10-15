#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ByAnd; }
namespace RPG::GameCore { class TaskContext; }

#define GFNNALPJBCF_CTOR_OFFSET UNITYSDK_OFFSET(0x159FE930)
#define GFNNALPJBCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159FEA30)
#define GFNNALPJBCF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x159FE9C0)

inline static constexpr unsigned int GFNNALPJBCF_TypeDefinitionIndex = 54479;

	class GFNNALPJBCF
	{
	public:
		::KFELGAIGHAP* HFOFIODMFGB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + GFNNALPJBCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNNALPJBCF_EVALUATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNNALPJBCF_DISPOSE_OFFSET))(this);
		}

	};
