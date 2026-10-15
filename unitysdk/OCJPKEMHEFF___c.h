#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCJPKEMHEFF;
namespace System { class Object; }

#define OCJPKEMHEFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE16480)
#define OCJPKEMHEFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE164C0)
#define OCJPKEMHEFF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE164D0)

	class OCJPKEMHEFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCJPKEMHEFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPKEMHEFF___C_CTOR_OFFSET))(this);
		}

		::OCJPKEMHEFF* __cctor_b__23_0()
		{
			return ((::OCJPKEMHEFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPKEMHEFF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
