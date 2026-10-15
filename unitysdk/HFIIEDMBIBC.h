#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCustomString; }

#define HFIIEDMBIBC_CHBJPMFMCIO_OFFSET UNITYSDK_OFFSET(0x15C6E540)
#define HFIIEDMBIBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C6E480)
#define HFIIEDMBIBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C6E490)
#define HFIIEDMBIBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C6E4D0)
#define HFIIEDMBIBC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C6E6E0)
#define HFIIEDMBIBC_TICK_OFFSET UNITYSDK_OFFSET(0x15C6E730)

inline static constexpr unsigned int HFIIEDMBIBC_TypeDefinitionIndex = 58776;

	class HFIIEDMBIBC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerCustomString* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Int32 GAHGABBBDFF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCustomString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCustomString*))((::PBYTE)hIl2Cpp + HFIIEDMBIBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIIEDMBIBC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIIEDMBIBC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIIEDMBIBC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void CHBJPMFMCIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIIEDMBIBC_CHBJPMFMCIO_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFIIEDMBIBC_TICK_OFFSET))(this, a1);
		}

	};
