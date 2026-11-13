#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHIMNIFMBMI;
namespace System { class Object; }

#define PHIMNIFMBMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2025E100)
#define PHIMNIFMBMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2025E140)
#define PHIMNIFMBMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2025E150)

inline static constexpr unsigned int PHIMNIFMBMI___c_TypeDefinitionIndex = 27179;

	class PHIMNIFMBMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHIMNIFMBMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMNIFMBMI___C_CTOR_OFFSET))(this);
		}

		::PHIMNIFMBMI* __cctor_b__28_0()
		{
			return ((::PHIMNIFMBMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMNIFMBMI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
