#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBPLDFOPIFJ;
namespace System { class Object; }

#define IBPLDFOPIFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61CE40)
#define IBPLDFOPIFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61CE80)
#define IBPLDFOPIFJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E61CE90)

inline static constexpr unsigned int IBPLDFOPIFJ___c_TypeDefinitionIndex = 31415;

	class IBPLDFOPIFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42630);
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
