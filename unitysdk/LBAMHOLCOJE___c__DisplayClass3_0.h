#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBAMHOLCOJE_BIHKBFPBHEJ;
namespace System { class String; }

#define LBAMHOLCOJE___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E59E0)
#define LBAMHOLCOJE___C__DISPLAYCLASS3_0__ADDDYNAMICTARGETALIASLIST_B__0_OFFSET UNITYSDK_OFFSET(0xB5E6950)

inline static constexpr unsigned int LBAMHOLCOJE___c__DisplayClass3_0_TypeDefinitionIndex = 56531;

	class LBAMHOLCOJE___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* aliasConfigPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAMHOLCOJE___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AddDynamicTargetAliasList_b__0(::LBAMHOLCOJE_BIHKBFPBHEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBAMHOLCOJE_BIHKBFPBHEJ*))((::PBYTE)hIl2Cpp + LBAMHOLCOJE___C__DISPLAYCLASS3_0__ADDDYNAMICTARGETALIASLIST_B__0_OFFSET))(this, a1);
		}

	};
