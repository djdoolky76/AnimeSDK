#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKDHPOGEDOP;
namespace System { class Object; }

#define MKDHPOGEDOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA547C0)
#define MKDHPOGEDOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA547F0)
#define MKDHPOGEDOP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA54800)

	class MKDHPOGEDOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x566E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDHPOGEDOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP___C_CTOR_OFFSET))(this);
		}

		::MKDHPOGEDOP* __cctor_b__33_0()
		{
			return ((::MKDHPOGEDOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
