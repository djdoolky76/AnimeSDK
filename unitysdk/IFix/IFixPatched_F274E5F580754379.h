#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_F274E5F580754379_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1E211420)
#define IFIX_IFIXPATCHED_F274E5F580754379_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1E2113E0)
#define IFIX_IFIXPATCHED_F274E5F580754379__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2113D0)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_F274E5F580754379_TypeDefinitionIndex = 34426;

	class IFixPatched_F274E5F580754379 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_F274E5F580754379__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_F274E5F580754379_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_F274E5F580754379_ISPATCHED_OFFSET))(id);
		}
	};
}
