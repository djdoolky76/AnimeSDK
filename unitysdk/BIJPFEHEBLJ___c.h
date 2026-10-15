#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIJPFEHEBLJ;
namespace System { class Object; }

#define BIJPFEHEBLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE03B40)
#define BIJPFEHEBLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE03B80)
#define BIJPFEHEBLJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE03B90)

	class BIJPFEHEBLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x486D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIJPFEHEBLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ___C_CTOR_OFFSET))(this);
		}

		::BIJPFEHEBLJ* __cctor_b__23_0()
		{
			return ((::BIJPFEHEBLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJPFEHEBLJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
