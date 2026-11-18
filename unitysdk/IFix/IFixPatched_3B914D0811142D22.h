#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_3B914D0811142D22_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x20043B60)
#define IFIX_IFIXPATCHED_3B914D0811142D22_SETPATCH_OFFSET UNITYSDK_OFFSET(0x20043B30)
#define IFIX_IFIXPATCHED_3B914D0811142D22__CCTOR_OFFSET UNITYSDK_OFFSET(0x20043B20)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_3B914D0811142D22_TypeDefinitionIndex = 96717;

	class IFixPatched_3B914D0811142D22 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_3B914D0811142D22__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_3B914D0811142D22_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_3B914D0811142D22_ISPATCHED_OFFSET))(id);
		}
	};
}
