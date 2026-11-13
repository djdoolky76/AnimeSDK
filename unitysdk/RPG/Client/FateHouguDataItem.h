#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateHouguType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class EPPEFKBPGDC;
class KLMNGOJKEIN;
namespace RPG::Client { class FateHouguDataItem; }
namespace System { class String; }

#define RPG_CLIENT_FATEHOUGUDATAITEM_CREATEUNIQUE_OFFSET UNITYSDK_OFFSET(0x1DB8D7D0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1DB880A0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8D850)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_EXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0x1DB88DA0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUDESC_OFFSET UNITYSDK_OFFSET(0x1DB887E0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUEFFECTSIMPLE_OFFSET UNITYSDK_OFFSET(0x1DB8D8E0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUEFFECT_OFFSET UNITYSDK_OFFSET(0x1DB88480)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUICONPATH_OFFSET UNITYSDK_OFFSET(0x1DB88BB0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUID_OFFSET UNITYSDK_OFFSET(0x1DB8D860)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUNAME_OFFSET UNITYSDK_OFFSET(0x1DB88270)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUTYPE_OFFSET UNITYSDK_OFFSET(0x1DB889E0)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1DB8D870)
#define RPG_CLIENT_FATEHOUGUDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1DB8D880)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguDataItem_TypeDefinitionIndex = 65524;

	class FateHouguDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _UniqueID_k__BackingField; // 0x10
		::System::UInt32 _HouguID_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::FateHouguDataItem* CreateUnique(::KLMNGOJKEIN* a1)
		{
			return ((::RPG::Client::FateHouguDataItem*(*)(::KLMNGOJKEIN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_CREATEUNIQUE_OFFSET))(a1);
		}

		static ::RPG::Client::FateHouguDataItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateHouguDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_HouguID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUID_OFFSET))(this);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_UNIQUEID_OFFSET))(this);
		}

		::RPG::GameCore::FateHouguType get_HouguType()
		{
			return ((::RPG::GameCore::FateHouguType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_HouguName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUNAME_OFFSET))(this);
		}

		::System::String* get_HouguEffect()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUEFFECT_OFFSET))(this);
		}

		::System::String* get_HouguEffectSimple()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUEFFECTSIMPLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_HouguDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffects()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_EXTRAEFFECTS_OFFSET))(this);
		}

		::System::String* get_HouguIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET_HOUGUICONPATH_OFFSET))(this);
		}

		::EPPEFKBPGDC* get__Row()
		{
			return ((::EPPEFKBPGDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUDATAITEM_GET__ROW_OFFSET))(this);
		}

	};
}
