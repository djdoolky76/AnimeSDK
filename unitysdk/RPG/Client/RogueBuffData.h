#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ICHCKGNHKPF.h"
class ABOFJEIMLLJ;
class KJAMNOGFAMJ;
class PNPLFMNNKMG;
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueBuffTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_1_OFFSET UNITYSDK_OFFSET(0xE9A24C0)
#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_OFFSET UNITYSDK_OFFSET(0xE9A2410)
#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_1_OFFSET UNITYSDK_OFFSET(0xE9A2390)
#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_OFFSET UNITYSDK_OFFSET(0xE9A22E0)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xE9A0CE0)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0xE9A0D80)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_3_OFFSET UNITYSDK_OFFSET(0xE9A0E20)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE9A0C40)
#define RPG_CLIENT_ROGUEBUFFDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE99E190)
#define RPG_CLIENT_ROGUEBUFFDATA_GETBUFFCATEGORY_OFFSET UNITYSDK_OFFSET(0xE9A21B0)
#define RPG_CLIENT_ROGUEBUFFDATA_GETEXTRAEFFECTROWIDS_OFFSET UNITYSDK_OFFSET(0xE9A17C0)
#define RPG_CLIENT_ROGUEBUFFDATA_GETMAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0xE9A2060)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEAEONID_OFFSET UNITYSDK_OFFSET(0xE9A1B80)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFRARITY_OFFSET UNITYSDK_OFFSET(0xE9A1690)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTAG_OFFSET UNITYSDK_OFFSET(0xE9A1CB0)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPEROW_OFFSET UNITYSDK_OFFSET(0xE9A13C0)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0xE9A1290)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_AEONCROSSICON_OFFSET UNITYSDK_OFFSET(0xE9A2640)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xE9A2580)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xE9A25C0)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xE9A2600)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xE9A25E0)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xE9A2620)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE9A25A0)
#define RPG_CLIENT_ROGUEBUFFDATA_ISBATTLEEVENTBUFFCROSS_OFFSET UNITYSDK_OFFSET(0xE9A1DE0)
#define RPG_CLIENT_ROGUEBUFFDATA_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0xE9A2150)
#define RPG_CLIENT_ROGUEBUFFDATA_ISNORMALBUFF_OFFSET UNITYSDK_OFFSET(0xE9A1F20)
#define RPG_CLIENT_ROGUEBUFFDATA_REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0xE9A0EC0)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xE9A2590)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xE9A25D0)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xE9A2610)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0xE9A25F0)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0xE9A2630)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE9A25B0)
#define RPG_CLIENT_ROGUEBUFFDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE9A0F10)
#define RPG_CLIENT_ROGUEBUFFDATA__TRYINITROGUEBUFFROW_OFFSET UNITYSDK_OFFSET(0xE9A0FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffData_TypeDefinitionIndex = 69138;

	class RogueBuffData : public ::System::Object
	{
	public:
		::RPG::GameCore::MazeBuffRow* _MazeBuffRow; // 0x10
		::PNPLFMNNKMG* _RowData; // 0x18
		::System::UInt32 _BuffID_k__BackingField; // 0x20
		::System::Boolean _IsNecessaryBuff_k__BackingField; // 0x24
		::System::Boolean _IsVeryNecessaryBuff_k__BackingField; // 0x25
		::System::Boolean _IsInsufficientBuff_k__BackingField; // 0x26
		::System::Boolean _IsVeryInsufficientBuff_k__BackingField; // 0x27
		::System::UInt32 _Level_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::RogueBuffData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueBuffData* Create_1(::ICHCKGNHKPF a1)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::ICHCKGNHKPF))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueBuffData* Create_2(::ABOFJEIMLLJ* a1)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::ABOFJEIMLLJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_2_OFFSET))(a1);
		}

		static ::RPG::Client::RogueBuffData* Create_3(::KJAMNOGFAMJ* a1)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::KJAMNOGFAMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_3_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_TOSTRING_OFFSET))(this);
		}

		::System::Void RefreshLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_REFRESHLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueBuffType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueBuffTypeRow* GetRogueBuffTypeRow()
		{
			return ((::RPG::GameCore::RogueBuffTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPEROW_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFRARITY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetExtraEffectRowIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETEXTRAEFFECTROWIDS_OFFSET))(this);
		}

		::System::UInt32 GetRogueAeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEAEONID_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTAG_OFFSET))(this);
		}

		::System::Boolean IsBattleEventBuffCross()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_ISBATTLEEVENTBUFFCROSS_OFFSET))(this);
		}

		::System::Boolean IsNormalBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_ISNORMALBUFF_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* GetMazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETMAZEBUFFROW_OFFSET))(this);
		}

		::System::Boolean IsLevelMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_ISLEVELMAX_OFFSET))(this);
		}

		::RPG::GameCore::RogueBuffCategory GetBuffCategory()
		{
			return ((::RPG::GameCore::RogueBuffCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETBUFFCATEGORY_OFFSET))(this);
		}

		::System::Void CheckBuffStateIfGet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_OFFSET))(this);
		}

		::System::Void CheckBuffStateIfGet_1(::RPG::Client::RogueFormulaInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_1_OFFSET))(this, a1);
		}

		::System::Void CheckBuffStateIfDrop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_OFFSET))(this);
		}

		::System::Void CheckBuffStateIfDrop_1(::RPG::Client::RogueFormulaInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_1_OFFSET))(this, a1);
		}

		::System::Void _TryInitRogueBuffRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA__TRYINITROGUEBUFFROW_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_BUFFID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInsufficientBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISINSUFFICIENTBUFF_OFFSET))(this);
		}

		::System::Void set_IsInsufficientBuff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISINSUFFICIENTBUFF_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVeryInsufficientBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYINSUFFICIENTBUFF_OFFSET))(this);
		}

		::System::Void set_IsVeryInsufficientBuff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYINSUFFICIENTBUFF_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNecessaryBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISNECESSARYBUFF_OFFSET))(this);
		}

		::System::Void set_IsNecessaryBuff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISNECESSARYBUFF_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVeryNecessaryBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYNECESSARYBUFF_OFFSET))(this);
		}

		::System::Void set_IsVeryNecessaryBuff(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYNECESSARYBUFF_OFFSET))(this, a1);
		}

		::System::String* get_AeonCrossIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_AEONCROSSICON_OFFSET))(this);
		}

	};
}
