#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JIPJIAJGJIJ.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class RogueKeywordData; }
namespace RPG::GameCore { class ExtraEffectRow; }
namespace RPG::GameCore { class RogueTournKeywordRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEKEYWORDDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xE9CA030)
#define RPG_CLIENT_ROGUEKEYWORDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE9C9F00)
#define RPG_CLIENT_ROGUEKEYWORDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE9C9FC0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_BUFFCOUNTBUFFTYPEID_OFFSET UNITYSDK_OFFSET(0xE9CA4D0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_DESCALL_OFFSET UNITYSDK_OFFSET(0xE9CA6A0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_EXTRADESC_OFFSET UNITYSDK_OFFSET(0xE9CAA20)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xE9CA390)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_EXTRANAME_OFFSET UNITYSDK_OFFSET(0xE9CA960)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE9CA1B0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xE9CA0D0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0xE9CA0F0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_ISEXTRAEFFECTAVAILABLE_OFFSET UNITYSDK_OFFSET(0xE9CA850)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_KEYWORDEXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xE9CA430)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xE9CA110)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_MAZEBUFFLIST_OFFSET UNITYSDK_OFFSET(0xE9CA250)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE9CA570)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_ROGUEFORMULALIST_OFFSET UNITYSDK_OFFSET(0xE9CA2F0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET__EXTRAEFFECTROW_OFFSET UNITYSDK_OFFSET(0xE9CA630)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET__KEYWORDEXTRAEFFECTROW_OFFSET UNITYSDK_OFFSET(0xE9CA8F0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xE9C9FD0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xE9CA0E0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_SET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0xE9CA100)
#define RPG_CLIENT_ROGUEKEYWORDDATA_SYNCACTIVATE_OFFSET UNITYSDK_OFFSET(0xE9CA080)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueKeywordData_TypeDefinitionIndex = 69206;

	class RogueKeywordData : public ::System::Object
	{
	public:
		::System::Boolean _IsActivate_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 _ID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueKeywordData* Create(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::RogueKeywordData*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueKeywordData* Create_1(::JIPJIAJGJIJ a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::RogueKeywordData*(*)(::JIPJIAJGJIJ, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_CREATE_1_OFFSET))(a1, a2);
		}

		::System::Void SyncActivate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_SYNCACTIVATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_ISACTIVATE_OFFSET))(this);
		}

		::System::Void set_IsActivate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_SET_ISACTIVATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_ICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MazeBuffList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_MAZEBUFFLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RogueFormulaList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_ROGUEFORMULALIST_OFFSET))(this);
		}

		::System::UInt32 get_ExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_EXTRAEFFECTID_OFFSET))(this);
		}

		::System::UInt32 get_KeywordExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_KEYWORDEXTRAEFFECTID_OFFSET))(this);
		}

		::System::UInt32 get_BuffCountBuffTypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_BUFFCOUNTBUFFTYPEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_DescAll()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_DESCALL_OFFSET))(this);
		}

		::System::Boolean get_IsExtraEffectAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_ISEXTRAEFFECTAVAILABLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ExtraName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_EXTRANAME_OFFSET))(this);
		}

		::System::String* get_ExtraDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_EXTRADESC_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournKeywordRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournKeywordRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::ExtraEffectRow* get__ExtraEffectRow()
		{
			return ((::RPG::GameCore::ExtraEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET__EXTRAEFFECTROW_OFFSET))(this);
		}

		::RPG::GameCore::ExtraEffectRow* get__KeywordExtraEffectRow()
		{
			return ((::RPG::GameCore::ExtraEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET__KEYWORDEXTRAEFFECTROW_OFFSET))(this);
		}

	};
}
