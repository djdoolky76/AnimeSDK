#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLMHPBJKJOD;
namespace System { class Object; }

#define HLMHPBJKJOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C2120)
#define HLMHPBJKJOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C2160)
#define HLMHPBJKJOD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5C2170)

	class HLMHPBJKJOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x486C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLMHPBJKJOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMHPBJKJOD___C_CTOR_OFFSET))(this);
		}

		::HLMHPBJKJOD* __cctor_b__28_0()
		{
			return ((::HLMHPBJKJOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMHPBJKJOD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
