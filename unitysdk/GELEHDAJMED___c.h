#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GELEHDAJMED;
namespace System { class Object; }

#define GELEHDAJMED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45E340)
#define GELEHDAJMED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45E380)
#define GELEHDAJMED___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E45E390)

	class GELEHDAJMED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GELEHDAJMED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEHDAJMED___C_CTOR_OFFSET))(this);
		}

		::GELEHDAJMED* __cctor_b__23_0()
		{
			return ((::GELEHDAJMED*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELEHDAJMED___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
