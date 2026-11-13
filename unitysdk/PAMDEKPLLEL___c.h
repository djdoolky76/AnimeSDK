#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAMDEKPLLEL;
namespace System { class Object; }

#define PAMDEKPLLEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20376EF0)
#define PAMDEKPLLEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20376F30)
#define PAMDEKPLLEL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20376F40)

inline static constexpr unsigned int PAMDEKPLLEL___c_TypeDefinitionIndex = 26517;

	class PAMDEKPLLEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAMDEKPLLEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDEKPLLEL___C_CTOR_OFFSET))(this);
		}

		::PAMDEKPLLEL* __cctor_b__28_0()
		{
			return ((::PAMDEKPLLEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMDEKPLLEL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
