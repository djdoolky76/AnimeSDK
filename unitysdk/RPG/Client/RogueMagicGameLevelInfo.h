#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFKHKAMBHBN.h"
#include "unitysdk/System/Object.h"
class GPEPGKCPBPB;
class KDHAIFIOKDN;
class MAHGFIIOPHL;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueMagicGameLayerInfo; }
namespace RPG::Client { class RogueMagicGameRoomInfo; }
namespace RPG::Client { class RogueMagicLayerEffectInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE9D3630)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE9D3A60)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xE9D6F40)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURLAYERINFO_OFFSET UNITYSDK_OFFSET(0xE9D5A00)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURROOMINFO_OFFSET UNITYSDK_OFFSET(0xE9D5370)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETFINISHEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xE9D6DF0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_CURLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xE9D70F0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xE9D7130)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERINFOCOL_OFFSET UNITYSDK_OFFSET(0xE9D7110)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_OPTIONALLAYEREFFECTINFO_OFFSET UNITYSDK_OFFSET(0xE9D7190)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xE9D70D0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_CURLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xE9D7100)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_LAYERINFOCOL_OFFSET UNITYSDK_OFFSET(0xE9D7120)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_OPTIONALLAYEREFFECTINFO_OFFSET UNITYSDK_OFFSET(0xE9D71A0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xE9D70E0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCALL_OFFSET UNITYSDK_OFFSET(0xE9D4110)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xE9D4CC0)
#define RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__SYNCLAYERS_OFFSET UNITYSDK_OFFSET(0xE9D6840)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameLevelInfo_TypeDefinitionIndex = 69336;

	class RogueMagicGameLevelInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>* _LayerInfoCol_k__BackingField; // 0x10
		::RPG::Client::RogueMagicLayerEffectInfo* _OptionalLayerEffectInfo_k__BackingField; // 0x18
		::System::UInt32 _CurLayerIndex_k__BackingField; // 0x20
		::PFKHKAMBHBN _Status_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::KDHAIFIOKDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDHAIFIOKDN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCALL_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::MAHGFIIOPHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAHGFIIOPHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicGameLayerInfo* GetCurLayerInfo()
		{
			return ((::RPG::Client::RogueMagicGameLayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURLAYERINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMagicGameRoomInfo* GetCurRoomInfo()
		{
			return ((::RPG::Client::RogueMagicGameRoomInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETCURROOMINFO_OFFSET))(this);
		}

		::System::UInt32 GetFinishedRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETFINISHEDROOMCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetAllRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GETALLROOMCOUNT_OFFSET))(this);
		}

		::System::Void _SyncLayers(::Google::Protobuf::Collections::RepeatedField_1<::GPEPGKCPBPB*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::GPEPGKCPBPB*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO__SYNCLAYERS_OFFSET))(this, a1, a2);
		}

		::PFKHKAMBHBN get_Status()
		{
			return ((::PFKHKAMBHBN(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::PFKHKAMBHBN a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFKHKAMBHBN))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_STATUS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurLayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_CURLAYERINDEX_OFFSET))(this);
		}

		::System::Void set_CurLayerIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_CURLAYERINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>* get_LayerInfoCol()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERINFOCOL_OFFSET))(this);
		}

		::System::Void set_LayerInfoCol(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicGameLayerInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_LAYERINFOCOL_OFFSET))(this, a1);
		}

		::System::UInt32 get_LayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET))(this);
		}

		::RPG::Client::RogueMagicLayerEffectInfo* get_OptionalLayerEffectInfo()
		{
			return ((::RPG::Client::RogueMagicLayerEffectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_GET_OPTIONALLAYEREFFECTINFO_OFFSET))(this);
		}

		::System::Void set_OptionalLayerEffectInfo(::RPG::Client::RogueMagicLayerEffectInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicLayerEffectInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMELEVELINFO_SET_OPTIONALLAYEREFFECTINFO_OFFSET))(this, a1);
		}

	};
}
