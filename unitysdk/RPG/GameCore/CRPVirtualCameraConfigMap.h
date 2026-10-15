#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CRPVirtualCameraConfigList; }
namespace RPG::GameCore { class CRPVirtualCameraConfigMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIGMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D544810)
#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIGMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D544730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CRPVirtualCameraConfigMap_TypeDefinitionIndex = 16445;

	class CRPVirtualCameraConfigMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CRPVirtualCameraConfigList*>* Configs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIGMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CRPVirtualCameraConfigMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CRPVirtualCameraConfigMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIGMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
