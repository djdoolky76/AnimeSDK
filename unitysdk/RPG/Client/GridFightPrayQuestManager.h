#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class AFCBKJEFKPG;
class FBFODNFGMKG;
class HJCAJKHNCDH;
class MCNFDKKKABH;
namespace RPG::Client { class GridFightPrayQuest; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC38310)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_GETQUESTBYPETPALEFFECTID_OFFSET UNITYSDK_OFFSET(0xDC37A50)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_GETQUEST_OFFSET UNITYSDK_OFFSET(0xDC37880)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xDC37540)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xDC37C20)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC381B0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER__ADDORUPDATEPRAYQUEST_OFFSET UNITYSDK_OFFSET(0xDC38030)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuestManager_TypeDefinitionIndex = 66759;

	class GridFightPrayQuestManager : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPrayQuest*>* _AllPrayQuestByID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPrayQuest* GetQuest(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPrayQuest*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_GETQUEST_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPrayQuest* GetQuestByPetPalEffectID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPrayQuest*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_GETQUESTBYPETPALEFFECTID_OFFSET))(this, a1);
		}

		::System::Void Sync(::MCNFDKKKABH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCNFDKKKABH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_SYNC_OFFSET))(this, a1);
		}

		::System::Void Update(::HJCAJKHNCDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJCAJKHNCDH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER_UPDATE_OFFSET))(this, a1);
		}

		::System::Void _AddOrUpdatePrayQuest(::AFCBKJEFKPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFCBKJEFKPG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTMANAGER__ADDORUPDATEPRAYQUEST_OFFSET))(this, a1);
		}

	};
}
