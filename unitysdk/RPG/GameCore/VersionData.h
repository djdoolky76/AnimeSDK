#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/E_PakType.h"
#include "unitysdk/System/Object.h"
class DDENCEMCKLN;
class EHNACJOODNL;
class PKKGCBHDFNK;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_VERSIONDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xF33FE90)
#define RPG_GAMECORE_VERSIONDATA_CLEARCHANNELID_OFFSET UNITYSDK_OFFSET(0xF33F0C0)
#define RPG_GAMECORE_VERSIONDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xF33EB00)
#define RPG_GAMECORE_VERSIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF33AB80)
#define RPG_GAMECORE_VERSIONDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xF33CD60)
#define RPG_GAMECORE_VERSIONDATA_GETASBVERSION_OFFSET UNITYSDK_OFFSET(0xF33F3E0)
#define RPG_GAMECORE_VERSIONDATA_GETCHANNELID_OFFSET UNITYSDK_OFFSET(0xF33F110)
#define RPG_GAMECORE_VERSIONDATA_GETCLIENTPAKTYPEVERSIONNOBRANCH_OFFSET UNITYSDK_OFFSET(0xF33ED20)
#define RPG_GAMECORE_VERSIONDATA_GETCLIENTPAKTYPEVERSION_OFFSET UNITYSDK_OFFSET(0xF33EFA0)
#define RPG_GAMECORE_VERSIONDATA_GETDISPATCHSEED_OFFSET UNITYSDK_OFFSET(0xF33F3A0)
#define RPG_GAMECORE_VERSIONDATA_GETPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0xF33F070)
#define RPG_GAMECORE_VERSIONDATA_GETSERVERPAKTYPEVERSION_OFFSET UNITYSDK_OFFSET(0xF33EDF0)
#define RPG_GAMECORE_VERSIONDATA_GETSUBCHANNELID_OFFSET UNITYSDK_OFFSET(0xF33F230)
#define RPG_GAMECORE_VERSIONDATA_GETTIMEBRANCH_OFFSET UNITYSDK_OFFSET(0xF33ED70)
#define RPG_GAMECORE_VERSIONDATA_GETVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0xF33EBF0)
#define RPG_GAMECORE_VERSIONDATA_GET_BRANCH_OFFSET UNITYSDK_OFFSET(0xF33FBF0)
#define RPG_GAMECORE_VERSIONDATA_GET_BUILDID_OFFSET UNITYSDK_OFFSET(0xF33FE20)
#define RPG_GAMECORE_VERSIONDATA_GET_CHANNELID_OFFSET UNITYSDK_OFFSET(0xF33FD30)
#define RPG_GAMECORE_VERSIONDATA_GET_DISPATCHSEED_OFFSET UNITYSDK_OFFSET(0xF33FD10)
#define RPG_GAMECORE_VERSIONDATA_GET_GAMECOREVERSION_OFFSET UNITYSDK_OFFSET(0xF33FCB0)
#define RPG_GAMECORE_VERSIONDATA_GET_ISENABLEEXCLUDEASSET_OFFSET UNITYSDK_OFFSET(0xF33FD70)
#define RPG_GAMECORE_VERSIONDATA_GET_MAJORVERSION_OFFSET UNITYSDK_OFFSET(0xF33FC50)
#define RPG_GAMECORE_VERSIONDATA_GET_MINORVERSION_OFFSET UNITYSDK_OFFSET(0xF33FC70)
#define RPG_GAMECORE_VERSIONDATA_GET_PAKTYPEDETAIL_OFFSET UNITYSDK_OFFSET(0xF33FCF0)
#define RPG_GAMECORE_VERSIONDATA_GET_PAKTYPE_OFFSET UNITYSDK_OFFSET(0xF33FCD0)
#define RPG_GAMECORE_VERSIONDATA_GET_PATCHVERSION_OFFSET UNITYSDK_OFFSET(0xF33FC90)
#define RPG_GAMECORE_VERSIONDATA_GET_REVISION_OFFSET UNITYSDK_OFFSET(0xF33FC10)
#define RPG_GAMECORE_VERSIONDATA_GET_SDK_PS_CLIENT_ID_OFFSET UNITYSDK_OFFSET(0xF33F4C0)
#define RPG_GAMECORE_VERSIONDATA_GET_SDK_PS_CLIENT_ID_OFFSET UNITYSDK_OFFSET(0xF33FD90)
#define RPG_GAMECORE_VERSIONDATA_GET_SUBCHANNELID_OFFSET UNITYSDK_OFFSET(0xF33FD50)
#define RPG_GAMECORE_VERSIONDATA_GET_TIME_OFFSET UNITYSDK_OFFSET(0xF33FC30)
#define RPG_GAMECORE_VERSIONDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xF33FDB0)
#define RPG_GAMECORE_VERSIONDATA_ISBETABRANCH_OFFSET UNITYSDK_OFFSET(0xF33EFF0)
#define RPG_GAMECORE_VERSIONDATA_ISPAKTYPEEQUALPROD_OFFSET UNITYSDK_OFFSET(0xF33F350)
#define RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATAFROMBINARY_OFFSET UNITYSDK_OFFSET(0xF33CC20)
#define RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATAFROMTEXT_OFFSET UNITYSDK_OFFSET(0xF33D0C0)
#define RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATA_OFFSET UNITYSDK_OFFSET(0xF33CBD0)
#define RPG_GAMECORE_VERSIONDATA_READBINARYFROMFILE_OFFSET UNITYSDK_OFFSET(0xF33F880)
#define RPG_GAMECORE_VERSIONDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xF33F500)
#define RPG_GAMECORE_VERSIONDATA_SETVERSIONINDEV_OFFSET UNITYSDK_OFFSET(0xF33FBB0)
#define RPG_GAMECORE_VERSIONDATA_SET_BRANCH_OFFSET UNITYSDK_OFFSET(0xF33FC00)
#define RPG_GAMECORE_VERSIONDATA_SET_BUILDID_OFFSET UNITYSDK_OFFSET(0xF33FE50)
#define RPG_GAMECORE_VERSIONDATA_SET_CHANNELID_OFFSET UNITYSDK_OFFSET(0xF33FD40)
#define RPG_GAMECORE_VERSIONDATA_SET_DISPATCHSEED_OFFSET UNITYSDK_OFFSET(0xF33FD20)
#define RPG_GAMECORE_VERSIONDATA_SET_GAMECOREVERSION_OFFSET UNITYSDK_OFFSET(0xF33FCC0)
#define RPG_GAMECORE_VERSIONDATA_SET_ISENABLEEXCLUDEASSET_OFFSET UNITYSDK_OFFSET(0xF33FD80)
#define RPG_GAMECORE_VERSIONDATA_SET_MAJORVERSION_OFFSET UNITYSDK_OFFSET(0xF33FC60)
#define RPG_GAMECORE_VERSIONDATA_SET_MINORVERSION_OFFSET UNITYSDK_OFFSET(0xF33FC80)
#define RPG_GAMECORE_VERSIONDATA_SET_PAKTYPEDETAIL_OFFSET UNITYSDK_OFFSET(0xF33FD00)
#define RPG_GAMECORE_VERSIONDATA_SET_PAKTYPE_OFFSET UNITYSDK_OFFSET(0xF33FCE0)
#define RPG_GAMECORE_VERSIONDATA_SET_PATCHVERSION_OFFSET UNITYSDK_OFFSET(0xF33FCA0)
#define RPG_GAMECORE_VERSIONDATA_SET_REVISION_OFFSET UNITYSDK_OFFSET(0xF33FC20)
#define RPG_GAMECORE_VERSIONDATA_SET_SDK_PS_CLIENT_ID_OFFSET UNITYSDK_OFFSET(0xF33FDA0)
#define RPG_GAMECORE_VERSIONDATA_SET_SUBCHANNELID_OFFSET UNITYSDK_OFFSET(0xF33FD60)
#define RPG_GAMECORE_VERSIONDATA_SET_TIME_OFFSET UNITYSDK_OFFSET(0xF33FC40)
#define RPG_GAMECORE_VERSIONDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xF33FDE0)
#define RPG_GAMECORE_VERSIONDATA_TICK_OFFSET UNITYSDK_OFFSET(0xF33EB90)
#define RPG_GAMECORE_VERSIONDATA_WRITEBINARYTOFILE_OFFSET UNITYSDK_OFFSET(0xF33F8E0)
#define RPG_GAMECORE_VERSIONDATA_WRITEJSONTOFILE_OFFSET UNITYSDK_OFFSET(0xF33FB60)
#define RPG_GAMECORE_VERSIONDATA__GETPAKTYPEVERSION_OFFSET UNITYSDK_OFFSET(0xF33EE40)
#define RPG_GAMECORE_VERSIONDATA__LOADCLIENTVERSIONDATA_OFFSET UNITYSDK_OFFSET(0xF33ACF0)
#define RPG_GAMECORE_VERSIONDATA__SETCHANNELID_OFFSET UNITYSDK_OFFSET(0xF33F170)
#define RPG_GAMECORE_VERSIONDATA__SETSUBCHANNELID_OFFSET UNITYSDK_OFFSET(0xF33F290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VersionData_TypeDefinitionIndex = 60541;

	class VersionData : public ::System::Object
	{
	public:
		::System::String* _Time_k__BackingField; // 0x10
		::System::String* _Sdk_PS_Client_Id_k__BackingField; // 0x18
		::System::String* _PakTypeDetail_k__BackingField; // 0x20
		::System::String* _SubChannelId_k__BackingField; // 0x28
		::EHNACJOODNL* AssetVersion; // 0x30
		::System::String* _Branch_k__BackingField; // 0x38
		::System::String* _DispatchSeed_k__BackingField; // 0x40
		::System::String* _ChannelId_k__BackingField; // 0x48
		::PKKGCBHDFNK* UpdateVersionInfoIns; // 0x50
		::System::UInt32 _PatchVersion_k__BackingField; // 0x58
		::System::UInt32 _MinorVersion_k__BackingField; // 0x5C
		::RPG::GameCore::E_PakType _PakType_k__BackingField; // 0x60
		::System::Boolean _IsEnableExcludeAsset_k__BackingField; // 0x64
		::System::Byte _padding0[0x3];
		::System::UInt32 _MajorVersion_k__BackingField; // 0x68
		::System::UInt32 _Revision_k__BackingField; // 0x6C
		::System::UInt32 _GameCoreVersion_k__BackingField; // 0x70
		static ::System::String** StaticGet__Version_k__BackingField()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "VersionData")->GetStaticField(0xE480);
		}

		static ::System::String** StaticGet__BuildId_k__BackingField()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "VersionData")->GetStaticField(0xE488);
		}

		static ::System::String** StaticGet_s_VersionFilePath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "VersionData")->GetStaticField(0xE490);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_CCTOR_OFFSET))();
		}

		::System::Void _LoadClientVersionData(::SimpleJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__LOADCLIENTVERSIONDATA_OFFSET))(this, a1);
		}

		::System::Void LoadVersionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATA_OFFSET))(this);
		}

		::System::Void LoadVersionDataFromBinary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATAFROMBINARY_OFFSET))(this);
		}

		::System::Void LoadVersionDataFromText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATAFROMTEXT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_TICK_OFFSET))(this, a1);
		}

		::System::String* GetVersionString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETVERSIONSTRING_OFFSET))(this);
		}

		::System::String* GetTimeBranch()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETTIMEBRANCH_OFFSET))(this);
		}

		::System::String* GetServerPakTypeVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETSERVERPAKTYPEVERSION_OFFSET))(this);
		}

		::System::String* GetClientPakTypeVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETCLIENTPAKTYPEVERSION_OFFSET))(this);
		}

		::System::String* GetClientPakTypeVersionNoBranch()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETCLIENTPAKTYPEVERSIONNOBRANCH_OFFSET))(this);
		}

		::System::Boolean IsBetaBranch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_ISBETABRANCH_OFFSET))(this);
		}

		::System::String* _GetPakTypeVersion(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__GETPAKTYPEVERSION_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetPlatformType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETPLATFORMTYPE_OFFSET))(this);
		}

		::System::Void ClearChannelID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_CLEARCHANNELID_OFFSET))(this);
		}

		::System::String* GetChannelId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETCHANNELID_OFFSET))(this);
		}

		::System::String* GetSubChannelId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETSUBCHANNELID_OFFSET))(this);
		}

		::System::Boolean IsPakTypeEqualPROD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_ISPAKTYPEEQUALPROD_OFFSET))(this);
		}

		::System::String* GetDispatchSeed()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETDISPATCHSEED_OFFSET))(this);
		}

		::System::String* GetAsbVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETASBVERSION_OFFSET))(this);
		}

		::System::String* Get_Sdk_PS_Client_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_SDK_PS_CLIENT_ID_OFFSET))(this);
		}

		::DDENCEMCKLN* Serialize()
		{
			return ((::DDENCEMCKLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SERIALIZE_OFFSET))(this);
		}

		::System::Void Deserialize(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Void ReadBinaryFromFile(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_READBINARYFROMFILE_OFFSET))(this, a1);
		}

		::System::Void WriteBinaryToFile(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_WRITEBINARYTOFILE_OFFSET))(this, a1);
		}

		::System::Void WriteJsonToFile(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_WRITEJSONTOFILE_OFFSET))(this, a1);
		}

		::System::Void _SetChannelId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__SETCHANNELID_OFFSET))(this);
		}

		::System::Void _SetSubChannelId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__SETSUBCHANNELID_OFFSET))(this);
		}

		static ::System::Void SetVersionInDev(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SETVERSIONINDEV_OFFSET))(a1);
		}

		::System::String* get_Branch()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_BRANCH_OFFSET))(this);
		}

		::System::Void set_Branch(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_BRANCH_OFFSET))(this, a1);
		}

		::System::UInt32 get_Revision()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_REVISION_OFFSET))(this);
		}

		::System::Void set_Revision(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_REVISION_OFFSET))(this, a1);
		}

		::System::String* get_Time()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_TIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_MajorVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_MAJORVERSION_OFFSET))(this);
		}

		::System::Void set_MajorVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_MAJORVERSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_MinorVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_MINORVERSION_OFFSET))(this);
		}

		::System::Void set_MinorVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_MINORVERSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_PatchVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_PATCHVERSION_OFFSET))(this);
		}

		::System::Void set_PatchVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_PATCHVERSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_GameCoreVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_GAMECOREVERSION_OFFSET))(this);
		}

		::System::Void set_GameCoreVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_GAMECOREVERSION_OFFSET))(this, a1);
		}

		::RPG::GameCore::E_PakType get_PakType()
		{
			return ((::RPG::GameCore::E_PakType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_PAKTYPE_OFFSET))(this);
		}

		::System::Void set_PakType(::RPG::GameCore::E_PakType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::E_PakType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_PAKTYPE_OFFSET))(this, a1);
		}

		::System::String* get_PakTypeDetail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_PAKTYPEDETAIL_OFFSET))(this);
		}

		::System::Void set_PakTypeDetail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_PAKTYPEDETAIL_OFFSET))(this, a1);
		}

		::System::String* get_DispatchSeed()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_DISPATCHSEED_OFFSET))(this);
		}

		::System::Void set_DispatchSeed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_DISPATCHSEED_OFFSET))(this, a1);
		}

		::System::String* get_ChannelId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_CHANNELID_OFFSET))(this);
		}

		::System::Void set_ChannelId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_CHANNELID_OFFSET))(this, a1);
		}

		::System::String* get_SubChannelId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_SUBCHANNELID_OFFSET))(this);
		}

		::System::Void set_SubChannelId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_SUBCHANNELID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnableExcludeAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_ISENABLEEXCLUDEASSET_OFFSET))(this);
		}

		::System::Void set_IsEnableExcludeAsset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_ISENABLEEXCLUDEASSET_OFFSET))(this, a1);
		}

		::System::String* get_Sdk_PS_Client_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_SDK_PS_CLIENT_ID_OFFSET))(this);
		}

		::System::Void set_Sdk_PS_Client_Id(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_SDK_PS_CLIENT_ID_OFFSET))(this, a1);
		}

		static ::System::String* get_Version()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_VERSION_OFFSET))();
		}

		static ::System::Void set_Version(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_VERSION_OFFSET))(a1);
		}

		static ::System::String* get_BuildId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_BUILDID_OFFSET))();
		}

		static ::System::Void set_BuildId(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_BUILDID_OFFSET))(a1);
		}

	};
}
