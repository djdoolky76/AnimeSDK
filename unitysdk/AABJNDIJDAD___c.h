#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AABJNDIJDAD;
namespace System { class Object; }

#define AABJNDIJDAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB5B30)
#define AABJNDIJDAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB5B70)
#define AABJNDIJDAD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDB5B80)

	class AABJNDIJDAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AABJNDIJDAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNDIJDAD___C_CTOR_OFFSET))(this);
		}

		::AABJNDIJDAD* __cctor_b__23_0()
		{
			return ((::AABJNDIJDAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNDIJDAD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
