#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_234FF26E41C842F5_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1D03E080)
#define IFIX_IFIXPATCHED_234FF26E41C842F5_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1D03E040)
#define IFIX_IFIXPATCHED_234FF26E41C842F5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D03E030)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_234FF26E41C842F5_TypeDefinitionIndex = 17898;

	class IFixPatched_234FF26E41C842F5 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_234FF26E41C842F5__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_234FF26E41C842F5_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_234FF26E41C842F5_ISPATCHED_OFFSET))(id);
		}
	};
}
