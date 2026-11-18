#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_43B137D9CDB06E87_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1EA3B0C0)
#define IFIX_IFIXPATCHED_43B137D9CDB06E87_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1EA3B080)
#define IFIX_IFIXPATCHED_43B137D9CDB06E87__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA3B070)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_43B137D9CDB06E87_TypeDefinitionIndex = 26722;

	class IFixPatched_43B137D9CDB06E87 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_43B137D9CDB06E87__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_43B137D9CDB06E87_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_43B137D9CDB06E87_ISPATCHED_OFFSET))(id);
		}
	};
}
