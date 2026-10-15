#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAHBCFDAIKG;
namespace System { class Object; }

#define BAHBCFDAIKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B5790)
#define BAHBCFDAIKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B57D0)
#define BAHBCFDAIKG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7B57E0)

	class BAHBCFDAIKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAHBCFDAIKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBCFDAIKG___C_CTOR_OFFSET))(this);
		}

		::BAHBCFDAIKG* __cctor_b__23_0()
		{
			return ((::BAHBCFDAIKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBCFDAIKG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
