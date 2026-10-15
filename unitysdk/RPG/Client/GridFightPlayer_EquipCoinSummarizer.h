#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace RPG::Client { class GridFightGameModifier; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xD1DC7D0)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xD1DC220)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xD1DC270)
#define RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0xD1DC680)

namespace RPG::Client
{
	class GridFightPlayer_EquipCoinSummarizer : public ::AMCOEFHHBPO
	{
	public:
		::RPG::Client::GridFightGameModifier* _CurModifier; // 0x10
		::System::UInt32 _EquipID; // 0x18
		::System::Int32 _LastCoin; // 0x1C
		::System::UInt32 _EquipUID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER_EQUIPCOINSUMMARIZER_UPDATECOIN_OFFSET))(this, a1);
		}

	};
}
