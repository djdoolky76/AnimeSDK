#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NILMGDJFACH;
namespace System { class Object; }

#define NILMGDJFACH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB36F60)
#define NILMGDJFACH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB36FA0)
#define NILMGDJFACH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB36FB0)

	class NILMGDJFACH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x648E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NILMGDJFACH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH___C_CTOR_OFFSET))(this);
		}

		::NILMGDJFACH* __cctor_b__23_0()
		{
			return ((::NILMGDJFACH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILMGDJFACH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
