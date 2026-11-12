#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define HKEBAHNJHCD_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x16C92800)
#define HKEBAHNJHCD_CTOR_OFFSET UNITYSDK_OFFSET(0x16C92890)
#define HKEBAHNJHCD_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x16C92760)

inline static constexpr unsigned int HKEBAHNJHCD_TypeDefinitionIndex = 80036;

	class HKEBAHNJHCD : public ::System::Object
	{
	public:
		::System::String* KAMLBEEKAEJ; // 0x10
		::UnityEngine::Transform* GOGCKONMFBM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEBAHNJHCD_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEBAHNJHCD_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEBAHNJHCD_CECMCADBMDE_OFFSET))(this);
		}

	};
