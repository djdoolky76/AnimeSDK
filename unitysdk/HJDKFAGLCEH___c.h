#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJDKFAGLCEH;
namespace System { class Object; }

#define HJDKFAGLCEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20161E20)
#define HJDKFAGLCEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20161E60)
#define HJDKFAGLCEH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20161E70)

inline static constexpr unsigned int HJDKFAGLCEH___c_TypeDefinitionIndex = 26508;

	class HJDKFAGLCEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJDKFAGLCEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDKFAGLCEH___C_CTOR_OFFSET))(this);
		}

		::HJDKFAGLCEH* __cctor_b__28_0()
		{
			return ((::HJDKFAGLCEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDKFAGLCEH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
