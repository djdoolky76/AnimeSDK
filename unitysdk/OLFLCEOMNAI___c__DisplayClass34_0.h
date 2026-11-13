#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDEPICFGMDM;

#define OLFLCEOMNAI___C__DISPLAYCLASS34_0_CTOR_OFFSET UNITYSDK_OFFSET(0x178A4BE0)
#define OLFLCEOMNAI___C__DISPLAYCLASS34_0__GETINSTANTIATEOPERATION_B__0_OFFSET UNITYSDK_OFFSET(0x178A7460)

inline static constexpr unsigned int OLFLCEOMNAI___c__DisplayClass34_0_TypeDefinitionIndex = 85133;

	class OLFLCEOMNAI___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Int32 instanceID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__DISPLAYCLASS34_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetInstantiateOperation_b__0(::EDEPICFGMDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDEPICFGMDM*))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__DISPLAYCLASS34_0__GETINSTANTIATEOPERATION_B__0_OFFSET))(this, a1);
		}

	};
