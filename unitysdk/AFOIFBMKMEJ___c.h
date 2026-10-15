#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFOIFBMKMEJ;
namespace System { class Object; }

#define AFOIFBMKMEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11BE00)
#define AFOIFBMKMEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11BE40)
#define AFOIFBMKMEJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E11BE50)

	class AFOIFBMKMEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFOIFBMKMEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ___C_CTOR_OFFSET))(this);
		}

		::AFOIFBMKMEJ* __cctor_b__33_0()
		{
			return ((::AFOIFBMKMEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOIFBMKMEJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
