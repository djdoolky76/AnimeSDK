#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGOCBAKHGEJ;
namespace System { class Object; }

#define LGOCBAKHGEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC79820)
#define LGOCBAKHGEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC79860)
#define LGOCBAKHGEJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FC79870)

inline static constexpr unsigned int LGOCBAKHGEJ___c_TypeDefinitionIndex = 26637;

	class LGOCBAKHGEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33D30);
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
