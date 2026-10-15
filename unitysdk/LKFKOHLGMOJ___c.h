#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKFKOHLGMOJ;
namespace System { class Object; }

#define LKFKOHLGMOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98F5B0)
#define LKFKOHLGMOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98F5F0)
#define LKFKOHLGMOJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E98F600)

	class LKFKOHLGMOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A7F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKFKOHLGMOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ___C_CTOR_OFFSET))(this);
		}

		::LKFKOHLGMOJ* __cctor_b__23_0()
		{
			return ((::LKFKOHLGMOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFKOHLGMOJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
