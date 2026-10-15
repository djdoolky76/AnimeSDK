#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHODCLCAIIP;
namespace System { class Object; }

#define KHODCLCAIIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E84DFB0)
#define KHODCLCAIIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E84DFF0)
#define KHODCLCAIIP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E84E000)

	class KHODCLCAIIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHODCLCAIIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHODCLCAIIP___C_CTOR_OFFSET))(this);
		}

		::KHODCLCAIIP* __cctor_b__23_0()
		{
			return ((::KHODCLCAIIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHODCLCAIIP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
