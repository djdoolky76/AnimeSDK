#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/F8CB640FFC44F34B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Texture; }

#define F628B53C970A337A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F628B53C970A337A_TypeDefinitionIndex = 16495;

class F628B53C970A337A : public ::System::Object
{
public:
	::System::Boolean E626D3330F4185D3; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 BF7646B43BCFCBDC; // 0x14
	::UnityEngine::Vector3 EB211B01816ACA79; // 0x20
	::UnityEngine::Quaternion A0556B8B541B6D55; // 0x2C
	::UnityEngine::Vector3 F54AF627638DE3C9; // 0x3C
	::System::Boolean FEACFDA20959C477; // 0x48
	::System::Byte _padding1[0x3];
	::System::Single B349F777CB7A9E95; // 0x4C
	::UnityEngine::Vector3 F7783E0DD6017D8D; // 0x50
	::UnityEngine::Vector3 BAC8E2F0A6A25645; // 0x5C
	::UnityEngine::Texture* E2F69B1AC05DF698; // 0x68
	::B88870E9FB4B8C1A::F8CB640FFC44F34B EE1F62476C39C78A; // 0x70
	::System::Int32 F3D0C722DC7973F3; // 0x74
	::UnityEngine::B3A7F113FE1DE383 BB64C3C370C6282A; // 0x78
	::UnityEngine::E8984F4E44AE20E5 B9AF9B101F498252; // 0x90
	::System::Single B2C4425E313C9883; // 0xA0
	::System::Boolean B9D43E8FB9EC7C16; // 0xA4
	::System::Byte _padding2[0x3];
	::UnityEngine::E8984F4E44AE20E5 E83B782007DA4356; // 0xA8
	::UnityEngine::E8984F4E44AE20E5 BEEE0916BD18CC58; // 0xB8
	::System::Single FAE2D6EB44CD4E55; // 0xC8
	::System::Boolean A587D2EB226701BA; // 0xCC
	::System::Byte _padding3[0x3];
	::System::Single FB50310DAC02886D; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F628B53C970A337A__CTOR_OFFSET))(this);
	}
};
