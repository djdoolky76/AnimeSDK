#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_660D3670B84B42A7_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B1D0C0)
#define IFIX_IFIXPATCHED_660D3670B84B42A7_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x15ABCC20)
#define IFIX_IFIXPATCHED_660D3670B84B42A7_SETPATCH_OFFSET UNITYSDK_OFFSET(0x15B1D0D0)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_660D3670B84B42A7_TypeDefinitionIndex = 42575;

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
