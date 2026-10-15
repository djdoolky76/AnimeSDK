#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABCHBKBKCDF;
namespace System { class Object; }

#define ABCHBKBKCDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC7C80)
#define ABCHBKBKCDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC7CB0)
#define ABCHBKBKCDF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDC7CC0)

	class ABCHBKBKCDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x389E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABCHBKBKCDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCHBKBKCDF___C_CTOR_OFFSET))(this);
		}

		::ABCHBKBKCDF* __cctor_b__28_0()
		{
			return ((::ABCHBKBKCDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCHBKBKCDF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
