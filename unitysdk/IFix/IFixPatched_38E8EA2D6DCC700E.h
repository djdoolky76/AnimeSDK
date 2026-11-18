#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_38E8EA2D6DCC700E_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1F533650)
#define IFIX_IFIXPATCHED_38E8EA2D6DCC700E_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1F5335E0)
#define IFIX_IFIXPATCHED_38E8EA2D6DCC700E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5335D0)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_38E8EA2D6DCC700E_TypeDefinitionIndex = 37754;

	class IFixPatched_38E8EA2D6DCC700E : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_38E8EA2D6DCC700E__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_38E8EA2D6DCC700E_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_38E8EA2D6DCC700E_ISPATCHED_OFFSET))(id);
		}
	};
}
