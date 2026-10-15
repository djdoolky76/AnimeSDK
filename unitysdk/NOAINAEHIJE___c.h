#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOAINAEHIJE;
namespace System { class Object; }

#define NOAINAEHIJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB87D50)
#define NOAINAEHIJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB87D90)
#define NOAINAEHIJE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB87DA0)

inline static constexpr unsigned int NOAINAEHIJE___c_TypeDefinitionIndex = 32311;

	class NOAINAEHIJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB6C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOAINAEHIJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAINAEHIJE___C_CTOR_OFFSET))(this);
		}

		::NOAINAEHIJE* __cctor_b__33_0()
		{
			return ((::NOAINAEHIJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAINAEHIJE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
