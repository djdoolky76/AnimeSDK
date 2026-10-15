#pragma once
#include "unitysdk/unitysdk.h"
class OFNAKNBLMHH;
namespace RPG::GameCore { class TaskContext; }

#define NJGLACNAFMG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC09B50)
#define NJGLACNAFMG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC09B80)

inline static constexpr unsigned int NJGLACNAFMG_TypeDefinitionIndex = 52786;

	class NJGLACNAFMG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OFNAKNBLMHH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OFNAKNBLMHH*))((::PBYTE)hIl2Cpp + NJGLACNAFMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGLACNAFMG_ONTASKBEGIN_OFFSET))(this);
		}

	};
