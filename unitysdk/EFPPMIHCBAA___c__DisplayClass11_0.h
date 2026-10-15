#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFPPMIHCBAA;
namespace System { class Action; }

#define EFPPMIHCBAA___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBD8D50)
#define EFPPMIHCBAA___C__DISPLAYCLASS11_0__GETACTION_B__0_OFFSET UNITYSDK_OFFSET(0x1EBD9090)

inline static constexpr unsigned int EFPPMIHCBAA___c__DisplayClass11_0_TypeDefinitionIndex = 35299;

	class EFPPMIHCBAA___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::EFPPMIHCBAA* __4__this; // 0x10
		::System::Action* action; // 0x18
		::System::Int32 id; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPPMIHCBAA___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetAction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPPMIHCBAA___C__DISPLAYCLASS11_0__GETACTION_B__0_OFFSET))(this);
		}

	};
