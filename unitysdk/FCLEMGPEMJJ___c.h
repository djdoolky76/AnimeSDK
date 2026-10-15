#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILOOAAOHIIG;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FCLEMGPEMJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x156CD740)
#define FCLEMGPEMJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x156CD780)
#define FCLEMGPEMJJ___C__HANDLEASSISTANTRECOMMENDCHANGED_B__40_0_OFFSET UNITYSDK_OFFSET(0x156CD790)

	class FCLEMGPEMJJ___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::ILOOAAOHIIG*, ::System::Boolean>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::ILOOAAOHIIG*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F770);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F778);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCLEMGPEMJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _HandleAssistantRecommendChanged_b__40_0(::ILOOAAOHIIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILOOAAOHIIG*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ___C__HANDLEASSISTANTRECOMMENDCHANGED_B__40_0_OFFSET))(this, a1);
		}

	};
