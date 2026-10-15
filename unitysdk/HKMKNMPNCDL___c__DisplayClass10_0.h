#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAHPNAEGACM;
class HKMKNMPNCDL;

#define HKMKNMPNCDL___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15D42B90)
#define HKMKNMPNCDL___C__DISPLAYCLASS10_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x15D43900)

inline static constexpr unsigned int HKMKNMPNCDL___c__DisplayClass10_0_TypeDefinitionIndex = 71285;

	class HKMKNMPNCDL___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::HKMKNMPNCDL* __4__this; // 0x10
		::GAHPNAEGACM* detail; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL___C__DISPLAYCLASS10_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
