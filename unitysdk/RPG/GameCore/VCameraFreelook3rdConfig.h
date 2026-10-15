#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraFloatChangeParam; }
namespace RPG::GameCore { class VCameraFreelook3rdBaseChangeParam; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }
namespace RPG::GameCore { class VCameraFreelook3rdExtraParams; }
namespace RPG::GameCore { class VCameraVector3ChangeParam; }

#define RPG_GAMECORE_VCAMERAFREELOOK3RDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC510D0)
#define RPG_GAMECORE_VCAMERAFREELOOK3RDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC4E610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraFreelook3rdConfig_TypeDefinitionIndex = 16411;

	class VCameraFreelook3rdConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::VCameraFreelook3rdBaseChangeParam* BaseChangeParam; // 0x18
		::RPG::GameCore::VCameraFloatChangeParam* FOVChangeParam; // 0x20
		::RPG::GameCore::VCameraFloatChangeParam* ZoomChangeParam; // 0x28
		::RPG::GameCore::VCameraFloatChangeParam* AxisYChangeParam; // 0x30
		::RPG::GameCore::VCameraVector3ChangeParam* DampChangeParam; // 0x38
		::System::Int32 DampChangeParamPriority; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::GameCore::VCameraVector3ChangeParam* LookAtOffsetChangeParam; // 0x48
		::RPG::GameCore::VCameraFreelook3rdExtraParams* ExtraParams; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFREELOOK3RDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraFreelook3rdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraFreelook3rdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFREELOOK3RDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
