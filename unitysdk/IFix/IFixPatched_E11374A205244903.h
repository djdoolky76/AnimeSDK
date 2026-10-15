#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_E11374A205244903_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C66C900)
#define IFIX_IFIXPATCHED_E11374A205244903_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1C6371F0)
#define IFIX_IFIXPATCHED_E11374A205244903_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1C66C910)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_E11374A205244903_TypeDefinitionIndex = 37453;

	class IFixPatched_E11374A205244903 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_E11374A205244903_CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_E11374A205244903_SETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_E11374A205244903_ISPATCHED_OFFSET))(a1);
		}

	};
}
