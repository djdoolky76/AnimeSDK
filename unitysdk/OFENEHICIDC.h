#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapDef; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class ShowHintEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFENEHICIDC_COOIIMOPJAC_OFFSET UNITYSDK_OFFSET(0xBE3F130)
#define OFENEHICIDC_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3F310)
#define OFENEHICIDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE3F430)
#define OFENEHICIDC_DJMDKDKBHDM_OFFSET UNITYSDK_OFFSET(0xBE3E9D0)
#define OFENEHICIDC_FHBANFEMAOC_OFFSET UNITYSDK_OFFSET(0xBE3ECD0)
#define OFENEHICIDC_LBHIGGIECDK_OFFSET UNITYSDK_OFFSET(0xBE3EFC0)

	class OFENEHICIDC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LevelGraph*, ::RPG::GameCore::ShowHintEffect*>* IOGKKFKMOBF; // 0x10
		::RPG::Client::MapDef* MJKJCCNJACA; // 0x18
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelGraph*>*>* NNLFEPDDPNH; // 0x20
		::System::String* HOLHGLKFGAO; // 0x28
		::System::Void _ctor(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + OFENEHICIDC_CTOR_OFFSET))(this, a1);
		}

		::System::Void DJMDKDKBHDM(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelGraph* a3, ::RPG::GameCore::ShowHintEffect* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelGraph*, ::RPG::GameCore::ShowHintEffect*))((::PBYTE)hIl2Cpp + OFENEHICIDC_DJMDKDKBHDM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LBHIGGIECDK(::RPG::GameCore::LevelGraph* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraph*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OFENEHICIDC_LBHIGGIECDK_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::ShowHintEffect* COOIIMOPJAC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ShowHintEffect*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OFENEHICIDC_COOIIMOPJAC_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFENEHICIDC_DISPOSE_OFFSET))(this);
		}

		::System::Void FHBANFEMAOC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OFENEHICIDC_FHBANFEMAOC_OFFSET))(this, a1, a2);
		}

	};
