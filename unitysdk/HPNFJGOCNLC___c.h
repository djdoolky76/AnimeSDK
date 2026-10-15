#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEBPFBNCALB;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HPNFJGOCNLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15DD5450)
#define HPNFJGOCNLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD5490)
#define HPNFJGOCNLC___C___REFRESHISCOMPLETE_B__7_0_OFFSET UNITYSDK_OFFSET(0x15DD54A0)

inline static constexpr unsigned int HPNFJGOCNLC___c_TypeDefinitionIndex = 79563;

	class HPNFJGOCNLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38BA0);
		}

		static ::System::Func_2<::JEBPFBNCALB*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::JEBPFBNCALB*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38BA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPNFJGOCNLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPNFJGOCNLC___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshIsComplete_b__7_0(::JEBPFBNCALB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEBPFBNCALB*))((::PBYTE)hIl2Cpp + HPNFJGOCNLC___C___REFRESHISCOMPLETE_B__7_0_OFFSET))(this, a1);
		}

	};
