#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FODMCAGKAIO;
namespace System { class Object; }

#define FODMCAGKAIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F9970)
#define FODMCAGKAIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F99B0)
#define FODMCAGKAIO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3F99C0)

	class FODMCAGKAIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FODMCAGKAIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODMCAGKAIO___C_CTOR_OFFSET))(this);
		}

		::FODMCAGKAIO* __cctor_b__33_0()
		{
			return ((::FODMCAGKAIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODMCAGKAIO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
