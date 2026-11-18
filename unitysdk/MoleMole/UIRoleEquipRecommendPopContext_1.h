#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class CPODIDNILKM_1;
template <typename T> class DHLIOFKOPIP_1;

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipRecommendPopContext_1_TypeDefinitionIndex = 63511;

	template <typename T>
	class UIRoleEquipRecommendPopContext_1 : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 avatarId; // 0x0
		::System::Int32 slotIndex; // 0x0
		::System::Boolean playChoiceAnimation; // 0x0
		::DHLIOFKOPIP_1<T>* suitGroupData; // 0x0
		::DHLIOFKOPIP_1<T>* basePropertyGroupData; // 0x0
		::DHLIOFKOPIP_1<T>* randPropertyGroupData; // 0x0
		::CPODIDNILKM_1<T>* sorter; // 0x0
	};
}
