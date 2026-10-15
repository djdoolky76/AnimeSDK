#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJDKFAGLCEH;
namespace System { class Object; }

#define HJDKFAGLCEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5791A0)
#define HJDKFAGLCEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5791E0)
#define HJDKFAGLCEH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5791F0)

inline static constexpr unsigned int HJDKFAGLCEH___c_TypeDefinitionIndex = 26011;

	class HJDKFAGLCEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35720);
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
