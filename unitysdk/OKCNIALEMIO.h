#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetNpcMonsterVisible; }
namespace RPG::GameCore { class TaskContext; }

#define OKCNIALEMIO_CTOR_OFFSET UNITYSDK_OFFSET(0xBECBF90)
#define OKCNIALEMIO_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBECC190)
#define OKCNIALEMIO_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xBECC010)
#define OKCNIALEMIO_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBECC1A0)
#define OKCNIALEMIO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBECBFC0)

inline static constexpr unsigned int OKCNIALEMIO_TypeDefinitionIndex = 58563;

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
