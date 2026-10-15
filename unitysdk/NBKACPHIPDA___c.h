#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBKACPHIPDA;
namespace System { class Object; }

#define NBKACPHIPDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD36C0)
#define NBKACPHIPDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD36F0)
#define NBKACPHIPDA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EAD3700)

	class NBKACPHIPDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CFA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBKACPHIPDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKACPHIPDA___C_CTOR_OFFSET))(this);
		}

		::NBKACPHIPDA* __cctor_b__18_0()
		{
			return ((::NBKACPHIPDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKACPHIPDA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
