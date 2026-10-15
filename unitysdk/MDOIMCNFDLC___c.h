#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDOIMCNFDLC;
namespace System { class Object; }

#define MDOIMCNFDLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA07240)
#define MDOIMCNFDLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA07280)
#define MDOIMCNFDLC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA07290)

	class MDOIMCNFDLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDOIMCNFDLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOIMCNFDLC___C_CTOR_OFFSET))(this);
		}

		::MDOIMCNFDLC* __cctor_b__23_0()
		{
			return ((::MDOIMCNFDLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOIMCNFDLC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
