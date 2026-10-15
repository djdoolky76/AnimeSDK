#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEEJHBCIGGI;
class CNBNDKINGBF;
namespace RPG::Client::MechCraft::View { class MechCraftTalentPathUnlockDisplayData; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATAPROVIDER_CTOR_OFFSET UNITYSDK_OFFSET(0xD66A980)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATAPROVIDER_GETDATA_OFFSET UNITYSDK_OFFSET(0xD66AA40)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentPathUnlockDisplayDataProvider_TypeDefinitionIndex = 79982;

	class MechCraftTalentPathUnlockDisplayDataProvider : public ::System::Object
	{
	public:
		::BEEJHBCIGGI* _ActorConfigRepository; // 0x10
		::CNBNDKINGBF* _TalentPathConfigRepository; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATAPROVIDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentPathUnlockDisplayData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentPathUnlockDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTPATHUNLOCKDISPLAYDATAPROVIDER_GETDATA_OFFSET))(this, a1);
		}

	};
}
