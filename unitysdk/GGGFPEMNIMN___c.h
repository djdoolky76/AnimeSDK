#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHLNPFDIJLF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GGGFPEMNIMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A040D0)
#define GGGFPEMNIMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15A04110)
#define GGGFPEMNIMN___C__START_B__5_0_OFFSET UNITYSDK_OFFSET(0x15A04120)

	class GGGFPEMNIMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B200);
		}

		static ::System::Func_2<::GHLNPFDIJLF*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::GHLNPFDIJLF*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGGFPEMNIMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFPEMNIMN___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _Start_b__5_0(::GHLNPFDIJLF* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::GHLNPFDIJLF*))((::PBYTE)hIl2Cpp + GGGFPEMNIMN___C__START_B__5_0_OFFSET))(this, a1);
		}

	};
