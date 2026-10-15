#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveTemplateVirtualCamera; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D34AE40)
#define RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D34AE50)
#define RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D34AE00)

namespace RPG::GameCore
{
	class ActiveTemplateVirtualCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* TemplateName; // 0x18
		::System::Single FollowOffset; // 0x20
		::RPG::MVector3 CameraRotation; // 0x24
		::System::Single CameraRotationOffset; // 0x30
		::System::Boolean IsActive; // 0x34
		::System::Byte _padding0[0x3];
		::System::String* FollowTargetAnchorName; // 0x38
		::System::String* LookAtTargetAnchorName; // 0x40
		::System::UInt32 FollowTargetGroupID; // 0x48
		::System::UInt32 FollowTargetEntityID; // 0x4C
		::System::UInt32 LookAtTargetGroupID; // 0x50
		::System::UInt32 LookAtTargetEntityID; // 0x54
		::System::String* AreaName; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveTemplateVirtualCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveTemplateVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveTemplateVirtualCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveTemplateVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVETEMPLATEVIRTUALCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
