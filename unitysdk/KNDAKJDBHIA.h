#pragma once
#include "unitysdk/unitysdk.h"
class APMEENONPPK;
namespace RPG::GameCore { class TaskContext; }

#define KNDAKJDBHIA_CTOR_OFFSET UNITYSDK_OFFSET(0xB57F970)
#define KNDAKJDBHIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB57F9B0)
#define KNDAKJDBHIA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB57F9F0)

inline static constexpr unsigned int KNDAKJDBHIA_TypeDefinitionIndex = 53822;

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
