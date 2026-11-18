#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class HIDBICOECJE;
class LEKHPKOOGIP;
class OHKBMKNIBHA;
namespace UnityEngine { class GameObject; }

#define HIDBICOECJE_FLBDHENJJGE_PPJHGEEBGKA_OFFSET UNITYSDK_OFFSET(0x1EFAC0D0)
#define HIDBICOECJE_FLBDHENJJGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAC0C0)

inline static constexpr unsigned int HIDBICOECJE_FLBDHENJJGE_TypeDefinitionIndex = 95098;

class HIDBICOECJE_FLBDHENJJGE : public ::System::Object
{
public:
	::HIDBICOECJE* KLHPEBKNIFB; // 0x10
	::OHKBMKNIBHA* KECKGDFIALJ; // 0x18
	::LEKHPKOOGIP* LHPFMGBDFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDBICOECJE_FLBDHENJJGE__CTOR_OFFSET))(this);
	}

	::System::Void PPJHGEEBGKA(::Foundation::AssetPath PIIPCLCCOIG, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HIDBICOECJE_FLBDHENJJGE_PPJHGEEBGKA_OFFSET))(this, PIIPCLCCOIG, NJOAJLDJCCJ);
	}
};
