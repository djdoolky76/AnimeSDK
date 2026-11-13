#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_30C7E162519C18D8_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC30FB0)
#define IFIX_IFIXPATCHED_30C7E162519C18D8_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1BBF5880)
#define IFIX_IFIXPATCHED_30C7E162519C18D8_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1BC30FC0)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_30C7E162519C18D8_TypeDefinitionIndex = 85207;

	class IFixPatched_30C7E162519C18D8 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_30C7E162519C18D8_CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_30C7E162519C18D8_SETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_30C7E162519C18D8_ISPATCHED_OFFSET))(a1);
		}

	};
}
