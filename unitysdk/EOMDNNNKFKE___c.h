#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCHICFMEANN.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EOMDNNNKFKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x155C8B50)
#define EOMDNNNKFKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x155C8B90)
#define EOMDNNNKFKE___C___STARTBATTLE_B__7_0_OFFSET UNITYSDK_OFFSET(0x155C8BA0)

	class EOMDNNNKFKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53B40);
		}

		static ::System::Func_2<::DCHICFMEANN, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::DCHICFMEANN, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOMDNNNKFKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOMDNNNKFKE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __StartBattle_b__7_0(::DCHICFMEANN a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCHICFMEANN))((::PBYTE)hIl2Cpp + EOMDNNNKFKE___C___STARTBATTLE_B__7_0_OFFSET))(this, a1);
		}

	};
