#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHIMNIFMBMI;
namespace System { class Object; }

#define PHIMNIFMBMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0FD40)
#define PHIMNIFMBMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0FD80)
#define PHIMNIFMBMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF0FD90)

inline static constexpr unsigned int PHIMNIFMBMI___c_TypeDefinitionIndex = 26648;

	class PHIMNIFMBMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33E00);
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
