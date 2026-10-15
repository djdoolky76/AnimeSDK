#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PENHEEONFHJ;
namespace System { class Object; }

#define PENHEEONFHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1EF70)
#define PENHEEONFHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1EFB0)
#define PENHEEONFHJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF1EFC0)

	class PENHEEONFHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PENHEEONFHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENHEEONFHJ___C_CTOR_OFFSET))(this);
		}

		::PENHEEONFHJ* __cctor_b__28_0()
		{
			return ((::PENHEEONFHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PENHEEONFHJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
