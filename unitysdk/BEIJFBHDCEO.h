#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKACEPPPCA.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class BGNDPIPJFCI;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }

#define BEIJFBHDCEO_CLEAR_OFFSET UNITYSDK_OFFSET(0x16323CC0)
#define BEIJFBHDCEO_CTOR_OFFSET UNITYSDK_OFFSET(0x16323CB0)
#define BEIJFBHDCEO_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x163244A0)
#define BEIJFBHDCEO_ENJMMHDCAPH_OFFSET UNITYSDK_OFFSET(0x163243E0)
#define BEIJFBHDCEO_FMPHNNADJPE_OFFSET UNITYSDK_OFFSET(0x16324720)
#define BEIJFBHDCEO_IGDIEBODAAH_OFFSET UNITYSDK_OFFSET(0x163241B0)
#define BEIJFBHDCEO_JPBJMJAIDHJ_1_OFFSET UNITYSDK_OFFSET(0x16324150)
#define BEIJFBHDCEO_JPBJMJAIDHJ_OFFSET UNITYSDK_OFFSET(0x16323EA0)
#define BEIJFBHDCEO_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x16323DC0)
#define BEIJFBHDCEO_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0x16324330)
#define BEIJFBHDCEO_LNLHHJDJKBL_OFFSET UNITYSDK_OFFSET(0x16323E30)

	class BEIJFBHDCEO : public ::HPKACEPPPCA
	{
	public:
		::RPG::Client::MonoEffect* HJBEGIDAMBP; // 0x80
		::System::UInt32 DLBFBBNDFBO; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIJFBHDCEO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIJFBHDCEO_CLEAR_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEIJFBHDCEO_KGJAMKFPOAB_OFFSET))(this, a1);
		}

		::System::String* LNLHHJDJKBL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIJFBHDCEO_LNLHHJDJKBL_OFFSET))(this);
		}

		static ::RPG::Client::TriggerEffectParams* JPBJMJAIDHJ(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BEIJFBHDCEO_JPBJMJAIDHJ_OFFSET))(a1);
		}

		::RPG::Client::TriggerEffectParams* JPBJMJAIDHJ_1()
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIJFBHDCEO_JPBJMJAIDHJ_1_OFFSET))(this);
		}

		::System::Void IGDIEBODAAH(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + BEIJFBHDCEO_IGDIEBODAAH_OFFSET))(this, a1);
		}

		::System::Void EGKNKHEANAN(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + BEIJFBHDCEO_EGKNKHEANAN_OFFSET))(this, a1);
		}

		::System::Void KJMDJMBNCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIJFBHDCEO_KJMDJMBNCPE_OFFSET))(this);
		}

		::System::Void FMPHNNADJPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIJFBHDCEO_FMPHNNADJPE_OFFSET))(this);
		}

		::System::Void ENJMMHDCAPH(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + BEIJFBHDCEO_ENJMMHDCAPH_OFFSET))(this, a1, a2);
		}

	};
