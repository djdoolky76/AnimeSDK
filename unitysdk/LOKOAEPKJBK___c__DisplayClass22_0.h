#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class StencilDelegate; }
namespace UnityEngine { class Object; }

#define LOKOAEPKJBK___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB803800)
#define LOKOAEPKJBK___C__DISPLAYCLASS22_0___CREATESTENCILDELEGATE_B__0_OFFSET UNITYSDK_OFFSET(0xB804230)

inline static constexpr unsigned int LOKOAEPKJBK___c__DisplayClass22_0_TypeDefinitionIndex = 49076;

	class LOKOAEPKJBK___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::CustomRP::StencilDelegate* stencil; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreateStencilDelegate_b__0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LOKOAEPKJBK___C__DISPLAYCLASS22_0___CREATESTENCILDELEGATE_B__0_OFFSET))(this, a1);
		}

	};
