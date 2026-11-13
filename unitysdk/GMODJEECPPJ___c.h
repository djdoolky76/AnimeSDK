#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMODJEECPPJ;
namespace System { class Object; }

#define GMODJEECPPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDF72F0)
#define GMODJEECPPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDF7330)
#define GMODJEECPPJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FDF7340)

inline static constexpr unsigned int GMODJEECPPJ___c_TypeDefinitionIndex = 32874;

	class GMODJEECPPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMODJEECPPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODJEECPPJ___C_CTOR_OFFSET))(this);
		}

		::GMODJEECPPJ* __cctor_b__38_0()
		{
			return ((::GMODJEECPPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODJEECPPJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
