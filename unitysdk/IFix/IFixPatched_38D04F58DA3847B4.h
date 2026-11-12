#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_38D04F58DA3847B4_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCD1750)
#define IFIX_IFIXPATCHED_38D04F58DA3847B4_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1DCBDB30)
#define IFIX_IFIXPATCHED_38D04F58DA3847B4_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1DCD1760)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_38D04F58DA3847B4_TypeDefinitionIndex = 44886;

	class IFixPatched_38D04F58DA3847B4 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_38D04F58DA3847B4_CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_38D04F58DA3847B4_SETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_38D04F58DA3847B4_ISPATCHED_OFFSET))(a1);
		}

	};
}
