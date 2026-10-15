#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BlockInputController; }
namespace RPG::GameCore { class TaskContext; }

#define OMBPGNKPBPB_CTOR_OFFSET UNITYSDK_OFFSET(0xBF1F1F0)
#define OMBPGNKPBPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF1F220)
#define OMBPGNKPBPB_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBF1F6C0)
#define OMBPGNKPBPB_JNLIAEHCBDP_OFFSET UNITYSDK_OFFSET(0xBF1F550)
#define OMBPGNKPBPB_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBF1F670)
#define OMBPGNKPBPB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF1F260)
#define OMBPGNKPBPB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF1F620)
#define OMBPGNKPBPB_TICK_OFFSET UNITYSDK_OFFSET(0xBF1F6D0)

inline static constexpr unsigned int OMBPGNKPBPB_TypeDefinitionIndex = 52537;

	class OMBPGNKPBPB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockInputController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockInputController*))((::PBYTE)hIl2Cpp + OMBPGNKPBPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBPGNKPBPB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBPGNKPBPB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBPGNKPBPB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBPGNKPBPB_ONSKIP_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBPGNKPBPB_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMBPGNKPBPB_TICK_OFFSET))(this, a1);
		}

		::System::Boolean JNLIAEHCBDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBPGNKPBPB_JNLIAEHCBDP_OFFSET))(this);
		}

	};
