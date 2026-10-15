#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOAIMAGDCOH;
class KOAIMAGDCOH_MPBMCPMMMHH;
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define KOAIMAGDCOH___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB58E340)
#define KOAIMAGDCOH___C__DISPLAYCLASS25_0___LOADSCENETVTEXTURE_B__0_OFFSET UNITYSDK_OFFSET(0xB58F400)

inline static constexpr unsigned int KOAIMAGDCOH___c__DisplayClass25_0_TypeDefinitionIndex = 68808;

	class KOAIMAGDCOH___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::KOAIMAGDCOH* __4__this; // 0x10
		::KOAIMAGDCOH_MPBMCPMMMHH* slice; // 0x18
		::System::String* asset; // 0x20
		::System::Boolean callbackInvoked; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::System::Void __LoadSceneTVTexture_b__0(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + KOAIMAGDCOH___C__DISPLAYCLASS25_0___LOADSCENETVTEXTURE_B__0_OFFSET))(this, a1);
		}

	};
