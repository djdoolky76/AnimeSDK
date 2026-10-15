#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
namespace RPG::GameCore { class SetGridFightBEEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Nullable; }

#define CIPFBLLHOLK_CTOR_OFFSET UNITYSDK_OFFSET(0xCF90500)
#define CIPFBLLHOLK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF90510)
#define CIPFBLLHOLK_MDLNPMMHOJI_1_OFFSET UNITYSDK_OFFSET(0xCF90D30)
#define CIPFBLLHOLK_MDLNPMMHOJI_OFFSET UNITYSDK_OFFSET(0xCF90D90)
#define CIPFBLLHOLK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF90550)
#define CIPFBLLHOLK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF90DF0)
#define CIPFBLLHOLK_TICK_OFFSET UNITYSDK_OFFSET(0xCF90E40)

	class CIPFBLLHOLK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetGridFightBEEnergyBarState* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetGridFightBEEnergyBarState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetGridFightBEEnergyBarState*))((::PBYTE)hIl2Cpp + CIPFBLLHOLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPFBLLHOLK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPFBLLHOLK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPFBLLHOLK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIPFBLLHOLK_TICK_OFFSET))(this, a1);
		}

		::System::Nullable* MDLNPMMHOJI(::System::Int32 a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIPFBLLHOLK_MDLNPMMHOJI_OFFSET))(this, a1);
		}

		::System::Nullable* MDLNPMMHOJI_1(::RPG::GameCore::BoolEx a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CIPFBLLHOLK_MDLNPMMHOJI_1_OFFSET))(this, a1);
		}

	};
