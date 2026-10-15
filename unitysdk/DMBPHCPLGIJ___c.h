#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMBPHCPLGIJ;
namespace System { class Object; }

#define DMBPHCPLGIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BCC20)
#define DMBPHCPLGIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BCC60)
#define DMBPHCPLGIJ___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1E1BCC70)

inline static constexpr unsigned int DMBPHCPLGIJ___c_TypeDefinitionIndex = 30079;

	class DMBPHCPLGIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMBPHCPLGIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ___C_CTOR_OFFSET))(this);
		}

		::DMBPHCPLGIJ* __cctor_b__37_0()
		{
			return ((::DMBPHCPLGIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBPHCPLGIJ___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
