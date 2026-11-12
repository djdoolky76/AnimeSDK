#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class ParkourGameTalkEventInfo; }
namespace RPG::Client::ParkourGame { class MonoParkourTalkEvent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFOMBDEHAML_BIECELLIJOO_OFFSET UNITYSDK_OFFSET(0xC707250)
#define OFOMBDEHAML_CHMNPFPGOHI_OFFSET UNITYSDK_OFFSET(0xC707680)
#define OFOMBDEHAML_CTOR_OFFSET UNITYSDK_OFFSET(0xC707800)
#define OFOMBDEHAML_FMOJEOBDGLE_OFFSET UNITYSDK_OFFSET(0xC7075C0)
#define OFOMBDEHAML_JPEOHDAJCAM_OFFSET UNITYSDK_OFFSET(0xC707100)
#define OFOMBDEHAML_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC707710)
#define OFOMBDEHAML_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC7070B0)

inline static constexpr unsigned int OFOMBDEHAML_TypeDefinitionIndex = 63257;

	class OFOMBDEHAML : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*>* PGNFCGAOBOH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ParkourGameTalkEventInfo*>* MIMGEEGJBOK; // 0x18
		::RPG::Client::BaseGameFlow* BEGDKHKENMF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOMBDEHAML_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + OFOMBDEHAML_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JPEOHDAJCAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOMBDEHAML_JPEOHDAJCAM_OFFSET))(this);
		}

		::System::Void BIECELLIJOO(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OFOMBDEHAML_BIECELLIJOO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FMOJEOBDGLE(::System::UInt32 a1, ::RPG::Client::ParkourGame::MonoParkourTalkEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*))((::PBYTE)hIl2Cpp + OFOMBDEHAML_FMOJEOBDGLE_OFFSET))(this, a1, a2);
		}

		::System::Void CHMNPFPGOHI(::System::UInt32 a1, ::RPG::Client::ParkourGame::MonoParkourTalkEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*))((::PBYTE)hIl2Cpp + OFOMBDEHAML_CHMNPFPGOHI_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOMBDEHAML_KHGIKBFDLFB_OFFSET))(this);
		}

	};
