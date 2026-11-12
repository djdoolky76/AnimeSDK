#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define BDKDONNCMHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA38BA0)

inline static constexpr unsigned int BDKDONNCMHH_TypeDefinitionIndex = 44801;

	class BDKDONNCMHH : public ::System::Object
	{
	public:
		::System::Action* DPANHIICMLD; // 0x10
		::UnityEngine::AnimationCurve* HDLKELNBCNL; // 0x18
		::System::Single FAFBLAFJGJD; // 0x20
		::System::Single NKICNCOLGFF; // 0x24
		::System::Single AEFONDFPGEI; // 0x28
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x2C
		::System::Single IEHPFADHJFD; // 0x38
		::UnityEngine::Vector3 EKKNKFAGHLE; // 0x3C
		::System::Single HKOANFBDPCK; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKDONNCMHH_CTOR_OFFSET))(this);
		}

	};
