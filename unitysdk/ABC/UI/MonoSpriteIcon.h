#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/E865F6F8B8B44C1E.h"

class E7AD2F6CF872AFB3;
namespace UnityEngine::UI { class Image; }

#define ABC_UI_MONOSPRITEICON_A8C42C71DEC8E2C2_OFFSET UNITYSDK_OFFSET(0x20A7510)
#define ABC_UI_MONOSPRITEICON_AE847B321F8253A1_OFFSET UNITYSDK_OFFSET(0x20A7570)
#define ABC_UI_MONOSPRITEICON_F457DC860840DD90_OFFSET UNITYSDK_OFFSET(0x20A75E0)
#define ABC_UI_MONOSPRITEICON__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoSpriteIcon_TypeDefinitionIndex = 8624;

	class MonoSpriteIcon : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* ImageIcon; // 0x20
		::UnityEngine::UI::Image* ImageRarity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSPRITEICON__CTOR_OFFSET))(this);
		}

		::System::Void F457DC860840DD90(::E7AD2F6CF872AFB3* A9866E99671A34A0)
		{
			return ((::System::Void(*)(::PVOID, ::E7AD2F6CF872AFB3*))((::PBYTE)hIl2Cpp + ABC_UI_MONOSPRITEICON_F457DC860840DD90_OFFSET))(this, A9866E99671A34A0);
		}

		::E865F6F8B8B44C1E AE847B321F8253A1(::System::UInt32 A4484E5E940705B5)
		{
			return ((::E865F6F8B8B44C1E(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABC_UI_MONOSPRITEICON_AE847B321F8253A1_OFFSET))(this, A4484E5E940705B5);
		}

		::E865F6F8B8B44C1E A8C42C71DEC8E2C2()
		{
			return ((::E865F6F8B8B44C1E(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOSPRITEICON_A8C42C71DEC8E2C2_OFFSET))(this);
		}
	};
}
