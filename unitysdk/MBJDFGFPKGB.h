#pragma once
#include "unitysdk/unitysdk.h"
class MGLNOOOBBMK;
namespace RPG::GameCore { class TaskContext; }

#define MBJDFGFPKGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB85BCB0)
#define MBJDFGFPKGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB85BCE0)

inline static constexpr unsigned int MBJDFGFPKGB_TypeDefinitionIndex = 55328;

	class MBJDFGFPKGB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MGLNOOOBBMK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MGLNOOOBBMK*))((::PBYTE)hIl2Cpp + MBJDFGFPKGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJDFGFPKGB_ONTASKBEGIN_OFFSET))(this);
		}

	};
