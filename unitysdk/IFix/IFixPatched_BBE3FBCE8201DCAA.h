#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_BBE3FBCE8201DCAA_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1F9DDB30)
#define IFIX_IFIXPATCHED_BBE3FBCE8201DCAA_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1F9DDAF0)
#define IFIX_IFIXPATCHED_BBE3FBCE8201DCAA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9DDAE0)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_BBE3FBCE8201DCAA_TypeDefinitionIndex = 36702;

	class IFixPatched_BBE3FBCE8201DCAA : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_BBE3FBCE8201DCAA__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_BBE3FBCE8201DCAA_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_BBE3FBCE8201DCAA_ISPATCHED_OFFSET))(id);
		}
	};
}
