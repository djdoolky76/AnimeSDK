#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_ECA570BA9F9DA484_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1AB7BCF0)
#define IFIX_IFIXPATCHED_ECA570BA9F9DA484_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1AB7BCB0)
#define IFIX_IFIXPATCHED_ECA570BA9F9DA484__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB7BCA0)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_ECA570BA9F9DA484_TypeDefinitionIndex = 24777;

	class IFixPatched_ECA570BA9F9DA484 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_ECA570BA9F9DA484__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_ECA570BA9F9DA484_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_ECA570BA9F9DA484_ISPATCHED_OFFSET))(id);
		}
	};
}
