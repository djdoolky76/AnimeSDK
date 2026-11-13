#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CHALEFNMKHD;
class JLMHPEHICNM;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define EDHPIGIAOLE_LIJMHDLPAMF_CLEAR_OFFSET UNITYSDK_OFFSET(0x186C25B0)
#define EDHPIGIAOLE_LIJMHDLPAMF_CTOR_OFFSET UNITYSDK_OFFSET(0x186C2660)

inline static constexpr unsigned int EDHPIGIAOLE_LIJMHDLPAMF_TypeDefinitionIndex = 58634;

	class EDHPIGIAOLE_LIJMHDLPAMF : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* ADIKANHDFGG; // 0x10
		::JLMHPEHICNM* BGODALLNIAK; // 0x18
		::UnityEngine::Transform* MCLLALGABAB; // 0x20
		::CHALEFNMKHD* AJGHKBPIEKC; // 0x28
		::UnityEngine::Quaternion KHOPAMJJINE; // 0x30
		::UnityEngine::Vector3 PLLGEEEBHPO; // 0x40
		::System::Single IEHPFADHJFD; // 0x4C
		::UnityEngine::Vector3 LDDBFJDDNJO; // 0x50
		::UnityEngine::Quaternion HIINJOIAHIM; // 0x5C
		::System::Single LCEMECHAMCM; // 0x6C
		::System::Boolean DPJCMAKDGCF; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_LIJMHDLPAMF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_LIJMHDLPAMF_CLEAR_OFFSET))(this);
		}

	};
