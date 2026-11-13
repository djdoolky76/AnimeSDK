#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define BDKDONNCMHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B44F0)

inline static constexpr unsigned int BDKDONNCMHH_TypeDefinitionIndex = 44801;

	class BDKDONNCMHH : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* HDLKELNBCNL; // 0x10
		::System::Action* DPANHIICMLD; // 0x18
		::UnityEngine::Vector3 EKKNKFAGHLE; // 0x20
		::System::Single NKICNCOLGFF; // 0x2C
		::System::Single IEHPFADHJFD; // 0x30
		::System::Single FAFBLAFJGJD; // 0x34
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x38
		::System::Single AEFONDFPGEI; // 0x44
		::System::Single HKOANFBDPCK; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKDONNCMHH_CTOR_OFFSET))(this);
		}

	};
