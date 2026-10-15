#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMGONAELHIE;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define OMGONAELHIE___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF29F20)
#define OMGONAELHIE___C__DISPLAYCLASS10_0___DICEAPPEAR_B__1_OFFSET UNITYSDK_OFFSET(0xBF2B3D0)

inline static constexpr unsigned int OMGONAELHIE___c__DisplayClass10_0_TypeDefinitionIndex = 58455;

	class OMGONAELHIE___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::OMGONAELHIE* __4__this; // 0x10
		::System::String* texturePath; // 0x18
		::System::UInt32 slotID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGONAELHIE___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __DiceAppear_b__1(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + OMGONAELHIE___C__DISPLAYCLASS10_0___DICEAPPEAR_B__1_OFFSET))(this, a1);
		}

	};
