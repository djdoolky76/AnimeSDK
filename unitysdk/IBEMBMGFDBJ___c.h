#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBEMBMGFDBJ;
namespace System { class Object; }

#define IBEMBMGFDBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6132D0)
#define IBEMBMGFDBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E613310)
#define IBEMBMGFDBJ___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E613320)

	class IBEMBMGFDBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBEMBMGFDBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ___C_CTOR_OFFSET))(this);
		}

		::IBEMBMGFDBJ* __cctor_b__48_0()
		{
			return ((::IBEMBMGFDBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEMBMGFDBJ___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
