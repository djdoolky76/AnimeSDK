#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPPNOGNDFMJ;
namespace System { class String; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS57_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC607450)
#define NPPNOGNDFMJ___C__DISPLAYCLASS57_0___ACQUIREENVIRONMENTPROFILE_B__0_OFFSET UNITYSDK_OFFSET(0xC6104D0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS57_0___ACQUIREENVIRONMENTPROFILE_B__1_OFFSET UNITYSDK_OFFSET(0xC610840)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass57_0_TypeDefinitionIndex = 61880;

	class NPPNOGNDFMJ___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::NPPNOGNDFMJ* __4__this; // 0x10
		::System::String* path; // 0x18
		::System::Boolean acquired; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS57_0_CTOR_OFFSET))(this);
		}

		::System::Void __AcquireEnvironmentProfile_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS57_0___ACQUIREENVIRONMENTPROFILE_B__0_OFFSET))(this);
		}

		::System::Void __AcquireEnvironmentProfile_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS57_0___ACQUIREENVIRONMENTPROFILE_B__1_OFFSET))(this);
		}

	};
