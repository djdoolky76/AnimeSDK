#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBEHJJBBLPL;
namespace System { class Object; }

#define FBEHJJBBLPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E333580)
#define FBEHJJBBLPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3335C0)
#define FBEHJJBBLPL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3335D0)

	class FBEHJJBBLPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x593A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBEHJJBBLPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL___C_CTOR_OFFSET))(this);
		}

		::FBEHJJBBLPL* __cctor_b__23_0()
		{
			return ((::FBEHJJBBLPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEHJJBBLPL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
