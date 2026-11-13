#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEJKAOKHPPL;
namespace System { class Object; }

#define OEJKAOKHPPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB61560)
#define OEJKAOKHPPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB615A0)
#define OEJKAOKHPPL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB615B0)

inline static constexpr unsigned int OEJKAOKHPPL___c_TypeDefinitionIndex = 29887;

	class OEJKAOKHPPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFD00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEJKAOKHPPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJKAOKHPPL___C_CTOR_OFFSET))(this);
		}

		::OEJKAOKHPPL* __cctor_b__28_0()
		{
			return ((::OEJKAOKHPPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJKAOKHPPL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
