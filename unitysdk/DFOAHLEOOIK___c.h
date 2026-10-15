#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFOAHLEOOIK;
namespace System { class Object; }

#define DFOAHLEOOIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AA590)
#define DFOAHLEOOIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AA5D0)
#define DFOAHLEOOIK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1AA5E0)

	class DFOAHLEOOIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFOAHLEOOIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAHLEOOIK___C_CTOR_OFFSET))(this);
		}

		::DFOAHLEOOIK* __cctor_b__23_0()
		{
			return ((::DFOAHLEOOIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOAHLEOOIK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
