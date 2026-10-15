#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHKDJMMGIPA;
namespace System { class Object; }

#define FHKDJMMGIPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38E580)
#define FHKDJMMGIPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38E5C0)
#define FHKDJMMGIPA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E38E5D0)

	class FHKDJMMGIPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHKDJMMGIPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKDJMMGIPA___C_CTOR_OFFSET))(this);
		}

		::FHKDJMMGIPA* __cctor_b__23_0()
		{
			return ((::FHKDJMMGIPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKDJMMGIPA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
