#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NMDKKBECDMA.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_MAINCITYPHOTOPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x130E28D0)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityPhotoPopContext_TypeDefinitionIndex = 81628;

	class MainCityPhotoPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::String*>* shareBtnClickCallback; // 0x28
		::System::String* desc1; // 0x30
		::System::String* desc2; // 0x38
		::UnityEngine::RenderTexture* PhotoTex; // 0x40
		::System::Int32 shareSourceType; // 0x48
		::NMDKKBECDMA photoSourceType; // 0x4C
		::System::Boolean IsCloseUIWithBlackCurtain; // 0x50

		::System::Void _ctor(::UnityEngine::RenderTexture* tex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYPHOTOPOPCONTEXT__CTOR_OFFSET))(this, tex);
		}
	};
}
