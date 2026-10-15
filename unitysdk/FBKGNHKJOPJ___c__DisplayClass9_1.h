#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { class Object; }

#define FBKGNHKJOPJ___C__DISPLAYCLASS9_1_CTOR_OFFSET UNITYSDK_OFFSET(0x15696B00)
#define FBKGNHKJOPJ___C__DISPLAYCLASS9_1___SHOWLAST_B__2_OFFSET UNITYSDK_OFFSET(0x15697390)

inline static constexpr unsigned int FBKGNHKJOPJ___c__DisplayClass9_1_TypeDefinitionIndex = 73045;

	template <typename T>
	class FBKGNHKJOPJ___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::Client::UIController* controller; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ___C__DISPLAYCLASS9_1_CTOR_OFFSET))(this);
		}

		::System::Void __ShowLast_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ___C__DISPLAYCLASS9_1___SHOWLAST_B__2_OFFSET))(this);
		}

	};
