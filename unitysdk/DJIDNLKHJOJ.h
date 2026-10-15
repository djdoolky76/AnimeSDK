#pragma once
#include "unitysdk/unitysdk.h"
class FLEDJOFODPJ;
namespace RPG::GameCore { class TaskContext; }

#define DJIDNLKHJOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xF2356B0)
#define DJIDNLKHJOJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF2358A0)
#define DJIDNLKHJOJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF2356E0)

inline static constexpr unsigned int DJIDNLKHJOJ_TypeDefinitionIndex = 52684;

	class DJIDNLKHJOJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FLEDJOFODPJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FLEDJOFODPJ*))((::PBYTE)hIl2Cpp + DJIDNLKHJOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIDNLKHJOJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIDNLKHJOJ_DISPOSE_OFFSET))(this);
		}

	};
