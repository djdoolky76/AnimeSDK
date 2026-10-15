#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMJCABJPDHG;
namespace System { class Object; }

#define FMJCABJPDHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E7BC0)
#define FMJCABJPDHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E7C00)
#define FMJCABJPDHG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3E7C10)

	class FMJCABJPDHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMJCABJPDHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG___C_CTOR_OFFSET))(this);
		}

		::FMJCABJPDHG* __cctor_b__33_0()
		{
			return ((::FMJCABJPDHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
