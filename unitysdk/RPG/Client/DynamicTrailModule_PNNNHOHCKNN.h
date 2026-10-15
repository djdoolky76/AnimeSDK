#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DYNAMICTRAILMODULE_PNNNHOHCKNN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD07630)
#define RPG_CLIENT_DYNAMICTRAILMODULE_PNNNHOHCKNN_PIPAEGBCBIN_OFFSET UNITYSDK_OFFSET(0xCD07640)
#define RPG_CLIENT_DYNAMICTRAILMODULE_PNNNHOHCKNN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xCD077F0)

namespace RPG::Client
{
	class DynamicTrailModule_PNNNHOHCKNN : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* OGPNODHENKN; // 0x10
		::Il2CppArray<::System::Single>* JPDBDLEEHGK; // 0x18
		::Il2CppArray<::System::Single>* OGDIJEEIOCG; // 0x20
		::Il2CppArray<::System::Single>* BPAJHNDPGKG; // 0x28
		::Il2CppArray<::System::Single>* KIBPKPGDECO; // 0x30
		::Il2CppArray<::System::Single>* EIBGEGPABFK; // 0x38
		::Il2CppArray<::System::Single>* PICLIGEAJFN; // 0x40
		::Il2CppArray<::System::Single>* HLMJFIOJLNF; // 0x48
		::Il2CppArray<::System::Single>* IMBNIMPKJHE; // 0x50
		::Il2CppArray<::System::Single>* KCBPBMOJOKJ; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_PNNNHOHCKNN_CTOR_OFFSET))(this);
		}

		::System::Void PIPAEGBCBIN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_PNNNHOHCKNN_PIPAEGBCBIN_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_PNNNHOHCKNN_PJPFIHFAHGO_OFFSET))(this);
		}

	};
}
