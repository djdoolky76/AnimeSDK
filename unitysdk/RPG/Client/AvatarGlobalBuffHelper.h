#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPCGKDGGJHM;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarGlobalBuffDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARGLOBALBUFFHELPER_GETBUFFTABGLOBALBUFFS_OFFSET UNITYSDK_OFFSET(0x1A4C4DF0)
#define RPG_CLIENT_AVATARGLOBALBUFFHELPER_GETGLOBALBUFFPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A4C47F0)
#define RPG_CLIENT_AVATARGLOBALBUFFHELPER_GETSHOWGLOBALBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4C57B0)
#define RPG_CLIENT_AVATARGLOBALBUFFHELPER__CHECKISDISABLEDBYPLAYER_OFFSET UNITYSDK_OFFSET(0x1A4C5720)
#define RPG_CLIENT_AVATARGLOBALBUFFHELPER__TRYCREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1A4C5560)
#define RPG_CLIENT_AVATARGLOBALBUFFHELPER__TRYGETSTATESTORE_OFFSET UNITYSDK_OFFSET(0x1A4C54D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGlobalBuffHelper_TypeDefinitionIndex = 64188;

	class AvatarGlobalBuffHelper : public ::System::Object
	{
	public:
		static ::RPG::AvatarSystem::IAvatar* GetGlobalBuffProvider(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGLOBALBUFFHELPER_GETGLOBALBUFFPROVIDER_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::AvatarGlobalBuffDisplayData*>* GetBuffTabGlobalBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarGlobalBuffDisplayData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGLOBALBUFFHELPER_GETBUFFTABGLOBALBUFFS_OFFSET))();
		}

		static ::System::Int32 GetShowGlobalBuffCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGLOBALBUFFHELPER_GETSHOWGLOBALBUFFCOUNT_OFFSET))();
		}

		static ::IPCGKDGGJHM* _TryGetStateStore()
		{
			return ((::IPCGKDGGJHM*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGLOBALBUFFHELPER__TRYGETSTATESTORE_OFFSET))();
		}

		static ::RPG::Client::AvatarGlobalBuffDisplayData* _TryCreateDisplayData(::System::UInt32 a1)
		{
			return ((::RPG::Client::AvatarGlobalBuffDisplayData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGLOBALBUFFHELPER__TRYCREATEDISPLAYDATA_OFFSET))(a1);
		}

		static ::System::Boolean _CheckIsDisabledByPlayer(::RPG::Client::AvatarGlobalBuffDisplayData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarGlobalBuffDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGLOBALBUFFHELPER__CHECKISDISABLEDBYPLAYER_OFFSET))(a1);
		}

	};
}
