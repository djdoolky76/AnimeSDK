#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_ZIPLINESUBSYSTEM_TARGET_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x14E62A10)
#define MOLEMOLE_ZIPLINESUBSYSTEM_TARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x14E62B80)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_Target_TypeDefinitionIndex = 92018;

	class ZipLineSubSystem_Target : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::Single>* Distance; // 0x88
		::LJHFMILANJA_1<::System::Object*>* HUDHintPointType; // 0x90
		::LJHFMILANJA_1<::UnityEngine::Vector3>* WorldPosition; // 0x98
		::LJHFMILANJA_1<::System::Single>* ProgressValue; // 0xA0
		::LJHFMILANJA_1<::UnityEngine::Vector3>* Tangent; // 0xA8
		::LJHFMILANJA_1<::System::Boolean>* HasPosition; // 0xB0
		::LJHFMILANJA_1<::System::String*>* TextmapKey; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_TARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_TARGET_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
