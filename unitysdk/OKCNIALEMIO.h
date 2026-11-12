#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetNpcMonsterVisible; }
namespace RPG::GameCore { class TaskContext; }

#define OKCNIALEMIO_CTOR_OFFSET UNITYSDK_OFFSET(0xC7CB000)
#define OKCNIALEMIO_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC7CB200)
#define OKCNIALEMIO_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xC7CB080)
#define OKCNIALEMIO_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC7CB210)
#define OKCNIALEMIO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7CB030)

inline static constexpr unsigned int OKCNIALEMIO_TypeDefinitionIndex = 59828;

	class OKCNIALEMIO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNpcMonsterVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNpcMonsterVisible*))((::PBYTE)hIl2Cpp + OKCNIALEMIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCNIALEMIO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCNIALEMIO_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCNIALEMIO_ONSKIP_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCNIALEMIO_NHPDCPKMNAM_OFFSET))(this);
		}

	};
