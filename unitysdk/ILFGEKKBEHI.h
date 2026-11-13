#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENLNFBCDEIO.h"
#include "unitysdk/RPG/Client/Prop/LogisticsRobotState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ILFGEKKBEHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B591E50)

inline static constexpr unsigned int ILFGEKKBEHI_TypeDefinitionIndex = 81717;

	class ILFGEKKBEHI : public ::ENLNFBCDEIO
	{
	public:
		::System::Int32 KCKMILLHIIA; // 0x10
		::UnityEngine::Vector3 LCGNINJHEMI; // 0x14
		::UnityEngine::Quaternion CCAHBOJLPAC; // 0x20
		::RPG::Client::Prop::LogisticsRobotState MEPFOEEGBEA; // 0x30
		::System::Boolean HDFBNKLCAMN; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFGEKKBEHI_CTOR_OFFSET))(this);
		}

	};
