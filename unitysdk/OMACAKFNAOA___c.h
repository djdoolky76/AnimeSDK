#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMACAKFNAOA;
namespace System { class Object; }

#define OMACAKFNAOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAEB70)
#define OMACAKFNAOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAEBA0)
#define OMACAKFNAOA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEAEBB0)

inline static constexpr unsigned int OMACAKFNAOA___c_TypeDefinitionIndex = 33143;

	class OMACAKFNAOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMACAKFNAOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMACAKFNAOA___C_CTOR_OFFSET))(this);
		}

		::OMACAKFNAOA* __cctor_b__23_0()
		{
			return ((::OMACAKFNAOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMACAKFNAOA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
