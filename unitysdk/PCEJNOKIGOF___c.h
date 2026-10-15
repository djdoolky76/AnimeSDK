#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCEJNOKIGOF;
namespace System { class Object; }

#define PCEJNOKIGOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF07710)
#define PCEJNOKIGOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF07750)
#define PCEJNOKIGOF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF07760)

	class PCEJNOKIGOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCEJNOKIGOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJNOKIGOF___C_CTOR_OFFSET))(this);
		}

		::PCEJNOKIGOF* __cctor_b__23_0()
		{
			return ((::PCEJNOKIGOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEJNOKIGOF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
