#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKECLANKKII;
namespace System { class Object; }

#define IKECLANKKII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E672D00)
#define IKECLANKKII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E672D40)
#define IKECLANKKII___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E672D50)

inline static constexpr unsigned int IKECLANKKII___c_TypeDefinitionIndex = 34616;

	class IKECLANKKII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x504C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKECLANKKII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII___C_CTOR_OFFSET))(this);
		}

		::IKECLANKKII* __cctor_b__33_0()
		{
			return ((::IKECLANKKII*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECLANKKII___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
