#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BA6A30046E72CB9F;
class FAE12D83ADC9E423;
namespace System { class Object; }
namespace System { class String; }

#define FE82B7B4F269AB02_BD4459FCE7D59D0F_INVOKE_OFFSET UNITYSDK_OFFSET(0x2911D30)
#define FE82B7B4F269AB02_BD4459FCE7D59D0F__CTOR_OFFSET UNITYSDK_OFFSET(0x3E34A70)

namespace FE82B7B4F269AB02
{
	inline static constexpr unsigned int BD4459FCE7D59D0F_TypeDefinitionIndex = 15308;

	class BD4459FCE7D59D0F : public ::System::MulticastDelegate
	{
	public:
		::BA6A30046E72CB9F* Invoke(::System::Object* AD0CAFBAFB8B01EA, ::System::String* B18146D362A5F617, ::FAE12D83ADC9E423* B936BBABF749AA55, ::BA6A30046E72CB9F* F06FA57203B18255, ::Il2CppArray<::System::String*>* F511FAFA17D0D19A)
		{
			return ((::BA6A30046E72CB9F*(*)(::PVOID, ::System::Object*, ::System::String*, ::FAE12D83ADC9E423*, ::BA6A30046E72CB9F*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + FE82B7B4F269AB02_BD4459FCE7D59D0F_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA, B18146D362A5F617, B936BBABF749AA55, F06FA57203B18255, F511FAFA17D0D19A);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FE82B7B4F269AB02_BD4459FCE7D59D0F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
