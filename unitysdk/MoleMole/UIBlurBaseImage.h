#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/UI/Image.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIBLURBASEIMAGE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x19192D20)
#define MOLEMOLE_UIBLURBASEIMAGE_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x19192D10)
#define MOLEMOLE_UIBLURBASEIMAGE_NFICKOJPHFP_OFFSET UNITYSDK_OFFSET(0x19192670)
#define MOLEMOLE_UIBLURBASEIMAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19192310)
#define MOLEMOLE_UIBLURBASEIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x191925D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlurBaseImage_TypeDefinitionIndex = 51756;

	class UIBlurBaseImage : public ::UnityEngine::UI::Image
	{
	public:
		::Foundation::AssetRequestHandle NFLADMFEAOD; // 0x140
		::UnityEngine::Material* _material; // 0x160
		::System::Boolean _NeedUnloadMat; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void NFICKOJPHFP(::System::String* DPMDHOFOMIE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE_NFICKOJPHFP_OFFSET))(this, DPMDHOFOMIE);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE_IFHNMAGGFAE_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC(::System::String* DPMDHOFOMIE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURBASEIMAGE_BBOMJDBNHIC_OFFSET))(this, DPMDHOFOMIE);
		}
	};
}
