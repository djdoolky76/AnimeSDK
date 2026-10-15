#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UITriggerMonopolyModifier; }

#define PFKCHJHJAJC_CTOR_OFFSET UNITYSDK_OFFSET(0xC214110)
#define PFKCHJHJAJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC214940)
#define PFKCHJHJAJC_KEPACFBINJJ_OFFSET UNITYSDK_OFFSET(0xC214260)
#define PFKCHJHJAJC_LJJHEAJCLLM_OFFSET UNITYSDK_OFFSET(0xC214340)
#define PFKCHJHJAJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC214120)
#define PFKCHJHJAJC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2148B0)
#define PFKCHJHJAJC_TICK_OFFSET UNITYSDK_OFFSET(0xC2147D0)

inline static constexpr unsigned int PFKCHJHJAJC_TypeDefinitionIndex = 58839;

	class PFKCHJHJAJC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::UITriggerMonopolyModifier* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Boolean BNDIHDEOELB; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single LLNIGIGFCEA; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UITriggerMonopolyModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UITriggerMonopolyModifier*))((::PBYTE)hIl2Cpp + PFKCHJHJAJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKCHJHJAJC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KEPACFBINJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKCHJHJAJC_KEPACFBINJJ_OFFSET))(this);
		}

		::System::Void LJJHEAJCLLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKCHJHJAJC_LJJHEAJCLLM_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PFKCHJHJAJC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKCHJHJAJC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKCHJHJAJC_DISPOSE_OFFSET))(this);
		}

	};
