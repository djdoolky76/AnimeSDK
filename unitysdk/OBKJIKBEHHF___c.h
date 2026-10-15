#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBKJIKBEHHF;
namespace System { class Object; }

#define OBKJIKBEHHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB2DD0)
#define OBKJIKBEHHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB2E10)
#define OBKJIKBEHHF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EBB2E20)

	class OBKJIKBEHHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBKJIKBEHHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJIKBEHHF___C_CTOR_OFFSET))(this);
		}

		::OBKJIKBEHHF* __cctor_b__28_0()
		{
			return ((::OBKJIKBEHHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKJIKBEHHF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
