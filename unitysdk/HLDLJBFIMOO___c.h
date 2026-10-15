#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLDLJBFIMOO;
namespace System { class Object; }

#define HLDLJBFIMOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BB430)
#define HLDLJBFIMOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BB470)
#define HLDLJBFIMOO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5BB480)

	class HLDLJBFIMOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x478A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLDLJBFIMOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO___C_CTOR_OFFSET))(this);
		}

		::HLDLJBFIMOO* __cctor_b__23_0()
		{
			return ((::HLDLJBFIMOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
