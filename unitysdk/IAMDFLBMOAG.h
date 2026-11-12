#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowHipplenBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define IAMDFLBMOAG_CTOR_OFFSET UNITYSDK_OFFSET(0x16DC8D00)
#define IAMDFLBMOAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DC90D0)
#define IAMDFLBMOAG_FGHEKOANCBN_OFFSET UNITYSDK_OFFSET(0x16DC91C0)
#define IAMDFLBMOAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16DC8D10)
#define IAMDFLBMOAG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16DC9110)
#define IAMDFLBMOAG_TICK_OFFSET UNITYSDK_OFFSET(0x16DC9160)

inline static constexpr unsigned int IAMDFLBMOAG_TypeDefinitionIndex = 53404;

	class IAMDFLBMOAG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowHipplenBubbleTalk* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowHipplenBubbleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowHipplenBubbleTalk*))((::PBYTE)hIl2Cpp + IAMDFLBMOAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMDFLBMOAG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMDFLBMOAG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMDFLBMOAG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAMDFLBMOAG_TICK_OFFSET))(this, a1);
		}

		::System::Void FGHEKOANCBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMDFLBMOAG_FGHEKOANCBN_OFFSET))(this);
		}

	};
