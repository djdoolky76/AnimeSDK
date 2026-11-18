#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_6D3AB4D38277DE99_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1CE98170)
#define IFIX_IFIXPATCHED_6D3AB4D38277DE99_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1CE98130)
#define IFIX_IFIXPATCHED_6D3AB4D38277DE99__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE98120)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_6D3AB4D38277DE99_TypeDefinitionIndex = 34776;

	class IFixPatched_6D3AB4D38277DE99 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_6D3AB4D38277DE99__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_6D3AB4D38277DE99_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_6D3AB4D38277DE99_ISPATCHED_OFFSET))(id);
		}
	};
}
