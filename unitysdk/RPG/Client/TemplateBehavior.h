#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class TemplateMonoPlugin; }

#define RPG_CLIENT_TEMPLATEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE207E70)
#define RPG_CLIENT_TEMPLATEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE208050)
#define RPG_CLIENT_TEMPLATEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE207FD0)
#define RPG_CLIENT_TEMPLATEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE207D50)
#define RPG_CLIENT_TEMPLATEBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE207E10)
#define RPG_CLIENT_TEMPLATEBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xE207F70)
#define RPG_CLIENT_TEMPLATEBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE207F10)
#define RPG_CLIENT_TEMPLATEBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE207DB0)
#define RPG_CLIENT_TEMPLATEBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE207ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int TemplateBehavior_TypeDefinitionIndex = 70777;

	class TemplateBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPLATEBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPLATEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPLATEBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPLATEBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPLATEBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPLATEBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPLATEBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPLATEBEHAVIOR_MHFNJCLKNMG_OFFSET))(this);
		}

		::RPG::Client::TemplateMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::TemplateMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEMPLATEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
