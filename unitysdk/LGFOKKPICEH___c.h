#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGFOKKPICEH;
namespace System { class Object; }

#define LGFOKKPICEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E952070)
#define LGFOKKPICEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9520A0)
#define LGFOKKPICEH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9520B0)

	class LGFOKKPICEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGFOKKPICEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOKKPICEH___C_CTOR_OFFSET))(this);
		}

		::LGFOKKPICEH* __cctor_b__28_0()
		{
			return ((::LGFOKKPICEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFOKKPICEH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
