#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AODLAALCCNF;
class FOMDMAGLLNI;

#define AODLAALCCNF___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1589C750)
#define AODLAALCCNF___C__DISPLAYCLASS21_0__CHANGEPLAN_B__0_OFFSET UNITYSDK_OFFSET(0x1589C760)

inline static constexpr unsigned int AODLAALCCNF___c__DisplayClass21_0_TypeDefinitionIndex = 81474;

	class AODLAALCCNF___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::FOMDMAGLLNI* plan; // 0x10
		::AODLAALCCNF* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODLAALCCNF___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Void _ChangePlan_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODLAALCCNF___C__DISPLAYCLASS21_0__CHANGEPLAN_B__0_OFFSET))(this);
		}

	};
