#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BA6A30046E72CB9F;
class FAE12D83ADC9E423;
namespace System { class Object; }
namespace System { class String; }

#define B40A70FA46516148_BDF2BAAABDE49C20_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define B40A70FA46516148_BDF2BAAABDE49C20__CTOR_OFFSET UNITYSDK_OFFSET(0x3B3A1C0)

namespace B40A70FA46516148
{
	inline static constexpr unsigned int BDF2BAAABDE49C20_TypeDefinitionIndex = 19343;

	class BDF2BAAABDE49C20 : public ::System::MulticastDelegate
	{
	public:
		::BA6A30046E72CB9F* Invoke(::System::String* B18146D362A5F617, ::FAE12D83ADC9E423* B936BBABF749AA55, ::BA6A30046E72CB9F* F06FA57203B18255, ::Il2CppArray<::System::String*>* F511FAFA17D0D19A)
		{
			return ((::BA6A30046E72CB9F*(*)(::PVOID, ::System::String*, ::FAE12D83ADC9E423*, ::BA6A30046E72CB9F*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + B40A70FA46516148_BDF2BAAABDE49C20_INVOKE_OFFSET))(this, B18146D362A5F617, B936BBABF749AA55, F06FA57203B18255, F511FAFA17D0D19A);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B40A70FA46516148_BDF2BAAABDE49C20__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
