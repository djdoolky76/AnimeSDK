#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PhotoGraphAimContainerTargetBase; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERTARGETBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90D400)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERTARGETBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D90F710)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERTARGETBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90E8B0)

namespace RPG::GameCore
{
	class PhotoGraphAimContainerTargetBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsAutoIdentifyMode; // 0x10
		::System::Boolean IsTopContainer; // 0x11
		::System::Boolean ShowAimTag; // 0x12
		::System::Boolean IdentifyResult; // 0x13
		::System::Boolean UseGameObjectNode; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::GameCore::DynamicString* GameObjectNode; // 0x18
		::RPG::MVector3 NodeOffset; // 0x20
		::System::Single ShowTipAngle; // 0x2C
		::System::Boolean IgnoreColliderTest; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERTARGETBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContainerTargetBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContainerTargetBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERTARGETBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContainerTargetBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContainerTargetBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERTARGETBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
