#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKMFLDDCPEE;

#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBF4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleRankingtRowWidgetController_Data_TypeDefinitionIndex = 54432;

	class UIHardCoreBossBattleRankingtRowWidgetController_Data : public ::System::Object
	{
	public:
		::FKMFLDDCPEE* RankInfo; // 0x10
		::System::Int32 FriendRankIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
