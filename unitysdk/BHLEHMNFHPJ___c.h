#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHLEHMNFHPJ;
namespace System { class Object; }

#define BHLEHMNFHPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF7840)
#define BHLEHMNFHPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF7880)
#define BHLEHMNFHPJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDF7890)

	class BHLEHMNFHPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHLEHMNFHPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ___C_CTOR_OFFSET))(this);
		}

		::BHLEHMNFHPJ* __cctor_b__33_0()
		{
			return ((::BHLEHMNFHPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLEHMNFHPJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
