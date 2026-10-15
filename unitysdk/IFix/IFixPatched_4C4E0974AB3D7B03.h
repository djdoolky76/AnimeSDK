#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_4C4E0974AB3D7B03_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB0CCE0)
#define IFIX_IFIXPATCHED_4C4E0974AB3D7B03_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1CAFCE40)
#define IFIX_IFIXPATCHED_4C4E0974AB3D7B03_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1CB0CCF0)

namespace IFix
{
	class IFixPatched_4C4E0974AB3D7B03 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_4C4E0974AB3D7B03_CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_4C4E0974AB3D7B03_SETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_4C4E0974AB3D7B03_ISPATCHED_OFFSET))(a1);
		}

	};
}
