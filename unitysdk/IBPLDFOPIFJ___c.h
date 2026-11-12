#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBPLDFOPIFJ;
namespace System { class Object; }

#define IBPLDFOPIFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9380D0)
#define IBPLDFOPIFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F938110)
#define IBPLDFOPIFJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F938120)

inline static constexpr unsigned int IBPLDFOPIFJ___c_TypeDefinitionIndex = 32328;

	class IBPLDFOPIFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A0A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBPLDFOPIFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ___C_CTOR_OFFSET))(this);
		}

		::IBPLDFOPIFJ* __cctor_b__33_0()
		{
			return ((::IBPLDFOPIFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPLDFOPIFJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
