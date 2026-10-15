#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCOJEHPINMN;
namespace System { class Object; }

#define OCOJEHPINMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE19730)
#define OCOJEHPINMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE19770)
#define OCOJEHPINMN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE19780)

	class OCOJEHPINMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCOJEHPINMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN___C_CTOR_OFFSET))(this);
		}

		::OCOJEHPINMN* __cctor_b__33_0()
		{
			return ((::OCOJEHPINMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
