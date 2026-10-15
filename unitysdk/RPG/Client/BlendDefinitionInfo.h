#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CameraBlendCurve; }

#define RPG_CLIENT_BLENDDEFINITIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xC885A00)

namespace RPG::Client
{
	class BlendDefinitionInfo : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::Cinemachine::CinemachineBlendDefinition_Style Style; // 0x14
		::System::Single Time; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::CameraBlendCurve* CurveObject; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLENDDEFINITIONINFO_CTOR_OFFSET))(this);
		}

	};
}
