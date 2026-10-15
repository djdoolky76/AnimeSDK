#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGOFJCCAPBC;
namespace System { class Object; }

#define CGOFJCCAPBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B84E0)
#define CGOFJCCAPBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B8520)
#define CGOFJCCAPBC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E0B8530)

	class CGOFJCCAPBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGOFJCCAPBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC___C_CTOR_OFFSET))(this);
		}

		::CGOFJCCAPBC* __cctor_b__38_0()
		{
			return ((::CGOFJCCAPBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOFJCCAPBC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
