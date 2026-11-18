#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MENDDDMEBLE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class HIDBICOECJE_DLNDPJJMMBN;
class LEKHPKOOGIP;
namespace UnityEngine { class GameObject; }

#define HIDBICOECJE_HDFCOGEFJDK_HKAPLLMJMGN_OFFSET UNITYSDK_OFFSET(0x1EEBFA80)
#define HIDBICOECJE_HDFCOGEFJDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEBFA70)

inline static constexpr unsigned int HIDBICOECJE_HDFCOGEFJDK_TypeDefinitionIndex = 95096;

class HIDBICOECJE_HDFCOGEFJDK : public ::System::Object
{
public:
	::HIDBICOECJE_DLNDPJJMMBN* FGBNBFHOKAA; // 0x10
	::MENDDDMEBLE PLJANJNCDOA; // 0x18
	::LEKHPKOOGIP* LHPFMGBDFPN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDBICOECJE_HDFCOGEFJDK__CTOR_OFFSET))(this);
	}

	::System::Void HKAPLLMJMGN(::Foundation::AssetPath PIIPCLCCOIG, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HIDBICOECJE_HDFCOGEFJDK_HKAPLLMJMGN_OFFSET))(this, PIIPCLCCOIG, NJOAJLDJCCJ);
	}
};
