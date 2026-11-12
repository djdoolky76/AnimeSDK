#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
class DDAMEHEPOBD;
class HONNGJEMGGH;
class MMEDLCAENAL;
namespace RPG::Client { class GridFightOrbResultData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC17C40)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xDC17180)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0xDC17B10)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEADDFORGE_OFFSET UNITYSDK_OFFSET(0xDC179B0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xDC17760)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0xDC178F0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xDC17A10)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xDC17380)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0xDC177C0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0xDC176A0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0xDC17820)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEORB_OFFSET UNITYSDK_OFFSET(0xDC17950)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEREMOVEORB_OFFSET UNITYSDK_OFFSET(0xDC17700)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0xDC17890)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATESTART_OFFSET UNITYSDK_OFFSET(0xDC171D0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER__TRYNOTIFYORBOPEN_OFFSET UNITYSDK_OFFSET(0xDC17A70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbServerData_OrbSummarizer_TypeDefinitionIndex = 65908;

	class GridFightOrbServerData_OrbSummarizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _NotifiedOrbUIDs; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RemovedOrbUIDs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbResultData*>* _ResultDataList; // 0x20
		::RPG::Client::GridFightOrbResultData* _CurrentResultData; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightOrbResultData*>* _ResultDataByOrbUID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATESTART_OFFSET))(this);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateRemoveOrb(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEREMOVEORB_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATECOIN_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateShop(::HONNGJEMGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATESHOP_OFFSET))(this, a1);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateOrb(::MMEDLCAENAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMEDLCAENAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEORB_OFFSET))(this, a1);
		}

		::System::Void UpdateAddForge(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEADDFORGE_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void PreUpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER_PREUPDATEDONE_OFFSET))(this);
		}

		::System::Void _TryNotifyOrbOpen(::RPG::Client::GridFightOrbResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_ORBSUMMARIZER__TRYNOTIFYORBOPEN_OFFSET))(this, a1);
		}

	};
}
