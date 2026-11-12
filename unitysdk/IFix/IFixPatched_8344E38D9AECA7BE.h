#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_8344E38D9AECA7BE_CCTOR_OFFSET UNITYSDK_OFFSET(0x208CE380)
#define IFIX_IFIXPATCHED_8344E38D9AECA7BE_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x208B5330)
#define IFIX_IFIXPATCHED_8344E38D9AECA7BE_SETPATCH_OFFSET UNITYSDK_OFFSET(0x208CE390)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_8344E38D9AECA7BE_TypeDefinitionIndex = 46062;

	class IFixPatched_8344E38D9AECA7BE : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_8344E38D9AECA7BE_CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_8344E38D9AECA7BE_SETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_8344E38D9AECA7BE_ISPATCHED_OFFSET))(a1);
		}

	};
}
