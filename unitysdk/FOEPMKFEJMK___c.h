#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOEPMKFEJMK;
namespace System { class Object; }

#define FOEPMKFEJMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FA5A0)
#define FOEPMKFEJMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FA5D0)
#define FOEPMKFEJMK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E3FA5E0)

	class FOEPMKFEJMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOEPMKFEJMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEPMKFEJMK___C_CTOR_OFFSET))(this);
		}

		::FOEPMKFEJMK* __cctor_b__38_0()
		{
			return ((::FOEPMKFEJMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEPMKFEJMK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
