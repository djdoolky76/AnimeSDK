#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareGPwithGP; }
namespace RPG::GameCore { class TaskContext; }

#define GPHBPHFMCOL_CTOR_OFFSET UNITYSDK_OFFSET(0x15B597C0)
#define GPHBPHFMCOL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15B597F0)

inline static constexpr unsigned int GPHBPHFMCOL_TypeDefinitionIndex = 52564;

	class GPHBPHFMCOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareGPwithGP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareGPwithGP*))((::PBYTE)hIl2Cpp + GPHBPHFMCOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHBPHFMCOL_EVALUATE_OFFSET))(this);
		}

	};
