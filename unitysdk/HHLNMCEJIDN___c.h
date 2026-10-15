#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHLNMCEJIDN;
namespace System { class Object; }

#define HHLNMCEJIDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58A850)
#define HHLNMCEJIDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58A890)
#define HHLNMCEJIDN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E58A8A0)

	class HHLNMCEJIDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A1B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHLNMCEJIDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN___C_CTOR_OFFSET))(this);
		}

		::HHLNMCEJIDN* __cctor_b__33_0()
		{
			return ((::HHLNMCEJIDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
