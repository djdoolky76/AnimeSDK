#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJPNDFFGJHO;
namespace System { class Object; }

#define DJPNDFFGJHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D39D0)
#define DJPNDFFGJHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D3A10)
#define DJPNDFFGJHO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1D3A20)

	class DJPNDFFGJHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJPNDFFGJHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNDFFGJHO___C_CTOR_OFFSET))(this);
		}

		::DJPNDFFGJHO* __cctor_b__23_0()
		{
			return ((::DJPNDFFGJHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNDFFGJHO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
