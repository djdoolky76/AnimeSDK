#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCCFELCPKH_HJOJHIGBBKC.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define APCCFELCPKH_BMILOCEDDIE_CTOR_OFFSET UNITYSDK_OFFSET(0x16A01BD0)
#define APCCFELCPKH_BMILOCEDDIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A01D30)
#define APCCFELCPKH_BMILOCEDDIE_EDMMDOLNANO_OFFSET UNITYSDK_OFFSET(0x16A02030)
#define APCCFELCPKH_BMILOCEDDIE_GET_OVERLAYEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x16A01BC0)

inline static constexpr unsigned int APCCFELCPKH_BMILOCEDDIE_TypeDefinitionIndex = 61528;

	class APCCFELCPKH_BMILOCEDDIE : public ::APCCFELCPKH_HJOJHIGBBKC
	{
	public:
		::UnityEngine::GameObject* GKNBCPMJHMN; // 0x20
		::System::String* _OverlayEffectPath_k__BackingField; // 0x28
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
