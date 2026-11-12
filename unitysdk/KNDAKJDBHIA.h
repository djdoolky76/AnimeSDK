#pragma once
#include "unitysdk/unitysdk.h"
class APMEENONPPK;
namespace RPG::GameCore { class TaskContext; }

#define KNDAKJDBHIA_CTOR_OFFSET UNITYSDK_OFFSET(0xBDCD520)
#define KNDAKJDBHIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDCD560)
#define KNDAKJDBHIA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDCD5A0)

inline static constexpr unsigned int KNDAKJDBHIA_TypeDefinitionIndex = 54986;

	class KNDAKJDBHIA
	{
	public:
		::System::Int32 APNGJPMPMOB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::APMEENONPPK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::APMEENONPPK*))((::PBYTE)hIl2Cpp + KNDAKJDBHIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDAKJDBHIA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNDAKJDBHIA_ONTASKBEGIN_OFFSET))(this);
		}

	};
