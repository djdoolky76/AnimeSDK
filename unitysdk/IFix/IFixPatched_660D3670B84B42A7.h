#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_660D3670B84B42A7_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C48B830)
#define IFIX_IFIXPATCHED_660D3670B84B42A7_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1C428640)
#define IFIX_IFIXPATCHED_660D3670B84B42A7_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1C48B840)

namespace IFix
{
	class IFixPatched_660D3670B84B42A7 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_660D3670B84B42A7_CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_660D3670B84B42A7_SETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_660D3670B84B42A7_ISPATCHED_OFFSET))(a1);
		}

	};
}
