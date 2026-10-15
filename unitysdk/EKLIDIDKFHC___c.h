#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKLIDIDKFHC;
namespace System { class Object; }

#define EKLIDIDKFHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C5B40)
#define EKLIDIDKFHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C5B80)
#define EKLIDIDKFHC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2C5B90)

	class EKLIDIDKFHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKLIDIDKFHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC___C_CTOR_OFFSET))(this);
		}

		::EKLIDIDKFHC* __cctor_b__43_0()
		{
			return ((::EKLIDIDKFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
