#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDNECKFHLEM;

#define MDKDPJEFJDG___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A6E10)
#define MDKDPJEFJDG___C__DISPLAYCLASS5_0___HOOK_B__0_OFFSET UNITYSDK_OFFSET(0xB8A7480)

inline static constexpr unsigned int MDKDPJEFJDG___c__DisplayClass5_0_TypeDefinitionIndex = 49822;

	class MDKDPJEFJDG___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::EDNECKFHLEM* tab; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKDPJEFJDG___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void __Hook_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDKDPJEFJDG___C__DISPLAYCLASS5_0___HOOK_B__0_OFFSET))(this, a1);
		}

	};
