#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_HaltCD; }
namespace RPG::GameCore { class TaskContext; }

#define OLCCGNAPOBK_CTOR_OFFSET UNITYSDK_OFFSET(0xBEFFF60)
#define OLCCGNAPOBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEFFF90)
#define OLCCGNAPOBK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF00000)

inline static constexpr unsigned int OLCCGNAPOBK_TypeDefinitionIndex = 52235;

	class OLCCGNAPOBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_HaltCD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_HaltCD*))((::PBYTE)hIl2Cpp + OLCCGNAPOBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCCGNAPOBK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCCGNAPOBK_ONTASKRESET_OFFSET))(this);
		}

	};
