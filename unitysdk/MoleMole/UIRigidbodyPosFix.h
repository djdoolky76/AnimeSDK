#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIRIGIDBODYPOSFIX_CDGBOJGGNEJ_OFFSET UNITYSDK_OFFSET(0x14CC5F50)
#define MOLEMOLE_UIRIGIDBODYPOSFIX_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x14CC5D70)
#define MOLEMOLE_UIRIGIDBODYPOSFIX__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC6110)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbodyPosFix_TypeDefinitionIndex = 76741;

	class UIRigidbodyPosFix : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Center; // 0x18
		::System::Single MaxRadius; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Rigidbody2D* PMBOGIPHJHB; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYPOSFIX__CTOR_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYPOSFIX_FIXEDUPDATE_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* CDGBOJGGNEJ()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYPOSFIX_CDGBOJGGNEJ_OFFSET))(this);
		}
	};
}
