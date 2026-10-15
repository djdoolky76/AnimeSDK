#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLLBJDEJFNF;
namespace System { class Object; }

#define CLLBJDEJFNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FADA0)
#define CLLBJDEJFNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FADD0)
#define CLLBJDEJFNF___C___CCTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0x1E0FADE0)

	class CLLBJDEJFNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D5C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLLBJDEJFNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF___C_CTOR_OFFSET))(this);
		}

		::CLLBJDEJFNF* __cctor_b__34_0()
		{
			return ((::CLLBJDEJFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLLBJDEJFNF___C___CCTOR_B__34_0_OFFSET))(this);
		}

	};
