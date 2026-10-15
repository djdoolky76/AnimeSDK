#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JNLFJMBAKKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB285030)
#define JNLFJMBAKKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB285070)
#define JNLFJMBAKKA___C__HANDLEENTERED_B__13_0_OFFSET UNITYSDK_OFFSET(0xB285080)

inline static constexpr unsigned int JNLFJMBAKKA___c_TypeDefinitionIndex = 79534;

	class JNLFJMBAKKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23710);
		}

		static ::System::Func_2<::CHGHIALKMFM*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::CHGHIALKMFM*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNLFJMBAKKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLFJMBAKKA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _HandleEntered_b__13_0(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + JNLFJMBAKKA___C__HANDLEENTERED_B__13_0_OFFSET))(this, a1);
		}

	};
