#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_DCF6B01650933E45_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x153A5BA0)
#define IFIX_IFIXPATCHED_DCF6B01650933E45_SETPATCH_OFFSET UNITYSDK_OFFSET(0x153A5B60)
#define IFIX_IFIXPATCHED_DCF6B01650933E45__CCTOR_OFFSET UNITYSDK_OFFSET(0x153A5B50)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_DCF6B01650933E45_TypeDefinitionIndex = 45580;

	class IFixPatched_DCF6B01650933E45 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_DCF6B01650933E45__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_DCF6B01650933E45_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_DCF6B01650933E45_ISPATCHED_OFFSET))(id);
		}
	};
}
