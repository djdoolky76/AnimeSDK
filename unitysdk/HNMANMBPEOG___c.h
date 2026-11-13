#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNMANMBPEOG;
namespace System { class Object; }

#define HNMANMBPEOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200357C0)
#define HNMANMBPEOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20035800)
#define HNMANMBPEOG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20035810)

inline static constexpr unsigned int HNMANMBPEOG___c_TypeDefinitionIndex = 34616;

	class HNMANMBPEOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CEB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNMANMBPEOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMANMBPEOG___C_CTOR_OFFSET))(this);
		}

		::HNMANMBPEOG* __cctor_b__28_0()
		{
			return ((::HNMANMBPEOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMANMBPEOG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
