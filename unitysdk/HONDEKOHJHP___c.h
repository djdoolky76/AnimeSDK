#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HONDEKOHJHP;
namespace System { class Object; }

#define HONDEKOHJHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F19C0)
#define HONDEKOHJHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F1A00)
#define HONDEKOHJHP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5F1A10)

	class HONDEKOHJHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FF10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HONDEKOHJHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HONDEKOHJHP___C_CTOR_OFFSET))(this);
		}

		::HONDEKOHJHP* __cctor_b__33_0()
		{
			return ((::HONDEKOHJHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HONDEKOHJHP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
