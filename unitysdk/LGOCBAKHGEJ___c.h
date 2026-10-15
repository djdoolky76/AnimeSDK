#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGOCBAKHGEJ;
namespace System { class Object; }

#define LGOCBAKHGEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E92BB30)
#define LGOCBAKHGEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92BB70)
#define LGOCBAKHGEJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E92BB80)

inline static constexpr unsigned int LGOCBAKHGEJ___c_TypeDefinitionIndex = 26110;

	class LGOCBAKHGEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGOCBAKHGEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOCBAKHGEJ___C_CTOR_OFFSET))(this);
		}

		::LGOCBAKHGEJ* __cctor_b__33_0()
		{
			return ((::LGOCBAKHGEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOCBAKHGEJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
