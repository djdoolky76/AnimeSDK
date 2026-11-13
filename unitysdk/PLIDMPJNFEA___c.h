#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLIDMPJNFEA;
namespace System { class Object; }

#define PLIDMPJNFEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201EEA00)
#define PLIDMPJNFEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201EEA40)
#define PLIDMPJNFEA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x201EEA50)

inline static constexpr unsigned int PLIDMPJNFEA___c_TypeDefinitionIndex = 33650;

	class PLIDMPJNFEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46BB0);
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
