#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIBOMOCKACA;
namespace System { class Object; }

#define PIBOMOCKACA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF41CE0)
#define PIBOMOCKACA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF41D20)
#define PIBOMOCKACA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF41D30)

inline static constexpr unsigned int PIBOMOCKACA___c_TypeDefinitionIndex = 33068;

	class PIBOMOCKACA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIBOMOCKACA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBOMOCKACA___C_CTOR_OFFSET))(this);
		}

		::PIBOMOCKACA* __cctor_b__23_0()
		{
			return ((::PIBOMOCKACA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBOMOCKACA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
