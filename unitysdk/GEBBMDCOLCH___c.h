#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEBBMDCOLCH;
namespace System { class Object; }

#define GEBBMDCOLCH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2023C790)
#define GEBBMDCOLCH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2023C7D0)
#define GEBBMDCOLCH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2023C7E0)

inline static constexpr unsigned int GEBBMDCOLCH___c_TypeDefinitionIndex = 30066;

	class GEBBMDCOLCH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEBBMDCOLCH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBBMDCOLCH___C_CTOR_OFFSET))(this);
		}

		::GEBBMDCOLCH* __cctor_b__23_0()
		{
			return ((::GEBBMDCOLCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBBMDCOLCH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
