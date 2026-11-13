#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/SummonerEnergyBarType.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::GameCore { class SetSummonerEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }

#define NFJBIJJHNBH_CTOR_OFFSET UNITYSDK_OFFSET(0x18E78A20)
#define NFJBIJJHNBH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E78A30)
#define NFJBIJJHNBH_MDLNPMMHOJI_1_OFFSET UNITYSDK_OFFSET(0x18E792B0)
#define NFJBIJJHNBH_MDLNPMMHOJI_2_OFFSET UNITYSDK_OFFSET(0x18E79370)
#define NFJBIJJHNBH_MDLNPMMHOJI_OFFSET UNITYSDK_OFFSET(0x18E79310)
#define NFJBIJJHNBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E78A70)
#define NFJBIJJHNBH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18E793D0)
#define NFJBIJJHNBH_TICK_OFFSET UNITYSDK_OFFSET(0x18E79420)

inline static constexpr unsigned int NFJBIJJHNBH_TypeDefinitionIndex = 56768;

	class NFJBIJJHNBH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetSummonerEnergyBarState* OFKGLJOAMLD; // 0x20
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

		::System::Nullable_1<::System::Int32> MDLNPMMHOJI(::System::Int32 a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFJBIJJHNBH_MDLNPMMHOJI_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> MDLNPMMHOJI_1(::RPG::GameCore::BoolEx a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + NFJBIJJHNBH_MDLNPMMHOJI_1_OFFSET))(this, a1);
		}

		::System::Nullable_1<::RPG::GameCore::SummonerEnergyBarType> MDLNPMMHOJI_2(::RPG::GameCore::SummonerEnergyBarType a1)
		{
			return ((::System::Nullable_1<::RPG::GameCore::SummonerEnergyBarType>(*)(::PVOID, ::RPG::GameCore::SummonerEnergyBarType))((::PBYTE)hIl2Cpp + NFJBIJJHNBH_MDLNPMMHOJI_2_OFFSET))(this, a1);
		}

	};
