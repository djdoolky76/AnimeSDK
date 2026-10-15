#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIONJNJEBBF;
namespace System { class Object; }

#define LIONJNJEBBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E973FE0)
#define LIONJNJEBBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E974010)
#define LIONJNJEBBF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E974020)

	class LIONJNJEBBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIONJNJEBBF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIONJNJEBBF___C_CTOR_OFFSET))(this);
		}

		::LIONJNJEBBF* __cctor_b__28_0()
		{
			return ((::LIONJNJEBBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIONJNJEBBF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
