#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACAIACCPOGM;
namespace System { class Action; }

#define ACAIACCPOGM___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB776350)
#define ACAIACCPOGM___C__DISPLAYCLASS18_0__TRYRESTOCK_B__0_OFFSET UNITYSDK_OFFSET(0xB776F50)

inline static constexpr unsigned int ACAIACCPOGM___c__DisplayClass18_0_TypeDefinitionIndex = 79935;

	class ACAIACCPOGM___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action* __9__0; // 0x10
		::ACAIACCPOGM* __4__this; // 0x18
		::System::UInt32 deviceID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAIACCPOGM___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void _TryRestock_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAIACCPOGM___C__DISPLAYCLASS18_0__TRYRESTOCK_B__0_OFFSET))(this);
		}

	};
