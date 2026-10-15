#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MENLHHCJNCE;
namespace System { class Object; }

#define MENLHHCJNCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA12340)
#define MENLHHCJNCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA12380)
#define MENLHHCJNCE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA12390)

	class MENLHHCJNCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENLHHCJNCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENLHHCJNCE___C_CTOR_OFFSET))(this);
		}

		::MENLHHCJNCE* __cctor_b__23_0()
		{
			return ((::MENLHHCJNCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENLHHCJNCE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
