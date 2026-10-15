#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADIMJPJBBFN;
class GAHPNAEGACM;

#define ADIMJPJBBFN___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB140190)
#define ADIMJPJBBFN___C__DISPLAYCLASS11_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xB140F60)

inline static constexpr unsigned int ADIMJPJBBFN___c__DisplayClass11_0_TypeDefinitionIndex = 72085;

	class ADIMJPJBBFN___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::GAHPNAEGACM* detail; // 0x10
		::ADIMJPJBBFN* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIMJPJBBFN___C__DISPLAYCLASS11_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
