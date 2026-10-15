#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraFreelook3rdBaseChangeParam; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERAFREELOOK3RDBASECHANGEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC510B0)
#define RPG_GAMECORE_VCAMERAFREELOOK3RDBASECHANGEPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC50D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraFreelook3rdBaseChangeParam_TypeDefinitionIndex = 16409;

	class VCameraFreelook3rdBaseChangeParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Boolean Reset; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single ZoomRatio; // 0x14
		::RPG::MVector2 CenterPos; // 0x18
		::System::Single Time; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* ChangeCurvePath; // 0x28
		::System::Single RecoveryTime; // 0x30
		::System::Byte _padding2[0x4];
		::System::String* RecoveryCurvePath; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFREELOOK3RDBASECHANGEPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraFreelook3rdBaseChangeParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraFreelook3rdBaseChangeParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFREELOOK3RDBASECHANGEPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
