#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGHOBPBFFOB;
namespace System { class Object; }

#define GGHOBPBFFOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E47D160)
#define GGHOBPBFFOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47D1A0)
#define GGHOBPBFFOB___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E47D1B0)

	class GGHOBPBFFOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGHOBPBFFOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB___C_CTOR_OFFSET))(this);
		}

		::GGHOBPBFFOB* __cctor_b__48_0()
		{
			return ((::GGHOBPBFFOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHOBPBFFOB___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
