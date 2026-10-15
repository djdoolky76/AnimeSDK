#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CJJOKFFBHFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA098A0)

	class CJJOKFFBHFH : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 LPPIHKNHFGF; // 0x10
		::UnityEngine::Quaternion HFOMPEEAPCG; // 0x1C
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint GCJMFBKLGHI; // 0x30
		::RPG::GameCore::FixPoint IBNKNGGMANN; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJOKFFBHFH_CTOR_OFFSET))(this);
		}

	};
