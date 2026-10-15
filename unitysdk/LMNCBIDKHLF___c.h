#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMNCBIDKHLF;
namespace System { class Object; }

#define LMNCBIDKHLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9ACA50)
#define LMNCBIDKHLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9ACA90)
#define LMNCBIDKHLF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9ACAA0)

	class LMNCBIDKHLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMNCBIDKHLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNCBIDKHLF___C_CTOR_OFFSET))(this);
		}

		::LMNCBIDKHLF* __cctor_b__23_0()
		{
			return ((::LMNCBIDKHLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNCBIDKHLF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
