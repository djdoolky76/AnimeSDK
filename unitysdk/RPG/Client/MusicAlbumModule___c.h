#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MusicAlbumGroupData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MUSICALBUMMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD90A8D0)
#define RPG_CLIENT_MUSICALBUMMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD90A910)
#define RPG_CLIENT_MUSICALBUMMODULE___C__GETUNLOCKMUSICALBUMGROUPDATAS_B__12_0_OFFSET UNITYSDK_OFFSET(0xD90A920)

namespace RPG::Client
{
	class MusicAlbumModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E3D0);
		}

		static ::System::Comparison_1<::RPG::Client::MusicAlbumGroupData*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicAlbumGroupData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E3D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetUnlockMusicAlbumGroupDatas_b__12_0(::RPG::Client::MusicAlbumGroupData* a1, ::RPG::Client::MusicAlbumGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicAlbumGroupData*, ::RPG::Client::MusicAlbumGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE___C__GETUNLOCKMUSICALBUMGROUPDATAS_B__12_0_OFFSET))(this, a1, a2);
		}

	};
}
