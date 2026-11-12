#pragma once
#include "unitysdk/unitysdk.h"
class NBJOCFJOOKL;
namespace RPG::GameCore { class TaskContext; }

#define MLMJIBMMGHA_CTOR_OFFSET UNITYSDK_OFFSET(0xC2756F0)
#define MLMJIBMMGHA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC275720)

inline static constexpr unsigned int MLMJIBMMGHA_TypeDefinitionIndex = 59179;

	class MLMJIBMMGHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NBJOCFJOOKL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NBJOCFJOOKL*))((::PBYTE)hIl2Cpp + MLMJIBMMGHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMJIBMMGHA_ONTASKBEGIN_OFFSET))(this);
		}

	};
