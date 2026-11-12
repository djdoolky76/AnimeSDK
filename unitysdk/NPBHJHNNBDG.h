#pragma once
#include "unitysdk/unitysdk.h"
class KHAPGEIEOHE;
namespace RPG::GameCore { class TaskContext; }

#define NPBHJHNNBDG_CTOR_OFFSET UNITYSDK_OFFSET(0xC5E8D30)
#define NPBHJHNNBDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC5E8D60)

inline static constexpr unsigned int NPBHJHNNBDG_TypeDefinitionIndex = 53809;

	class NPBHJHNNBDG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KHAPGEIEOHE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KHAPGEIEOHE*))((::PBYTE)hIl2Cpp + NPBHJHNNBDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBHJHNNBDG_ONTASKBEGIN_OFFSET))(this);
		}

	};
