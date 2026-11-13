#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KFELGAIGHAP;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowEnvBuffDialog; }
namespace RPG::GameCore { class TaskContext; }

#define ADIKBCCLKLG_CTOR_OFFSET UNITYSDK_OFFSET(0x182AE6A0)
#define ADIKBCCLKLG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x182AF110)
#define ADIKBCCLKLG_DOKOMMCBAIH_OFFSET UNITYSDK_OFFSET(0x182AF510)
#define ADIKBCCLKLG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x182AE730)
#define ADIKBCCLKLG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x182AF0C0)
#define ADIKBCCLKLG_TICK_OFFSET UNITYSDK_OFFSET(0x182AF1E0)

inline static constexpr unsigned int ADIKBCCLKLG_TypeDefinitionIndex = 59906;

	class ADIKBCCLKLG : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::UIController* CPIIOIPAAKK; // 0x18
		::KFELGAIGHAP* CKMKMCAOLOG; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* NJIDIFMBIOC; // 0x30
		::RPG::GameCore::ShowEnvBuffDialog* OFKGLJOAMLD; // 0x38
		::RPG::Client::TextID GGEAIODCDFK; // 0x40
		::System::Boolean PAIHBMIGDIO; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEnvBuffDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEnvBuffDialog*))((::PBYTE)hIl2Cpp + ADIKBCCLKLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIKBCCLKLG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIKBCCLKLG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIKBCCLKLG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADIKBCCLKLG_TICK_OFFSET))(this, a1);
		}

		::System::Void DOKOMMCBAIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIKBCCLKLG_DOKOMMCBAIH_OFFSET))(this);
		}

	};
