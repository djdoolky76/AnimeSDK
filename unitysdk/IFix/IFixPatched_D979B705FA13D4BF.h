#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_D979B705FA13D4BF_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1F982850)
#define IFIX_IFIXPATCHED_D979B705FA13D4BF_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1F982810)
#define IFIX_IFIXPATCHED_D979B705FA13D4BF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F982800)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_D979B705FA13D4BF_TypeDefinitionIndex = 95311;

	class IFixPatched_D979B705FA13D4BF : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_D979B705FA13D4BF__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_D979B705FA13D4BF_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_D979B705FA13D4BF_ISPATCHED_OFFSET))(id);
		}
	};
}
