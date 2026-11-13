#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDAIHHGGPIJ;
namespace System { class Object; }

#define IDAIHHGGPIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20132FA0)
#define IDAIHHGGPIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20132FE0)
#define IDAIHHGGPIJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20132FF0)

inline static constexpr unsigned int IDAIHHGGPIJ___c_TypeDefinitionIndex = 33081;

	class IDAIHHGGPIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDAIHHGGPIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ___C_CTOR_OFFSET))(this);
		}

		::IDAIHHGGPIJ* __cctor_b__23_0()
		{
			return ((::IDAIHHGGPIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAIHHGGPIJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
