#pragma once
#include "unitysdk/unitysdk.h"
class BMDKIBJJAPP;
namespace RPG::GameCore { class TaskContext; }

#define OEHJAMKIGCM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE26B00)
#define OEHJAMKIGCM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE26B30)

inline static constexpr unsigned int OEHJAMKIGCM_TypeDefinitionIndex = 52848;

	class OEHJAMKIGCM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BMDKIBJJAPP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BMDKIBJJAPP*))((::PBYTE)hIl2Cpp + OEHJAMKIGCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHJAMKIGCM_ONTASKBEGIN_OFFSET))(this);
		}

	};
