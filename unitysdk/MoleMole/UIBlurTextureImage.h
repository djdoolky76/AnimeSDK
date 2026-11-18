#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBlurBaseImage.h"

namespace UnityEngine { class Texture; }

#define MOLEMOLE_UIBLURTEXTUREIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x17FF9C40)
#define MOLEMOLE_UIBLURTEXTUREIMAGE_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x17FFA060)
#define MOLEMOLE_UIBLURTEXTUREIMAGE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x17FF9CE0)
#define MOLEMOLE_UIBLURTEXTUREIMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FFA020)
#define MOLEMOLE_UIBLURTEXTUREIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF9F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlurTextureImage_TypeDefinitionIndex = 78256;

	class UIBlurTextureImage : public ::MoleMole::UIBlurBaseImage
	{
	public:
		static ::System::Int32* StaticGet_FNCOEANIFEL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIBlurTextureImage_TypeDefinitionIndex)->GetStaticField(0x10EC0);
		}
		// static const ::System::String* matPath; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURTEXTUREIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURTEXTUREIMAGE__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURTEXTUREIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void SetTexture(::UnityEngine::Texture* GLBPBKDPCBD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURTEXTUREIMAGE_SETTEXTURE_OFFSET))(this, GLBPBKDPCBD);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLURTEXTUREIMAGE_GPGLNOBDBGJ_OFFSET))(this);
		}
	};
}
