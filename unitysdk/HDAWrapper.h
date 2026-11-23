#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAssetRoot; }
namespace System { class String; }
namespace TA::Houdini { class HDAPreset; }

#define HDAWRAPPER_B6A94EDC3BE4DAD4_OFFSET UNITYSDK_OFFSET(0x28E1350)
#define HDAWRAPPER_E9B00B992EE9D221_OFFSET UNITYSDK_OFFSET(0x28E1300)
#define HDAWRAPPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x28E12A0)
#define HDAWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int HDAWrapper_TypeDefinitionIndex = 16393;

class HDAWrapper : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::String** StaticGet_AB028F4E02BFE472()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(HDAWrapper_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::TA::Houdini::HDAPreset* Preset; // 0x20

	::HoudiniEngineUnity::HEU_HoudiniAssetRoot* E9B00B992EE9D221()
	{
		return ((::HoudiniEngineUnity::HEU_HoudiniAssetRoot*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAWRAPPER_E9B00B992EE9D221_OFFSET))(this);
	}

	::System::String* B6A94EDC3BE4DAD4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAWRAPPER_B6A94EDC3BE4DAD4_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDAWRAPPER__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAWRAPPER__CTOR_OFFSET))(this);
	}
};
