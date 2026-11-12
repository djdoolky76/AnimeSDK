#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class DeformationCasterCleanupMonoPlugin; }

#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD562B40)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD562D10)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_FCADOMJBOGO_OFFSET UNITYSDK_OFFSET(0xD562AB0)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD562C10)
#define RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD5629E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DeformationCasterCleanupBehavior_TypeDefinitionIndex = 72232;

	class DeformationCasterCleanupBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void FCADOMJBOGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_FCADOMJBOGO_OFFSET))(this);
		}

		::RPG::Client::DeformationCasterCleanupMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::DeformationCasterCleanupMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCASTERCLEANUPBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
