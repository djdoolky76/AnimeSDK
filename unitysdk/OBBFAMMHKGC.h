#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SpritePresetRecord; }
namespace UnityEngine { class Component; }

#define OBBFAMMHKGC_CTOR_OFFSET UNITYSDK_OFFSET(0xBD2FD90)
#define OBBFAMMHKGC_DPGCMNFJCOH_OFFSET UNITYSDK_OFFSET(0xBD2FB60)
#define OBBFAMMHKGC_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xBD2F890)

inline static constexpr unsigned int OBBFAMMHKGC_TypeDefinitionIndex = 69029;

	class OBBFAMMHKGC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBFAMMHKGC_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Component* a1, ::RPG::GameCore::SpritePresetRecord* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::RPG::GameCore::SpritePresetRecord*))((::PBYTE)hIl2Cpp + OBBFAMMHKGC_PKADDEPKJFN_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::SpritePresetRecord* DPGCMNFJCOH(::UnityEngine::Component* a1)
		{
			return ((::RPG::GameCore::SpritePresetRecord*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + OBBFAMMHKGC_DPGCMNFJCOH_OFFSET))(this, a1);
		}

	};
