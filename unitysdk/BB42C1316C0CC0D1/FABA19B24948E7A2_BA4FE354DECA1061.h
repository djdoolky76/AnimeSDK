#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define BB42C1316C0CC0D1_FABA19B24948E7A2_BA4FE354DECA1061_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define BB42C1316C0CC0D1_FABA19B24948E7A2_BA4FE354DECA1061__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace BB42C1316C0CC0D1
{
	inline static constexpr unsigned int FABA19B24948E7A2_BA4FE354DECA1061_TypeDefinitionIndex = 17619;

	class FABA19B24948E7A2_BA4FE354DECA1061 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BB42C1316C0CC0D1_FABA19B24948E7A2_BA4FE354DECA1061__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB42C1316C0CC0D1_FABA19B24948E7A2_BA4FE354DECA1061_INVOKE_OFFSET))(this);
		}
	};
}
