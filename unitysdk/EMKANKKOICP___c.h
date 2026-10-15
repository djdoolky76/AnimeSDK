#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMKANKKOICP;
namespace System { class Object; }

#define EMKANKKOICP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E4C40)
#define EMKANKKOICP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E4C80)
#define EMKANKKOICP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2E4C90)

	class EMKANKKOICP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMKANKKOICP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKANKKOICP___C_CTOR_OFFSET))(this);
		}

		::EMKANKKOICP* __cctor_b__33_0()
		{
			return ((::EMKANKKOICP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKANKKOICP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
