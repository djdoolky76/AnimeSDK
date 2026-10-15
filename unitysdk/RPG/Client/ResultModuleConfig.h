#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
namespace RPG::Client { class BlendCurveRange; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RESULTMODULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDEC34D0)
#define RPG_CLIENT_RESULTMODULECONFIG_JIGLNEDJDCC_OFFSET UNITYSDK_OFFSET(0xDEC3480)

namespace RPG::Client
{
	class ResultModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Single CutShotAngle; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::BlendCurveRange*>* BlendRangeList; // 0x20
		::System::Single ResultShotAnimOffsetLerpRatio; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESULTMODULECONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType JIGLNEDJDCC()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESULTMODULECONFIG_JIGLNEDJDCC_OFFSET))(this);
		}

	};
}
