#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_37C718F403972CA9_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1E6BE000)
#define IFIX_IFIXPATCHED_37C718F403972CA9_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1E6BDFC0)
#define IFIX_IFIXPATCHED_37C718F403972CA9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BDFB0)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_37C718F403972CA9_TypeDefinitionIndex = 34038;

	class IFixPatched_37C718F403972CA9 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_37C718F403972CA9__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_37C718F403972CA9_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_37C718F403972CA9_ISPATCHED_OFFSET))(id);
		}
	};
}
