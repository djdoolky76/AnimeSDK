#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFCJIPKABEF;
namespace System { class Object; }

#define GFCJIPKABEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4617C0)
#define GFCJIPKABEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E461800)
#define GFCJIPKABEF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E461810)

	class GFCJIPKABEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFCJIPKABEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF___C_CTOR_OFFSET))(this);
		}

		::GFCJIPKABEF* __cctor_b__43_0()
		{
			return ((::GFCJIPKABEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
