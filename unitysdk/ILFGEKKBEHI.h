#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENLNFBCDEIO.h"
#include "unitysdk/RPG/Client/Prop/LogisticsRobotState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ILFGEKKBEHI_CTOR_OFFSET UNITYSDK_OFFSET(0x164A23A0)

inline static constexpr unsigned int ILFGEKKBEHI_TypeDefinitionIndex = 78941;

	class ILFGEKKBEHI : public ::ENLNFBCDEIO
	{
	public:
		::UnityEngine::Vector3 LCGNINJHEMI; // 0x10
		::System::Int32 KCKMILLHIIA; // 0x1C
		::UnityEngine::Quaternion CCAHBOJLPAC; // 0x20
		::System::Boolean HDFBNKLCAMN; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::Client::Prop::LogisticsRobotState MEPFOEEGBEA; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFGEKKBEHI_CTOR_OFFSET))(this);
		}

	};
