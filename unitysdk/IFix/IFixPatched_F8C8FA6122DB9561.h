#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_F8C8FA6122DB9561_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1E3B26F0)
#define IFIX_IFIXPATCHED_F8C8FA6122DB9561_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1E3B26B0)
#define IFIX_IFIXPATCHED_F8C8FA6122DB9561__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B26A0)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_F8C8FA6122DB9561_TypeDefinitionIndex = 94852;

	class IFixPatched_F8C8FA6122DB9561 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_F8C8FA6122DB9561__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_F8C8FA6122DB9561_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_F8C8FA6122DB9561_ISPATCHED_OFFSET))(id);
		}
	};
}
