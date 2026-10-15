#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNKBEGIDAAC;
namespace System { class Object; }

#define FNKBEGIDAAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F23C0)
#define FNKBEGIDAAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F2400)
#define FNKBEGIDAAC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3F2410)

	class FNKBEGIDAAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x656C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNKBEGIDAAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC___C_CTOR_OFFSET))(this);
		}

		::FNKBEGIDAAC* __cctor_b__33_0()
		{
			return ((::FNKBEGIDAAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
