#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_303A303CF7A0DD3F_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1E5EF040)
#define IFIX_IFIXPATCHED_303A303CF7A0DD3F_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1E5EF000)
#define IFIX_IFIXPATCHED_303A303CF7A0DD3F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EEFF0)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_303A303CF7A0DD3F_TypeDefinitionIndex = 34046;

	class IFixPatched_303A303CF7A0DD3F : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_303A303CF7A0DD3F__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_303A303CF7A0DD3F_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_303A303CF7A0DD3F_ISPATCHED_OFFSET))(id);
		}
	};
}
