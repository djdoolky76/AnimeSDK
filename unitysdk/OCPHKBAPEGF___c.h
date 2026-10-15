#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCPHKBAPEGF;
namespace System { class Object; }

#define OCPHKBAPEGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1AE20)
#define OCPHKBAPEGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1AE60)
#define OCPHKBAPEGF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE1AE70)

	class OCPHKBAPEGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCPHKBAPEGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHKBAPEGF___C_CTOR_OFFSET))(this);
		}

		::OCPHKBAPEGF* __cctor_b__23_0()
		{
			return ((::OCPHKBAPEGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHKBAPEGF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
