#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Cinemachine { class CinemachineTransposer; }

#define IIMEBHGNNKP_GDINHMDGEEA_CTOR_OFFSET UNITYSDK_OFFSET(0x17415E40)

inline static constexpr unsigned int IIMEBHGNNKP_GDINHMDGEEA_TypeDefinitionIndex = 81542;

	class IIMEBHGNNKP_GDINHMDGEEA : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineTransposer* ENDNGFJNBHN; // 0x10
		::System::Single IEHPFADHJFD; // 0x18
		::System::Single PMHMEGEJDGP; // 0x1C
		::UnityEngine::Vector3 NHFOKNJCFEG; // 0x20
		::UnityEngine::Vector3 HPNHODGPGLI; // 0x2C
		::System::Boolean IOBJFEJFLJP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMEBHGNNKP_GDINHMDGEEA_CTOR_OFFSET))(this);
		}

	};
