#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPPIBFOLFKN;
namespace System { class Object; }

#define EPPIBFOLFKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31B230)
#define EPPIBFOLFKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E31B270)
#define EPPIBFOLFKN___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E31B280)

	class EPPIBFOLFKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x570D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPPIBFOLFKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPIBFOLFKN___C_CTOR_OFFSET))(this);
		}

		::EPPIBFOLFKN* __cctor_b__58_0()
		{
			return ((::EPPIBFOLFKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPIBFOLFKN___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
