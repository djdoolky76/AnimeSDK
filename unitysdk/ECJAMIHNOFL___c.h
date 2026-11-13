#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECJAMIHNOFL;
namespace System { class Object; }

#define ECJAMIHNOFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F379080)
#define ECJAMIHNOFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3790C0)
#define ECJAMIHNOFL___C___CCTOR_B__56_0_OFFSET UNITYSDK_OFFSET(0x1F3790D0)

inline static constexpr unsigned int ECJAMIHNOFL___c_TypeDefinitionIndex = 34142;

	class ECJAMIHNOFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45410);
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
