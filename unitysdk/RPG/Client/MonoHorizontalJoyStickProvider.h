#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoJoyStickProvider.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER_CTOR_OFFSET UNITYSDK_OFFSET(0xE288220)
#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__INDIRECTIONANGLERANGE_OFFSET UNITYSDK_OFFSET(0xE287DC0)
#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__SETHINTTRANSANGLE_OFFSET UNITYSDK_OFFSET(0xE287F00)
#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__TRYDISABLEPRESSHINTIMAGE_OFFSET UNITYSDK_OFFSET(0xE287FF0)
#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__TRYENABLEPRESSHINTIMAGE_OFFSET UNITYSDK_OFFSET(0xE287E30)
#define RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__UPDATEPRESSDRAGHINTVIEW_OFFSET UNITYSDK_OFFSET(0xE287C70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoHorizontalJoyStickProvider_TypeDefinitionIndex = 62700;

	class MonoHorizontalJoyStickProvider : public ::RPG::Client::MonoJoyStickProvider
	{
	public:
		::UnityEngine::Vector2 _RightAngleRange; // 0xC0
		::UnityEngine::Vector2 _LeftAngleRange; // 0xC8
		// static const ::System::Object _RightUIAngle; // 0x0
		// static const ::System::Object _LeftUIAngle; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER_CTOR_OFFSET))(this);
		}

		::System::Void _UpdatePressDragHintView(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__UPDATEPRESSDRAGHINTVIEW_OFFSET))(this, a1);
		}

		::System::Boolean _InDirectionAngleRange(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__INDIRECTIONANGLERANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _SetHintTransAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__SETHINTTRANSANGLE_OFFSET))(this, a1);
		}

		::System::Void _TryEnablePressHintImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__TRYENABLEPRESSHINTIMAGE_OFFSET))(this);
		}

		::System::Void _TryDisablePressHintImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHORIZONTALJOYSTICKPROVIDER__TRYDISABLEPRESSHINTIMAGE_OFFSET))(this);
		}

	};
}
