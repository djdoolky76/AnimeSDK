#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraConfigList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_VCAMERACONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7E2C0)
#define RPG_GAMECORE_VCAMERACONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7E1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraConfigList_TypeDefinitionIndex = 16444;

	class VCameraConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VCameraConfig*>* Configs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
