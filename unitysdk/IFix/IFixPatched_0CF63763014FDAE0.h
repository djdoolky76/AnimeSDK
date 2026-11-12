#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_0CF63763014FDAE0_CCTOR_OFFSET UNITYSDK_OFFSET(0x16EA3E50)
#define IFIX_IFIXPATCHED_0CF63763014FDAE0_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x16E68870)
#define IFIX_IFIXPATCHED_0CF63763014FDAE0_SETPATCH_OFFSET UNITYSDK_OFFSET(0x16EA3E60)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_0CF63763014FDAE0_TypeDefinitionIndex = 85208;

	class IFixPatched_0CF63763014FDAE0 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_0CF63763014FDAE0_CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_0CF63763014FDAE0_SETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_0CF63763014FDAE0_ISPATCHED_OFFSET))(a1);
		}

	};
}
