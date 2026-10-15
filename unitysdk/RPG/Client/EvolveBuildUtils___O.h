#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFNAPELNFIC;
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils___O_TypeDefinitionIndex = 63813;

	class EvolveBuildUtils___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::GFNAPELNFIC*, ::RPG::GameCore::EvolveBuildGearEquipInfo*>** StaticGet__0___SlotInfo2GearEquipInfo()
		{
			return (::System::Func_2<::GFNAPELNFIC*, ::RPG::GameCore::EvolveBuildGearEquipInfo*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x46850);
		}

	};
}
