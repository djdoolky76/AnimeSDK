#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CHALEFNMKHD;
class JLMHPEHICNM;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define EDHPIGIAOLE_LIJMHDLPAMF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1331E8E0)
#define EDHPIGIAOLE_LIJMHDLPAMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1331E990)

	class EDHPIGIAOLE_LIJMHDLPAMF : public ::System::Object
	{
	public:
		::JLMHPEHICNM* BGODALLNIAK; // 0x10
		::CHALEFNMKHD* AJGHKBPIEKC; // 0x18
		::UnityEngine::Transform* MCLLALGABAB; // 0x20
		::UnityEngine::AnimationCurve* ADIKANHDFGG; // 0x28
		::System::Boolean DPJCMAKDGCF; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single LCEMECHAMCM; // 0x34
		::UnityEngine::Vector3 LDDBFJDDNJO; // 0x38
		::System::Single IEHPFADHJFD; // 0x44
		::UnityEngine::Quaternion HIINJOIAHIM; // 0x48
		::UnityEngine::Vector3 PLLGEEEBHPO; // 0x58
		::UnityEngine::Quaternion KHOPAMJJINE; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_LIJMHDLPAMF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_LIJMHDLPAMF_CLEAR_OFFSET))(this);
		}

	};
