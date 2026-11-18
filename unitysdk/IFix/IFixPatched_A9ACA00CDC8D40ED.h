#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_IFIXPATCHED_A9ACA00CDC8D40ED_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1FB11F40)
#define IFIX_IFIXPATCHED_A9ACA00CDC8D40ED_SETPATCH_OFFSET UNITYSDK_OFFSET(0x1FB11F00)
#define IFIX_IFIXPATCHED_A9ACA00CDC8D40ED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB11EF0)

namespace IFix
{
	inline static constexpr unsigned int IFixPatched_A9ACA00CDC8D40ED_TypeDefinitionIndex = 28672;

	class IFixPatched_A9ACA00CDC8D40ED : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_A9ACA00CDC8D40ED__CCTOR_OFFSET))();
		}

		static ::System::Void SetPatch(::Il2CppArray<::System::Boolean>* maps)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_A9ACA00CDC8D40ED_SETPATCH_OFFSET))(maps);
		}

		static ::System::Boolean IsPatched(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_IFIXPATCHED_A9ACA00CDC8D40ED_ISPATCHED_OFFSET))(id);
		}
	};
}
