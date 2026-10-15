#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDPHMDDGGGL;
class EDPHMDDGGGL_DCAACLCHDMP;
namespace RPG::GameCore { class GameEntity; }

#define EDPHMDDGGGL___C__DISPLAYCLASS63_0_CTOR_OFFSET UNITYSDK_OFFSET(0x13335DC0)
#define EDPHMDDGGGL___C__DISPLAYCLASS63_0___CREATESTORYCHARACTER_B__0_OFFSET UNITYSDK_OFFSET(0x1334C510)
#define EDPHMDDGGGL___C__DISPLAYCLASS63_0___CREATESTORYCHARACTER_B__1_OFFSET UNITYSDK_OFFSET(0x1334C4E0)
#define EDPHMDDGGGL___C__DISPLAYCLASS63_0___CREATESTORYCHARACTER_B__2_OFFSET UNITYSDK_OFFSET(0x1334C4B0)

	class EDPHMDDGGGL___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::EDPHMDDGGGL_DCAACLCHDMP* character; // 0x10
		::EDPHMDDGGGL* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C__DISPLAYCLASS63_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreateStoryCharacter_b__2(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C__DISPLAYCLASS63_0___CREATESTORYCHARACTER_B__2_OFFSET))(this, a1);
		}

		::System::Void __CreateStoryCharacter_b__1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C__DISPLAYCLASS63_0___CREATESTORYCHARACTER_B__1_OFFSET))(this, a1);
		}

		::System::Void __CreateStoryCharacter_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C__DISPLAYCLASS63_0___CREATESTORYCHARACTER_B__0_OFFSET))(this, a1);
		}

	};
