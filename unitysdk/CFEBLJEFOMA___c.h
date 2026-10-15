#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFEBLJEFOMA;
namespace System { class Object; }

#define CFEBLJEFOMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09FC10)
#define CFEBLJEFOMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09FC50)
#define CFEBLJEFOMA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E09FC60)

	class CFEBLJEFOMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFEBLJEFOMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEBLJEFOMA___C_CTOR_OFFSET))(this);
		}

		::CFEBLJEFOMA* __cctor_b__23_0()
		{
			return ((::CFEBLJEFOMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEBLJEFOMA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
