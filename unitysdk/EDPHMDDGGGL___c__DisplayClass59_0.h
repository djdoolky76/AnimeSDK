#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDPHMDDGGGL;
namespace RPG::GameCore { class PerformanceDynamicLoadCharacter; }

#define EDPHMDDGGGL___C__DISPLAYCLASS59_0_CTOR_OFFSET UNITYSDK_OFFSET(0x147E6640)
#define EDPHMDDGGGL___C__DISPLAYCLASS59_0___ONDYNAMICLOADSTORYCHARACTER_B__0_OFFSET UNITYSDK_OFFSET(0x147E6650)

inline static constexpr unsigned int EDPHMDDGGGL___c__DisplayClass59_0_TypeDefinitionIndex = 62101;

	class EDPHMDDGGGL___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::PerformanceDynamicLoadCharacter* param; // 0x10
		::EDPHMDDGGGL* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C__DISPLAYCLASS59_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnDynamicLoadStoryCharacter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C__DISPLAYCLASS59_0___ONDYNAMICLOADSTORYCHARACTER_B__0_OFFSET))(this);
		}

	};
