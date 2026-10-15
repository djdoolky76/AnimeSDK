#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCBLIKPEEJA;
namespace System { class Object; }

#define PCBLIKPEEJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF014A0)
#define PCBLIKPEEJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF014E0)
#define PCBLIKPEEJA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DF014F0)

inline static constexpr unsigned int PCBLIKPEEJA___c_TypeDefinitionIndex = 25761;

	class PCBLIKPEEJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCBLIKPEEJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA___C_CTOR_OFFSET))(this);
		}

		::PCBLIKPEEJA* __cctor_b__43_0()
		{
			return ((::PCBLIKPEEJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLIKPEEJA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
