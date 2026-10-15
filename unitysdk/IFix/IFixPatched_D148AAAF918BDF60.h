#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_D148AAAF918BDF60_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C504820)
#define IFIX_IFIXPATCHED_D148AAAF918BDF60_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1C5010E0)
#define IFIX_IFIXPATCHED_D148AAAF918BDF60_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1C504830)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_D148AAAF918BDF60_TypeDefinitionIndex = 41629;

	class IFixPatched_D148AAAF918BDF60 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_D148AAAF918BDF60_CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_D148AAAF918BDF60_SETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_D148AAAF918BDF60_ISPATCHED_OFFSET))(a1);
		}

	};
}
