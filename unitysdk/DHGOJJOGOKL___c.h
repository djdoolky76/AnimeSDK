#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHGOJJOGOKL;
namespace System { class Object; }

#define DHGOJJOGOKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F490C50)
#define DHGOJJOGOKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F490C90)
#define DHGOJJOGOKL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F490CA0)

inline static constexpr unsigned int DHGOJJOGOKL___c_TypeDefinitionIndex = 32229;

	class DHGOJJOGOKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x303C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGOJJOGOKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOJJOGOKL___C_CTOR_OFFSET))(this);
		}

		::DHGOJJOGOKL* __cctor_b__23_0()
		{
			return ((::DHGOJJOGOKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGOJJOGOKL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
