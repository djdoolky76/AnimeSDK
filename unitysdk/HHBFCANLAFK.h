#pragma once
#include "unitysdk/unitysdk.h"
class EJLGLHKDMAI;
namespace RPG::GameCore { class TaskContext; }

#define HHBFCANLAFK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB4370)
#define HHBFCANLAFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CB43A0)

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
