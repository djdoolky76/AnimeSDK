#pragma once
#include "unitysdk/unitysdk.h"
class EJLGLHKDMAI;
namespace RPG::GameCore { class TaskContext; }

#define HHBFCANLAFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA7920)
#define HHBFCANLAFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CA7950)

inline static constexpr unsigned int HHBFCANLAFK_TypeDefinitionIndex = 53297;

	class HHBFCANLAFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EJLGLHKDMAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EJLGLHKDMAI*))((::PBYTE)hIl2Cpp + HHBFCANLAFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBFCANLAFK_ONTASKBEGIN_OFFSET))(this);
		}

	};
