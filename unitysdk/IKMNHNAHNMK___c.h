#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKMNHNAHNMK;
namespace System { class Object; }

#define IKMNHNAHNMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A5170)
#define IKMNHNAHNMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A51A0)
#define IKMNHNAHNMK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6A51B0)

	class IKMNHNAHNMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x558C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKMNHNAHNMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMNHNAHNMK___C_CTOR_OFFSET))(this);
		}

		::IKMNHNAHNMK* __cctor_b__33_0()
		{
			return ((::IKMNHNAHNMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMNHNAHNMK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
