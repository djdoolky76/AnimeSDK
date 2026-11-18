#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_2DA2889A36F1DB67_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1CDE5D60)
#define IFIX_IFIXPATCHED_2DA2889A36F1DB67_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1CDE5D20)
#define IFIX_IFIXPATCHED_2DA2889A36F1DB67__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDE5D10)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_2DA2889A36F1DB67_TypeDefinitionIndex = 35958;

	class IFixPatched_2DA2889A36F1DB67 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_2DA2889A36F1DB67__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_2DA2889A36F1DB67_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_2DA2889A36F1DB67_ISPATCHED_OFFSET))(id);
		}
	};
}
