#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NILMGDJFACH;
namespace System { class Object; }

#define NILMGDJFACH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EACD240)
#define NILMGDJFACH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACD280)
#define NILMGDJFACH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EACD290)

inline static constexpr unsigned int NILMGDJFACH___c_TypeDefinitionIndex = 28766;

	class NILMGDJFACH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63210);
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
