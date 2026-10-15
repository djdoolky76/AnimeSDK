#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class DynamicTrailModule_PNNNHOHCKNN; }

#define RPG_CLIENT_DYNAMICTRAILMODULE_CHFHAKMMMGD_CTOR_OFFSET UNITYSDK_OFFSET(0xCCFD5B0)
#define RPG_CLIENT_DYNAMICTRAILMODULE_CHFHAKMMMGD_PIPAEGBCBIN_OFFSET UNITYSDK_OFFSET(0xCCFDB90)
#define RPG_CLIENT_DYNAMICTRAILMODULE_CHFHAKMMMGD_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xCCFE500)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicTrailModule_CHFHAKMMMGD_TypeDefinitionIndex = 70445;

	class DynamicTrailModule_CHFHAKMMMGD : public ::System::Object
	{
	public:
		::RPG::Client::DynamicTrailModule_PNNNHOHCKNN* EBJKJAGJGPK; // 0x10
		::RPG::Client::DynamicTrailModule_PNNNHOHCKNN* GAOAMKBNDPN; // 0x18
		::RPG::Client::DynamicTrailModule_PNNNHOHCKNN* KIBPKPGDECO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CHFHAKMMMGD_CTOR_OFFSET))(this);
		}

		::System::Void PIPAEGBCBIN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CHFHAKMMMGD_PIPAEGBCBIN_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICTRAILMODULE_CHFHAKMMMGD_PJPFIHFAHGO_OFFSET))(this);
		}

	};
}
