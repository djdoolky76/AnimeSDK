#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/SummonerEnergyBarType.h"
namespace RPG::GameCore { class SetSummonerEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Nullable; }

#define NFJBIJJHNBH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB97150)
#define NFJBIJJHNBH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB97160)
#define NFJBIJJHNBH_MDLNPMMHOJI_1_OFFSET UNITYSDK_OFFSET(0xBB979B0)
#define NFJBIJJHNBH_MDLNPMMHOJI_2_OFFSET UNITYSDK_OFFSET(0xBB97A70)
#define NFJBIJJHNBH_MDLNPMMHOJI_OFFSET UNITYSDK_OFFSET(0xBB97A10)
#define NFJBIJJHNBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB971A0)
#define NFJBIJJHNBH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB97AD0)
#define NFJBIJJHNBH_TICK_OFFSET UNITYSDK_OFFSET(0xBB97B20)

inline static constexpr unsigned int NFJBIJJHNBH_TypeDefinitionIndex = 55573;

	class NFJBIJJHNBH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetSummonerEnergyBarState* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSummonerEnergyBarState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSummonerEnergyBarState*))((::PBYTE)hIl2Cpp + NFJBIJJHNBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJBIJJHNBH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJBIJJHNBH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJBIJJHNBH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFJBIJJHNBH_TICK_OFFSET))(this, a1);
		}

		::System::Nullable* MDLNPMMHOJI(::System::Int32 a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFJBIJJHNBH_MDLNPMMHOJI_OFFSET))(this, a1);
		}

		::System::Nullable* MDLNPMMHOJI_1(::RPG::GameCore::BoolEx a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + NFJBIJJHNBH_MDLNPMMHOJI_1_OFFSET))(this, a1);
		}

		::System::Nullable* MDLNPMMHOJI_2(::RPG::GameCore::SummonerEnergyBarType a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::RPG::GameCore::SummonerEnergyBarType))((::PBYTE)hIl2Cpp + NFJBIJJHNBH_MDLNPMMHOJI_2_OFFSET))(this, a1);
		}

	};
