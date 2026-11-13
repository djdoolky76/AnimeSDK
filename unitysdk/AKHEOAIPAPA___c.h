#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKHEOAIPAPA;
namespace System { class Object; }

#define AKHEOAIPAPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2063DA40)
#define AKHEOAIPAPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2063DA80)
#define AKHEOAIPAPA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x2063DA90)

inline static constexpr unsigned int AKHEOAIPAPA___c_TypeDefinitionIndex = 27576;

	class AKHEOAIPAPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKHEOAIPAPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEOAIPAPA___C_CTOR_OFFSET))(this);
		}

		::AKHEOAIPAPA* __cctor_b__43_0()
		{
			return ((::AKHEOAIPAPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHEOAIPAPA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
