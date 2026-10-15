#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_3DF268A348537D5E_CCTOR_OFFSET UNITYSDK_OFFSET(0x15F28D00)
#define IFIX_IFIXPATCHED_3DF268A348537D5E_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x15EEFA60)
#define IFIX_IFIXPATCHED_3DF268A348537D5E_SETPATCH_OFFSET UNITYSDK_OFFSET(0x15F28D10)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_3DF268A348537D5E_TypeDefinitionIndex = 82331;

	class IFixPatched_3DF268A348537D5E : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_3DF268A348537D5E_CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_3DF268A348537D5E_SETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_3DF268A348537D5E_ISPATCHED_OFFSET))(a1);
		}

	};
}
