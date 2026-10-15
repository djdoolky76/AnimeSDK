#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBPDNOOMHBD;
namespace System { class Object; }

#define EBPDNOOMHBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E24B4E0)
#define EBPDNOOMHBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E24B510)
#define EBPDNOOMHBD___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E24B520)

	class EBPDNOOMHBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D0D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBPDNOOMHBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPDNOOMHBD___C_CTOR_OFFSET))(this);
		}

		::EBPDNOOMHBD* __cctor_b__68_0()
		{
			return ((::EBPDNOOMHBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPDNOOMHBD___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
