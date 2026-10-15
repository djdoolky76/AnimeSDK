#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSelectWheelItem; }

#define OKLAAMDOEBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBEE2B70)
#define OKLAAMDOEBL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEE2D30)
#define OKLAAMDOEBL_LFAIEAEDBJJ_OFFSET UNITYSDK_OFFSET(0xBEE2EE0)
#define OKLAAMDOEBL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEE2B80)
#define OKLAAMDOEBL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBEE2E30)
#define OKLAAMDOEBL_TICK_OFFSET UNITYSDK_OFFSET(0xBEE2E80)

inline static constexpr unsigned int OKLAAMDOEBL_TypeDefinitionIndex = 53492;

	class OKLAAMDOEBL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitSelectWheelItem* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSelectWheelItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSelectWheelItem*))((::PBYTE)hIl2Cpp + OKLAAMDOEBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLAAMDOEBL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLAAMDOEBL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLAAMDOEBL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKLAAMDOEBL_TICK_OFFSET))(this, a1);
		}

		::System::Void LFAIEAEDBJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLAAMDOEBL_LFAIEAEDBJJ_OFFSET))(this);
		}

	};
