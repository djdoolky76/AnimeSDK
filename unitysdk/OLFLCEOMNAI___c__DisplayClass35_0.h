#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDEPICFGMDM;
namespace System { class String; }

#define OLFLCEOMNAI___C__DISPLAYCLASS35_0_CTOR_OFFSET UNITYSDK_OFFSET(0x178A5040)
#define OLFLCEOMNAI___C__DISPLAYCLASS35_0__GETINSTANTIATEOPERATION_B__0_OFFSET UNITYSDK_OFFSET(0x178A7480)

inline static constexpr unsigned int OLFLCEOMNAI___c__DisplayClass35_0_TypeDefinitionIndex = 85134;

	class OLFLCEOMNAI___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__DISPLAYCLASS35_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetInstantiateOperation_b__0(::EDEPICFGMDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDEPICFGMDM*))((::PBYTE)hIl2Cpp + OLFLCEOMNAI___C__DISPLAYCLASS35_0__GETINSTANTIATEOPERATION_B__0_OFFSET))(this, a1);
		}

	};
