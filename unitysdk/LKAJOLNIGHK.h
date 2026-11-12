#pragma once
#include "unitysdk/unitysdk.h"
class EOCFKGFAPHJ;
namespace RPG::GameCore { class TaskContext; }

#define LKAJOLNIGHK_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC5540)
#define LKAJOLNIGHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFC5570)
#define LKAJOLNIGHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFC55B0)

inline static constexpr unsigned int LKAJOLNIGHK_TypeDefinitionIndex = 56433;

	class LKAJOLNIGHK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EOCFKGFAPHJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EOCFKGFAPHJ*))((::PBYTE)hIl2Cpp + LKAJOLNIGHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKAJOLNIGHK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKAJOLNIGHK_ONTASKBEGIN_OFFSET))(this);
		}

	};
