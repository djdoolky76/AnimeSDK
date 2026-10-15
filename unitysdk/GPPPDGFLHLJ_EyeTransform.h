#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NpcBodyEyeConfig_EyeTransform; }
namespace UnityEngine { class Transform; }

#define GPPPDGFLHLJ_EYETRANSFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x15B6A0B0)
#define GPPPDGFLHLJ_EYETRANSFORM_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x15B6A0C0)

	class GPPPDGFLHLJ_EyeTransform : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::RPG::Client::NpcBodyEyeConfig_EyeTransform* config; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPPDGFLHLJ_EYETRANSFORM_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPPPDGFLHLJ_EYETRANSFORM_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
