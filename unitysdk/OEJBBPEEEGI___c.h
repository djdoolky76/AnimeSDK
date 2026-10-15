#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEJBBPEEEGI;
namespace System { class Object; }

#define OEJBBPEEEGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE2D6D0)
#define OEJBBPEEEGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2D710)
#define OEJBBPEEEGI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE2D720)

	class OEJBBPEEEGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x152A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEJBBPEEEGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI___C_CTOR_OFFSET))(this);
		}

		::OEJBBPEEEGI* __cctor_b__23_0()
		{
			return ((::OEJBBPEEEGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJBBPEEEGI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
