#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_386A48036F044B0F_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1FC7C9E0)
#define IFIX_IFIXPATCHED_386A48036F044B0F_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1FC7C9A0)
#define IFIX_IFIXPATCHED_386A48036F044B0F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC7C990)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_386A48036F044B0F_TypeDefinitionIndex = 18566;

	class IFixPatched_386A48036F044B0F : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_386A48036F044B0F__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_386A48036F044B0F_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_386A48036F044B0F_ISPATCHED_OFFSET))(id);
		}
	};
}
