#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLIDMPJNFEA;
namespace System { class Object; }

#define PLIDMPJNFEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA2CF0)
#define PLIDMPJNFEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA2D30)
#define PLIDMPJNFEA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFA2D40)

inline static constexpr unsigned int PLIDMPJNFEA___c_TypeDefinitionIndex = 32735;

	class PLIDMPJNFEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLIDMPJNFEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLIDMPJNFEA___C_CTOR_OFFSET))(this);
		}

		::PLIDMPJNFEA* __cctor_b__28_0()
		{
			return ((::PLIDMPJNFEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLIDMPJNFEA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
