#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCCFELCPKH_HJOJHIGBBKC.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define APCCFELCPKH_BMILOCEDDIE_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA0670)
#define APCCFELCPKH_BMILOCEDDIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BA07D0)
#define APCCFELCPKH_BMILOCEDDIE_EDMMDOLNANO_OFFSET UNITYSDK_OFFSET(0x15BA0AD0)
#define APCCFELCPKH_BMILOCEDDIE_GET_OVERLAYEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x15BA0660)

inline static constexpr unsigned int APCCFELCPKH_BMILOCEDDIE_TypeDefinitionIndex = 60244;

	class APCCFELCPKH_BMILOCEDDIE : public ::APCCFELCPKH_HJOJHIGBBKC
	{
	public:
		::System::String* _OverlayEffectPath_k__BackingField; // 0x20
		::UnityEngine::GameObject* GKNBCPMJHMN; // 0x28
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + APCCFELCPKH_BMILOCEDDIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_OverlayEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_BMILOCEDDIE_GET_OVERLAYEFFECTPATH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_BMILOCEDDIE_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::GameObject* EDMMDOLNANO(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + APCCFELCPKH_BMILOCEDDIE_EDMMDOLNANO_OFFSET))(this, a1);
		}

	};
