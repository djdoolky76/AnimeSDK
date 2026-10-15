#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECJAMIHNOFL;
namespace System { class Object; }

#define ECJAMIHNOFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2256D0)
#define ECJAMIHNOFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E225710)
#define ECJAMIHNOFL___C___CCTOR_B__56_0_OFFSET UNITYSDK_OFFSET(0x1E225720)

inline static constexpr unsigned int ECJAMIHNOFL___c_TypeDefinitionIndex = 33227;

	class ECJAMIHNOFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECJAMIHNOFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJAMIHNOFL___C_CTOR_OFFSET))(this);
		}

		::ECJAMIHNOFL* __cctor_b__56_0()
		{
			return ((::ECJAMIHNOFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJAMIHNOFL___C___CCTOR_B__56_0_OFFSET))(this);
		}

	};
