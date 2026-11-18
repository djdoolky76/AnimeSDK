#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_7ABB2EFEE5C51BBC_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1D569800)
#define IFIX_IFIXPATCHED_7ABB2EFEE5C51BBC_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1D5697C0)
#define IFIX_IFIXPATCHED_7ABB2EFEE5C51BBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5697B0)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_7ABB2EFEE5C51BBC_TypeDefinitionIndex = 38053;

	class IFixPatched_7ABB2EFEE5C51BBC : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_7ABB2EFEE5C51BBC__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_7ABB2EFEE5C51BBC_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_7ABB2EFEE5C51BBC_ISPATCHED_OFFSET))(id);
		}
	};
}
