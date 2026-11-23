#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define CRIWARE_CRIMONOBEHAVIOUR_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x2AC30D0)
#define CRIWARE_CRIMONOBEHAVIOUR_AFC2AD1BAAAA6667_OFFSET UNITYSDK_OFFSET(0x1DC0A40)
#define CRIWARE_CRIMONOBEHAVIOUR_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2ABA250)
#define CRIWARE_CRIMONOBEHAVIOUR_EBFE20DB33DE5FB2_OFFSET UNITYSDK_OFFSET(0x1DC0A10)
#define CRIWARE_CRIMONOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x2ABA320)

namespace CriWare
{
	inline static constexpr unsigned int CriMonoBehaviour_TypeDefinitionIndex = 19224;

	class CriMonoBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Guid B1C0A9A194BB6C87; // 0x20

		::System::Guid EBFE20DB33DE5FB2()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOUR_EBFE20DB33DE5FB2_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOUR_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void AFC2AD1BAAAA6667(::System::Guid E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOUR_AFC2AD1BAAAA6667_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOUR_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
