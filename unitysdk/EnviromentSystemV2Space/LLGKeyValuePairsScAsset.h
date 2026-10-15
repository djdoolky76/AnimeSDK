#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x15655500)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET_HMBGPCGKDKG_OFFSET UNITYSDK_OFFSET(0x156552C0)
#define ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15655140)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LLGKeyValuePairsScAsset_TypeDefinitionIndex = 49190;

	class LLGKeyValuePairsScAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* values; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET_TOSTRING_OFFSET))(this);
		}

		::System::Void HMBGPCGKDKG(::EnviromentSystem::EnviroLocalLightGroupProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroLocalLightGroupProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LLGKEYVALUEPAIRSSCASSET_HMBGPCGKDKG_OFFSET))(this, a1);
		}

	};
}
