#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHEHACPKKBL;
namespace System { class Object; }

#define JHEHACPKKBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7449B0)
#define JHEHACPKKBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7449F0)
#define JHEHACPKKBL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E744A00)

	class JHEHACPKKBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHEHACPKKBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHACPKKBL___C_CTOR_OFFSET))(this);
		}

		::JHEHACPKKBL* __cctor_b__28_0()
		{
			return ((::JHEHACPKKBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEHACPKKBL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
