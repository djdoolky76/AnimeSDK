#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHLNPFDIJLF;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BKHHFIJCHEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7C31F0)
#define BKHHFIJCHEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB7C3230)
#define BKHHFIJCHEP___C__ONUSETACTICSCARDPERFORMANCE_B__34_0_OFFSET UNITYSDK_OFFSET(0xB7C3240)

inline static constexpr unsigned int BKHHFIJCHEP___c_TypeDefinitionIndex = 60380;

	class BKHHFIJCHEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E9A0);
		}

		static ::System::Func_2<::GHLNPFDIJLF*, ::System::String*>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::GHLNPFDIJLF*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E9A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKHHFIJCHEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHHFIJCHEP___C_CTOR_OFFSET))(this);
		}

		::System::String* _OnUseTacticsCardPerformance_b__34_0(::GHLNPFDIJLF* a1)
		{
			return ((::System::String*(*)(::PVOID, ::GHLNPFDIJLF*))((::PBYTE)hIl2Cpp + BKHHFIJCHEP___C__ONUSETACTICSCARDPERFORMANCE_B__34_0_OFFSET))(this, a1);
		}

	};
