#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_6355829ADB8E5F42_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1F0146A0)
#define IFIX_IFIXPATCHED_6355829ADB8E5F42_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1F014660)
#define IFIX_IFIXPATCHED_6355829ADB8E5F42__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F014650)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_6355829ADB8E5F42_TypeDefinitionIndex = 36078;

	class IFixPatched_6355829ADB8E5F42 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_6355829ADB8E5F42__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_6355829ADB8E5F42_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_6355829ADB8E5F42_ISPATCHED_OFFSET))(id);
		}
	};
}
