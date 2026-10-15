#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AetherDivideModule; }
namespace RPG::Client { class ChestAndRaidInfo; }
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFHJMJKGPEF_CTOR_OFFSET UNITYSDK_OFFSET(0xC20F020)
#define PFHJMJKGPEF_EFIJDBHPINI_OFFSET UNITYSDK_OFFSET(0xC20F330)
#define PFHJMJKGPEF_EPDLJLDMAOJ_OFFSET UNITYSDK_OFFSET(0xC20FA30)
#define PFHJMJKGPEF_FFBEGKBEJDK_OFFSET UNITYSDK_OFFSET(0xC20F230)
#define PFHJMJKGPEF_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0xC20F040)
#define PFHJMJKGPEF_IDLEKLJHINH_OFFSET UNITYSDK_OFFSET(0xC20F4F0)
#define PFHJMJKGPEF_INAKJOJAFJP_OFFSET UNITYSDK_OFFSET(0xC20F550)
#define PFHJMJKGPEF_JLGJOHBDFKO_OFFSET UNITYSDK_OFFSET(0xC20F4B0)
#define PFHJMJKGPEF_LAEOFNFABDP_OFFSET UNITYSDK_OFFSET(0xC20FA90)
#define PFHJMJKGPEF_NIOKDMPAPBB_OFFSET UNITYSDK_OFFSET(0xC20F750)

	class PFHJMJKGPEF : public ::HDJIGMBHENE
	{
	public:
		::RPG::Client::TeamData* MDKAJPJNKJE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHJMJKGPEF_CTOR_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + PFHJMJKGPEF_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Void EFIJDBHPINI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHJMJKGPEF_EFIJDBHPINI_OFFSET))(this);
		}

		::System::Boolean JLGJOHBDFKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHJMJKGPEF_JLGJOHBDFKO_OFFSET))(this);
		}

		::RPG::Client::TeamData* IDLEKLJHINH()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHJMJKGPEF_IDLEKLJHINH_OFFSET))(this);
		}

		::System::Void NIOKDMPAPBB(::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + PFHJMJKGPEF_NIOKDMPAPBB_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* LAEOFNFABDP()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHJMJKGPEF_LAEOFNFABDP_OFFSET))(this);
		}

		::RPG::Client::TeamData* INAKJOJAFJP()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHJMJKGPEF_INAKJOJAFJP_OFFSET))(this);
		}

		::System::Void FFBEGKBEJDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHJMJKGPEF_FFBEGKBEJDK_OFFSET))(this);
		}

		::RPG::Client::AetherDivideModule* EPDLJLDMAOJ()
		{
			return ((::RPG::Client::AetherDivideModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFHJMJKGPEF_EPDLJLDMAOJ_OFFSET))(this);
		}

	};
