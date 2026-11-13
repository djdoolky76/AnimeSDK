#pragma once
#include "unitysdk/unitysdk.h"
class MNGOILBPHNG;
namespace RPG::GameCore { class TaskContext; }

#define DNAKEPGFDFK_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB0060)
#define DNAKEPGFDFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CB0090)

inline static constexpr unsigned int DNAKEPGFDFK_TypeDefinitionIndex = 55002;

	class DNAKEPGFDFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MNGOILBPHNG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MNGOILBPHNG*))((::PBYTE)hIl2Cpp + DNAKEPGFDFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKEPGFDFK_ONTASKBEGIN_OFFSET))(this);
		}

	};
