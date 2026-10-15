#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOINLLCCNBD;
namespace System { class Object; }

#define LOINLLCCNBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C15A0)
#define LOINLLCCNBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C15E0)
#define LOINLLCCNBD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9C15F0)

	class LOINLLCCNBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOINLLCCNBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINLLCCNBD___C_CTOR_OFFSET))(this);
		}

		::LOINLLCCNBD* __cctor_b__28_0()
		{
			return ((::LOINLLCCNBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINLLCCNBD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
