#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIBEHFDDAAJ;
namespace System { class Object; }

#define PIBEHFDDAAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF13460)
#define PIBEHFDDAAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF134A0)
#define PIBEHFDDAAJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF134B0)

inline static constexpr unsigned int PIBEHFDDAAJ___c_TypeDefinitionIndex = 26750;

	class PIBEHFDDAAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIBEHFDDAAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ___C_CTOR_OFFSET))(this);
		}

		::PIBEHFDDAAJ* __cctor_b__28_0()
		{
			return ((::PIBEHFDDAAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
