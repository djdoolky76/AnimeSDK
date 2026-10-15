#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKOBPKLEDFP;
namespace System { class Object; }

#define NKOBPKLEDFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5ECB0)
#define NKOBPKLEDFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5ECF0)
#define NKOBPKLEDFP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB5ED00)

	class NKOBPKLEDFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKOBPKLEDFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPKLEDFP___C_CTOR_OFFSET))(this);
		}

		::NKOBPKLEDFP* __cctor_b__28_0()
		{
			return ((::NKOBPKLEDFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBPKLEDFP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
