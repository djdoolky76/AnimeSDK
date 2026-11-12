#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JCPHHMANKBM;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_KDJIBNAPKHK_CTOR_OFFSET UNITYSDK_OFFSET(0xDD69440)

namespace RPG::Client
{
	inline static constexpr unsigned int IA_TransformAnim_HoverBehavior_KDJIBNAPKHK_TypeDefinitionIndex = 72821;

	class IA_TransformAnim_HoverBehavior_KDJIBNAPKHK : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DICDJJOJKGF; // 0x10
		::JCPHHMANKBM* CNLHCKELLBE; // 0x18
		::System::Boolean HCNJIBHDLJM; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 KJLPJPHLAGC; // 0x24
		::UnityEngine::Vector3 BCANAGEHIJH; // 0x30
		::UnityEngine::Quaternion IHOKNOKAHNE; // 0x3C
		::UnityEngine::Vector3 CPDBBEMHDGF; // 0x4C
		::UnityEngine::Quaternion PKKHOMMKEHJ; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_KDJIBNAPKHK_CTOR_OFFSET))(this);
		}

	};
}
