#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAHPNAEGACM;
class IBENMKNIKHP;

#define IBENMKNIKHP___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0x188ABDA0)
#define IBENMKNIKHP___C__DISPLAYCLASS19_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x188ADDC0)

inline static constexpr unsigned int IBENMKNIKHP___c__DisplayClass19_0_TypeDefinitionIndex = 74312;

	class IBENMKNIKHP___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::GAHPNAEGACM* detail; // 0x10
		::IBENMKNIKHP* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBENMKNIKHP___C__DISPLAYCLASS19_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
