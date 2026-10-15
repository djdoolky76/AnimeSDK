#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JCPHHMANKBM;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_KDJIBNAPKHK_CTOR_OFFSET UNITYSDK_OFFSET(0xD334E90)

namespace RPG::Client
{
	class IA_TransformAnim_HoverBehavior_KDJIBNAPKHK : public ::System::Object
	{
	public:
		::JCPHHMANKBM* CNLHCKELLBE; // 0x10
		::UnityEngine::Transform* DICDJJOJKGF; // 0x18
		::UnityEngine::Quaternion IHOKNOKAHNE; // 0x20
		::UnityEngine::Vector3 BCANAGEHIJH; // 0x30
		::UnityEngine::Quaternion PKKHOMMKEHJ; // 0x3C
		::System::Boolean HCNJIBHDLJM; // 0x4C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 KJLPJPHLAGC; // 0x50
		::UnityEngine::Vector3 CPDBBEMHDGF; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_KDJIBNAPKHK_CTOR_OFFSET))(this);
		}

	};
}
