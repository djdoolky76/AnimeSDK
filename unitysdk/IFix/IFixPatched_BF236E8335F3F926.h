#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_BF236E8335F3F926_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1DAC1050)
#define IFIX_IFIXPATCHED_BF236E8335F3F926_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1DAC1010)
#define IFIX_IFIXPATCHED_BF236E8335F3F926__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAC1000)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_BF236E8335F3F926_TypeDefinitionIndex = 94166;

	class IFixPatched_BF236E8335F3F926 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_BF236E8335F3F926__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_BF236E8335F3F926_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_BF236E8335F3F926_ISPATCHED_OFFSET))(id);
		}
	};
}
