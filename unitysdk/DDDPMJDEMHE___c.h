#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDDPMJDEMHE;
namespace System { class Object; }

#define DDDPMJDEMHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17CA00)
#define DDDPMJDEMHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17CA40)
#define DDDPMJDEMHE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E17CA50)

inline static constexpr unsigned int DDDPMJDEMHE___c_TypeDefinitionIndex = 30983;

	class DDDPMJDEMHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDDPMJDEMHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDPMJDEMHE___C_CTOR_OFFSET))(this);
		}

		::DDDPMJDEMHE* __cctor_b__33_0()
		{
			return ((::DDDPMJDEMHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDPMJDEMHE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
