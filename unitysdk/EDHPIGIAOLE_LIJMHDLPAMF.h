#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CHALEFNMKHD;
class JLMHPEHICNM;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define EDHPIGIAOLE_LIJMHDLPAMF_CLEAR_OFFSET UNITYSDK_OFFSET(0x13319C10)
#define EDHPIGIAOLE_LIJMHDLPAMF_CTOR_OFFSET UNITYSDK_OFFSET(0x13319CB0)

inline static constexpr unsigned int EDHPIGIAOLE_LIJMHDLPAMF_TypeDefinitionIndex = 57406;

	class EDHPIGIAOLE_LIJMHDLPAMF : public ::System::Object
	{
	public:
		::UnityEngine::Transform* MCLLALGABAB; // 0x10
		::UnityEngine::AnimationCurve* ADIKANHDFGG; // 0x18
		::JLMHPEHICNM* BGODALLNIAK; // 0x20
		::CHALEFNMKHD* AJGHKBPIEKC; // 0x28
		::UnityEngine::Quaternion KHOPAMJJINE; // 0x30
		::UnityEngine::Quaternion HIINJOIAHIM; // 0x40
		::UnityEngine::Vector3 PLLGEEEBHPO; // 0x50
		::System::Boolean DPJCMAKDGCF; // 0x5C
		::System::Byte _padding0[0x3];
		::System::Single LCEMECHAMCM; // 0x60
		::System::Single IEHPFADHJFD; // 0x64
		::UnityEngine::Vector3 LDDBFJDDNJO; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_LIJMHDLPAMF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_LIJMHDLPAMF_CLEAR_OFFSET))(this);
		}

	};
