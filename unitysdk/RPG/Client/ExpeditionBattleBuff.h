#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0xD80E710)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFDATAISPERCENT_OFFSET UNITYSDK_OFFSET(0xD80E6F0)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0xD80E670)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFICON_OFFSET UNITYSDK_OFFSET(0xD80E6B0)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xD80E690)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFPARAMS_OFFSET UNITYSDK_OFFSET(0xD80E6D0)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFRANKDESC_OFFSET UNITYSDK_OFFSET(0xD80E650)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFRANK_OFFSET UNITYSDK_OFFSET(0xD80E630)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_ID_OFFSET UNITYSDK_OFFSET(0xD80E5F0)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xD80E610)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFDATAISPERCENT_OFFSET UNITYSDK_OFFSET(0xD80E700)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0xD80E680)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFICON_OFFSET UNITYSDK_OFFSET(0xD80E6C0)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0xD80E6A0)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFPARAMS_OFFSET UNITYSDK_OFFSET(0xD80E6E0)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFRANKDESC_OFFSET UNITYSDK_OFFSET(0xD80E660)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFRANK_OFFSET UNITYSDK_OFFSET(0xD80E640)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_ID_OFFSET UNITYSDK_OFFSET(0xD80E600)
#define RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xD80E620)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleBuff_TypeDefinitionIndex = 65281;

	class ExpeditionBattleBuff : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _BuffParams_k__BackingField; // 0x10
		::System::String* _BuffIcon_k__BackingField; // 0x18
		::RPG::Client::TextID _BuffDesc_k__BackingField; // 0x20
		::RPG::Client::TextID _BuffRankDesc_k__BackingField; // 0x30
		::System::UInt64 _BuffRank_k__BackingField; // 0x40
		::System::UInt32 _ID_k__BackingField; // 0x48
		::System::Boolean _BuffDataIsPercent_k__BackingField; // 0x4C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID _BuffName_k__BackingField; // 0x50
		::System::UInt32 _MazeBuffID_k__BackingField; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::Void set_MazeBuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_MAZEBUFFID_OFFSET))(this, a1);
		}

		::System::UInt64 get_BuffRank()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFRANK_OFFSET))(this);
		}

		::System::Void set_BuffRank(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFRANK_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_BuffRankDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFRANKDESC_OFFSET))(this);
		}

		::System::Void set_BuffRankDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFRANKDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_BuffDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFDESC_OFFSET))(this);
		}

		::System::Void set_BuffDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_BuffName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFNAME_OFFSET))(this);
		}

		::System::Void set_BuffName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFNAME_OFFSET))(this, a1);
		}

		::System::String* get_BuffIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFICON_OFFSET))(this);
		}

		::System::Void set_BuffIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFICON_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_BuffParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFPARAMS_OFFSET))(this);
		}

		::System::Void set_BuffParams(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFPARAMS_OFFSET))(this, a1);
		}

		::System::Boolean get_BuffDataIsPercent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_GET_BUFFDATAISPERCENT_OFFSET))(this);
		}

		::System::Void set_BuffDataIsPercent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEBUFF_SET_BUFFDATAISPERCENT_OFFSET))(this, a1);
		}

	};
}
