#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMLCCHLLKG;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PKJHLEOADGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2C3960)
#define PKJHLEOADGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC2C39A0)
#define PKJHLEOADGL___C___CTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0xC2C39B0)

	class PKJHLEOADGL___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KPMLCCHLLKG*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::KPMLCCHLLKG*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKJHLEOADGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJHLEOADGL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__29_0(::KPMLCCHLLKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPMLCCHLLKG*))((::PBYTE)hIl2Cpp + PKJHLEOADGL___C___CTOR_B__29_0_OFFSET))(this, a1);
		}

	};
