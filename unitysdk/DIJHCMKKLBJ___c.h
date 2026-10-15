#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIJHCMKKLBJ;
namespace System { class Object; }

#define DIJHCMKKLBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C09C0)
#define DIJHCMKKLBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C09F0)
#define DIJHCMKKLBJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1C0A00)

	class DIJHCMKKLBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIJHCMKKLBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ___C_CTOR_OFFSET))(this);
		}

		::DIJHCMKKLBJ* __cctor_b__38_0()
		{
			return ((::DIJHCMKKLBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
