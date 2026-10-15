#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJPGOAAALGJ;
namespace System { class Object; }

#define NJPGOAAALGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB53F70)
#define NJPGOAAALGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB53FA0)
#define NJPGOAAALGJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB53FB0)

	class NJPGOAAALGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65C50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJPGOAAALGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPGOAAALGJ___C_CTOR_OFFSET))(this);
		}

		::NJPGOAAALGJ* __cctor_b__23_0()
		{
			return ((::NJPGOAAALGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPGOAAALGJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
