#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENLNFBCDEIO.h"
#include "unitysdk/RPG/Client/Prop/LogisticsRobotState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ILFGEKKBEHI_CTOR_OFFSET UNITYSDK_OFFSET(0x164B02C0)

	class ILFGEKKBEHI : public ::ENLNFBCDEIO
	{
	public:
		::RPG::Client::Prop::LogisticsRobotState MEPFOEEGBEA; // 0x10
		::System::Boolean HDFBNKLCAMN; // 0x14
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion CCAHBOJLPAC; // 0x18
		::System::Int32 KCKMILLHIIA; // 0x28
		::UnityEngine::Vector3 LCGNINJHEMI; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFGEKKBEHI_CTOR_OFFSET))(this);
		}

	};
