#pragma once
#include "unitysdk/unitysdk.h"
class NABOEBEOBDB;
namespace RPG::GameCore { class TaskContext; }

#define MNINIONBJNK_CTOR_OFFSET UNITYSDK_OFFSET(0xC2CA560)
#define MNINIONBJNK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2CA590)

inline static constexpr unsigned int MNINIONBJNK_TypeDefinitionIndex = 59468;

	class MNINIONBJNK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NABOEBEOBDB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NABOEBEOBDB*))((::PBYTE)hIl2Cpp + MNINIONBJNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNINIONBJNK_ONTASKBEGIN_OFFSET))(this);
		}

	};
