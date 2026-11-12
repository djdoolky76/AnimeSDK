#pragma once
#include "unitysdk/unitysdk.h"
class MGLNOOOBBMK;
namespace RPG::GameCore { class TaskContext; }

#define MBJDFGFPKGB_CTOR_OFFSET UNITYSDK_OFFSET(0xC0C1B20)
#define MBJDFGFPKGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0C1B50)

inline static constexpr unsigned int MBJDFGFPKGB_TypeDefinitionIndex = 56510;

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
