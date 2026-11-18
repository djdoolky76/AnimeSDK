#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIEDOGIBIMC;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_MLIAKOBLJMC_CLGFKBLCPBH_OFFSET UNITYSDK_OFFSET(0x162CF870)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_MLIAKOBLJMC__CTOR_OFFSET UNITYSDK_OFFSET(0x162CF860)

namespace MoleMole
{
	inline static constexpr unsigned int GroupChallengeConfigManager_MLIAKOBLJMC_TypeDefinitionIndex = 51487;

	class GroupChallengeConfigManager_MLIAKOBLJMC : public ::System::Object
	{
	public:
		::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
		::System::Action_1<::GIEDOGIBIMC*>* AMHGBGMOMLL; // 0x18
		::System::Int32 HBINAGPODHA; // 0x20
		::System::Single KKIAHJODOIA; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_MLIAKOBLJMC__CTOR_OFFSET))(this);
		}

		::System::Void CLGFKBLCPBH(::GIEDOGIBIMC* DFMKILICPFB)
		{
			return ((::System::Void(*)(::PVOID, ::GIEDOGIBIMC*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_MLIAKOBLJMC_CLGFKBLCPBH_OFFSET))(this, DFMKILICPFB);
		}
	};
}
