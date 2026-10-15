#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBKGNHKJOPJ;
namespace RPG::Client { class UIController; }

#define FBKGNHKJOPJ___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x156A2950)
#define FBKGNHKJOPJ___C__DISPLAYCLASS9_0___SHOWLAST_B__1_OFFSET UNITYSDK_OFFSET(0x156A2B10)

inline static constexpr unsigned int FBKGNHKJOPJ___c__DisplayClass9_0_TypeDefinitionIndex = 73045;

	class FBKGNHKJOPJ___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::FBKGNHKJOPJ* __4__this; // 0x10
		::RPG::Client::UIController* currentTop; // 0x18
		::System::UInt32 blockUID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void __ShowLast_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ___C__DISPLAYCLASS9_0___SHOWLAST_B__1_OFFSET))(this);
		}

	};
