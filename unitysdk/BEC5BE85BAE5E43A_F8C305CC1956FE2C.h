#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDC595893C6EE433/A87DD8C5FEA13C30.h"
#include "unitysdk/BDC595893C6EE433/B7B97596DE3D3FDD.h"
#include "unitysdk/BDC595893C6EE433/EBEEDB1E8980A908.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define BEC5BE85BAE5E43A_F8C305CC1956FE2C__CTOR_OFFSET UNITYSDK_OFFSET(0x43B7720)

inline static constexpr unsigned int BEC5BE85BAE5E43A_F8C305CC1956FE2C_TypeDefinitionIndex = 18583;

class BEC5BE85BAE5E43A_F8C305CC1956FE2C : public ::System::Object
{
public:
	::UnityEngine::Material* B7838973E91944C5; // 0x10
	::UnityEngine::Material* FECB9986FD1768AB; // 0x18
	::System::Int32 AD764A56E552E037; // 0x20
	::System::Int32 FE885DFC5A78C3C1; // 0x24
	::BDC595893C6EE433::B7B97596DE3D3FDD ED5241405DFD3C7B; // 0x28
	::BDC595893C6EE433::EBEEDB1E8980A908 F820A40AA0339520; // 0x2C
	::System::Int32 E48CAEFBCF6BFB7C; // 0x30
	::System::Int32 B722E1F7CB88FA4F; // 0x34
	::System::Boolean B894C80A356F8814; // 0x38
	::System::Byte _padding0[0x3];
	::BDC595893C6EE433::A87DD8C5FEA13C30 E5C510DF132E1EB7; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEC5BE85BAE5E43A_F8C305CC1956FE2C__CTOR_OFFSET))(this);
	}
};
