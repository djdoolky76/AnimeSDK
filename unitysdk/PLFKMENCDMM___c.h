#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLFKMENCDMM;
namespace System { class Object; }

#define PLFKMENCDMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA00D0)
#define PLFKMENCDMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA0110)
#define PLFKMENCDMM___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DFA0120)

	class PLFKMENCDMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLFKMENCDMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM___C_CTOR_OFFSET))(this);
		}

		::PLFKMENCDMM* __cctor_b__48_0()
		{
			return ((::PLFKMENCDMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFKMENCDMM___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
