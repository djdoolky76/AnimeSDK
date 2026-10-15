#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDCEKOBEEFI;
namespace System { class Object; }

#define IDCEKOBEEFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E629750)
#define IDCEKOBEEFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E629790)
#define IDCEKOBEEFI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6297A0)

	class IDCEKOBEEFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDCEKOBEEFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEKOBEEFI___C_CTOR_OFFSET))(this);
		}

		::IDCEKOBEEFI* __cctor_b__33_0()
		{
			return ((::IDCEKOBEEFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCEKOBEEFI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
