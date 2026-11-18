#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_3E1DB2F9673F7E4C_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1FDBAC70)
#define IFIX_IFIXPATCHED_3E1DB2F9673F7E4C_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1FDBAC30)
#define IFIX_IFIXPATCHED_3E1DB2F9673F7E4C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDBAC20)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_3E1DB2F9673F7E4C_TypeDefinitionIndex = 28310;

	class IFixPatched_3E1DB2F9673F7E4C : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_3E1DB2F9673F7E4C__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_3E1DB2F9673F7E4C_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_3E1DB2F9673F7E4C_ISPATCHED_OFFSET))(id);
		}
	};
}
