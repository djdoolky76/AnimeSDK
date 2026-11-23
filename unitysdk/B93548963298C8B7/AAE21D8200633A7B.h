#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class FEF0BAEDAF91DFCA;
namespace System { class Object; }

#define B93548963298C8B7_AAE21D8200633A7B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B93548963298C8B7_AAE21D8200633A7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

namespace B93548963298C8B7
{
	inline static constexpr unsigned int AAE21D8200633A7B_TypeDefinitionIndex = 15620;

	class AAE21D8200633A7B : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::FEF0BAEDAF91DFCA* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::FEF0BAEDAF91DFCA*))((::PBYTE)hIl2Cpp + B93548963298C8B7_AAE21D8200633A7B_INVOKE_OFFSET))(this, F220A2D27F7C6B6C);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B93548963298C8B7_AAE21D8200633A7B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
