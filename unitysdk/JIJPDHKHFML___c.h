#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIJPDHKHFML;
namespace System { class Object; }

#define JIJPDHKHFML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74DBB0)
#define JIJPDHKHFML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74DBE0)
#define JIJPDHKHFML___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E74DBF0)

	class JIJPDHKHFML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x640D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIJPDHKHFML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJPDHKHFML___C_CTOR_OFFSET))(this);
		}

		::JIJPDHKHFML* __cctor_b__18_0()
		{
			return ((::JIJPDHKHFML*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJPDHKHFML___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
