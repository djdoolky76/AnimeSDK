#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StartEnterBattlePreload; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }

#define LEDJFDIGFFI_CAEHGPGKMMD_OFFSET UNITYSDK_OFFSET(0xB6478E0)
#define LEDJFDIGFFI_CTOR_OFFSET UNITYSDK_OFFSET(0xB647860)
#define LEDJFDIGFFI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB647890)
#define LEDJFDIGFFI_ECPCKGFCGHD_OFFSET UNITYSDK_OFFSET(0xB648010)
#define LEDJFDIGFFI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB647A70)
#define LEDJFDIGFFI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB647A20)

inline static constexpr unsigned int LEDJFDIGFFI_TypeDefinitionIndex = 55664;

	class LEDJFDIGFFI
	{
	public:
		::System::Action* MCINGOMKEPI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartEnterBattlePreload* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartEnterBattlePreload*))((::PBYTE)hIl2Cpp + LEDJFDIGFFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDJFDIGFFI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDJFDIGFFI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDJFDIGFFI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void CAEHGPGKMMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDJFDIGFFI_CAEHGPGKMMD_OFFSET))(this);
		}

		::System::Void ECPCKGFCGHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDJFDIGFFI_ECPCKGFCGHD_OFFSET))(this);
		}

	};
