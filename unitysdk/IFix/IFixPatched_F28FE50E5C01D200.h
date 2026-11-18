#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_F28FE50E5C01D200_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1FA43AB0)
#define IFIX_IFIXPATCHED_F28FE50E5C01D200_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1FA43A70)
#define IFIX_IFIXPATCHED_F28FE50E5C01D200__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA43A60)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_F28FE50E5C01D200_TypeDefinitionIndex = 96654;

	class IFixPatched_F28FE50E5C01D200 : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_F28FE50E5C01D200__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_F28FE50E5C01D200_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_F28FE50E5C01D200_ISPATCHED_OFFSET))(id);
		}
	};
}
