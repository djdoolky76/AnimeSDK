#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MONJNCPINKN;
namespace System { class Object; }

#define MONJNCPINKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB0A50)
#define MONJNCPINKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB0A90)
#define MONJNCPINKN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAB0AA0)

inline static constexpr unsigned int MONJNCPINKN___c_TypeDefinitionIndex = 29200;

	class MONJNCPINKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AEA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONJNCPINKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJNCPINKN___C_CTOR_OFFSET))(this);
		}

		::MONJNCPINKN* __cctor_b__23_0()
		{
			return ((::MONJNCPINKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONJNCPINKN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
