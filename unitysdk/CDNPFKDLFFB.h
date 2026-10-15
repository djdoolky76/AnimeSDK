#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CDNPFKDLFFB_BHLAFIJIAHN_OFFSET UNITYSDK_OFFSET(0xC76BE10)
#define CDNPFKDLFFB_CTOR_OFFSET UNITYSDK_OFFSET(0xC76B8F0)
#define CDNPFKDLFFB_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xC76BD20)
#define CDNPFKDLFFB_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xC76BA00)
#define CDNPFKDLFFB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC76BBD0)

inline static constexpr unsigned int CDNPFKDLFFB_TypeDefinitionIndex = 70937;

	class CDNPFKDLFFB : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* KBPEHEMHAGP; // 0x10
		::System::Single KIPAGNCANAJ; // 0x18
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CDNPFKDLFFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JDAGFHEPMHF(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CDNPFKDLFFB_JDAGFHEPMHF_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDNPFKDLFFB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPFKDLFFB_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void BHLAFIJIAHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPFKDLFFB_BHLAFIJIAHN_OFFSET))(this);
		}

	};
