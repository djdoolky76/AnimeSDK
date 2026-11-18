#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_AF05784930668AB7_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1107BCB0)
#define IFIX_IFIXPATCHED_AF05784930668AB7_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1107BC20)
#define IFIX_IFIXPATCHED_AF05784930668AB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1107BC10)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_AF05784930668AB7_TypeDefinitionIndex = 96748;

	class IFixPatched_AF05784930668AB7 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_AF05784930668AB7__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_AF05784930668AB7_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_AF05784930668AB7_ISPATCHED_OFFSET))(id);
		}
	};
}
