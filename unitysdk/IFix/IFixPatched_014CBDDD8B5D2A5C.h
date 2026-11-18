#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_014CBDDD8B5D2A5C_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1FA7DFD0)
#define IFIX_IFIXPATCHED_014CBDDD8B5D2A5C_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1FA7DF70)
#define IFIX_IFIXPATCHED_014CBDDD8B5D2A5C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA7DF60)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_014CBDDD8B5D2A5C_TypeDefinitionIndex = 17983;

	class IFixPatched_014CBDDD8B5D2A5C : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_014CBDDD8B5D2A5C__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_014CBDDD8B5D2A5C_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_014CBDDD8B5D2A5C_ISPATCHED_OFFSET))(id);
		}
	};
}
