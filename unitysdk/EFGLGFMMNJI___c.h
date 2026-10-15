#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFGLGFMMNJI;
namespace System { class Object; }

#define EFGLGFMMNJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28F3D0)
#define EFGLGFMMNJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28F410)
#define EFGLGFMMNJI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E28F420)

	class EFGLGFMMNJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x452C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFGLGFMMNJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGLGFMMNJI___C_CTOR_OFFSET))(this);
		}

		::EFGLGFMMNJI* __cctor_b__18_0()
		{
			return ((::EFGLGFMMNJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGLGFMMNJI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
