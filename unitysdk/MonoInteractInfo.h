#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class KLOGCCEEFIA;
class OJDOCJLOJGG;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MONOINTERACTINFO_GET_INTERACTSINFO_OFFSET UNITYSDK_OFFSET(0x11396110)
#define MONOINTERACTINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x11396080)
#define MONOINTERACTINFO_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x11396100)
#define MONOINTERACTINFO_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x113960E0)
#define MONOINTERACTINFO_SETINTERACTCONFIG_OFFSET UNITYSDK_OFFSET(0x11396120)
#define MONOINTERACTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11396600)

inline static constexpr unsigned int MonoInteractInfo_TypeDefinitionIndex = 87668;

class MonoInteractInfo : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* _scale; // 0x18
	::OJDOCJLOJGG* _interactConfig; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KLOGCCEEFIA*>* _interactsInfo; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO__CTOR_OFFSET))(this);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_GET_NAME_OFFSET))(this);
	}

	::System::Int32 get_Shape()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_GET_SHAPE_OFFSET))(this);
	}

	::System::String* get_Scale()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_GET_SCALE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KLOGCCEEFIA*>* get_InteractsInfo()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::KLOGCCEEFIA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_GET_INTERACTSINFO_OFFSET))(this);
	}

	::System::Void SetInteractConfig(::MoleMole::Battle::Entity* owner, ::OJDOCJLOJGG* interactConfig)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::OJDOCJLOJGG*))((::PBYTE)hIl2Cpp + MONOINTERACTINFO_SETINTERACTCONFIG_OFFSET))(this, owner, interactConfig);
	}
};
