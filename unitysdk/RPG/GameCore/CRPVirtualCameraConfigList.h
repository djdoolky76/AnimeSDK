#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CRPVirtualCameraConfig; }
namespace RPG::GameCore { class CRPVirtualCameraConfigList; }

#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D516CB0)
#define RPG_GAMECORE_CRPVIRTUALCAMERACONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D516BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CRPVirtualCameraConfigList_TypeDefinitionIndex = 16427;

	class CRPVirtualCameraConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CRPVirtualCameraConfig*>* CameraConfigs; // 0x10
		::System::Boolean AlwaysRefresh; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CRPVirtualCameraConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CRPVirtualCameraConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERACONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
