#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BONOIPBEEAP;
namespace System { class Object; }

#define BONOIPBEEAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03E600)
#define BONOIPBEEAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03E640)
#define BONOIPBEEAP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E03E650)

	class BONOIPBEEAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BONOIPBEEAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONOIPBEEAP___C_CTOR_OFFSET))(this);
		}

		::BONOIPBEEAP* __cctor_b__28_0()
		{
			return ((::BONOIPBEEAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BONOIPBEEAP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
