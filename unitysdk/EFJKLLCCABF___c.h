#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKLPIMMNFOC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EFJKLLCCABF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x13A51610)
#define EFJKLLCCABF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x13A51650)
#define EFJKLLCCABF___C___ENSURETEAMEDITCONTROLLER_B__12_1_OFFSET UNITYSDK_OFFSET(0x13A51660)

inline static constexpr unsigned int EFJKLLCCABF___c_TypeDefinitionIndex = 60408;

	class EFJKLLCCABF___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::BKLPIMMNFOC*, ::System::Boolean>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::BKLPIMMNFOC*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70090);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFJKLLCCABF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKLLCCABF___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __EnsureTeamEditController_b__12_1(::BKLPIMMNFOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKLPIMMNFOC*))((::PBYTE)hIl2Cpp + EFJKLLCCABF___C___ENSURETEAMEDITCONTROLLER_B__12_1_OFFSET))(this, a1);
		}

	};
