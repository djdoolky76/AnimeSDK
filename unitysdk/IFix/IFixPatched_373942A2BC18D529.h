#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_373942A2BC18D529_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5599F0)
#define IFIX_IFIXPATCHED_373942A2BC18D529_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1C53AF70)
#define IFIX_IFIXPATCHED_373942A2BC18D529_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1C559A00)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_373942A2BC18D529_TypeDefinitionIndex = 41916;

	class IFixPatched_373942A2BC18D529 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_373942A2BC18D529_CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_373942A2BC18D529_SETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_373942A2BC18D529_ISPATCHED_OFFSET))(a1);
		}

	};
}
