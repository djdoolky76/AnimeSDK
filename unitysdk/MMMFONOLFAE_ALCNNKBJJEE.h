#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RootMotion::FinalIK { class RotationLimit; }
namespace UnityEngine { class Transform; }

#define MMMFONOLFAE_ALCNNKBJJEE_CTOR_OFFSET UNITYSDK_OFFSET(0x18902620)

inline static constexpr unsigned int MMMFONOLFAE_ALCNNKBJJEE_TypeDefinitionIndex = 70393;

	class MMMFONOLFAE_ALCNNKBJJEE : public ::System::Object
	{
	public:
		::UnityEngine::Transform* EEHPALPMDPG; // 0x10
		::RootMotion::FinalIK::RotationLimit* JMJOBHDKNBC; // 0x18
		::System::Single APAKCBFMCAB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMFONOLFAE_ALCNNKBJJEE_CTOR_OFFSET))(this);
		}

	};
