#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBABAAOHGHH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OJACCBLPEPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEA98C0)
#define OJACCBLPEPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA9900)
#define OJACCBLPEPG___C__SKIPVIRTUALTIMETABLETONEXTSUBWAYARRIVED_B__25_0_OFFSET UNITYSDK_OFFSET(0xBEA9910)

	class OJACCBLPEPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x541D0);
		}

		static ::System::Func_2<::CBABAAOHGHH*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::CBABAAOHGHH*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x541D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJACCBLPEPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _SkipVirtualTimetableToNextSubwayArrived_b__25_0(::CBABAAOHGHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBABAAOHGHH*))((::PBYTE)hIl2Cpp + OJACCBLPEPG___C__SKIPVIRTUALTIMETABLETONEXTSUBWAYARRIVED_B__25_0_OFFSET))(this, a1);
		}

	};
