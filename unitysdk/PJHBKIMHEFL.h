#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchClientRaidMap; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define PJHBKIMHEFL_APDGPOALAPG_OFFSET UNITYSDK_OFFSET(0xC27F250)
#define PJHBKIMHEFL_BNAFKHPAJOI_OFFSET UNITYSDK_OFFSET(0xC27EE40)
#define PJHBKIMHEFL_CFKKNKJPJLM_OFFSET UNITYSDK_OFFSET(0xC27F140)
#define PJHBKIMHEFL_CTOR_OFFSET UNITYSDK_OFFSET(0xC27EB70)
#define PJHBKIMHEFL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC27EB90)
#define PJHBKIMHEFL_LCAHFHMKLHE_OFFSET UNITYSDK_OFFSET(0xC27ED70)
#define PJHBKIMHEFL_MMODCAEMAHE_OFFSET UNITYSDK_OFFSET(0xC27EF50)
#define PJHBKIMHEFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC27EBD0)
#define PJHBKIMHEFL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC27EC50)
#define PJHBKIMHEFL_TICK_OFFSET UNITYSDK_OFFSET(0xC27ECA0)

inline static constexpr unsigned int PJHBKIMHEFL_TypeDefinitionIndex = 53305;

	class PJHBKIMHEFL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchClientRaidMap* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Single JEFFJNPPBGC; // 0x28
		::System::Single FJGFCHGGPIL; // 0x2C
		::System::UInt32 NGPCOKICELI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchClientRaidMap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchClientRaidMap*))((::PBYTE)hIl2Cpp + PJHBKIMHEFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHBKIMHEFL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHBKIMHEFL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHBKIMHEFL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJHBKIMHEFL_TICK_OFFSET))(this, a1);
		}

		::System::Void LCAHFHMKLHE(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + PJHBKIMHEFL_LCAHFHMKLHE_OFFSET))(this, a1, a2);
		}

		::System::Void CFKKNKJPJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHBKIMHEFL_CFKKNKJPJLM_OFFSET))(this);
		}

		::System::Void BNAFKHPAJOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHBKIMHEFL_BNAFKHPAJOI_OFFSET))(this);
		}

		::System::Void MMODCAEMAHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHBKIMHEFL_MMODCAEMAHE_OFFSET))(this);
		}

		::System::Void APDGPOALAPG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJHBKIMHEFL_APDGPOALAPG_OFFSET))(this, a1);
		}

	};
