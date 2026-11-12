#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEGIAKADMHP;
namespace System { class Object; }

#define CEGIAKADMHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3584D0)
#define CEGIAKADMHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F358510)
#define CEGIAKADMHP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F358520)

inline static constexpr unsigned int CEGIAKADMHP___c_TypeDefinitionIndex = 30171;

	class CEGIAKADMHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DD90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEGIAKADMHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGIAKADMHP___C_CTOR_OFFSET))(this);
		}

		::CEGIAKADMHP* __cctor_b__23_0()
		{
			return ((::CEGIAKADMHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEGIAKADMHP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
