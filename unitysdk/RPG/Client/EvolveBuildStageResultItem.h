#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EvolveBuildStageResultItem; }
namespace System { class String; }

#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1DB61F10)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB62FC0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1DB63030)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_NUMTEXTFORMAT_OFFSET UNITYSDK_OFFSET(0x1DB62FF0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_NUM_OFFSET UNITYSDK_OFFSET(0x1DB63010)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1DB62FD0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1DB63040)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_NUMTEXTFORMAT_OFFSET UNITYSDK_OFFSET(0x1DB63000)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_NUM_OFFSET UNITYSDK_OFFSET(0x1DB63020)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1DB62FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStageResultItem_TypeDefinitionIndex = 65225;

	class EvolveBuildStageResultItem : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _NumTextFormat_k__BackingField; // 0x18
		::RPG::Client::TextID _Title_k__BackingField; // 0x28
		::System::UInt32 _Num_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildStageResultItem* Create(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::System::UInt32 a3, ::System::String* a4)
		{
			return ((::RPG::Client::EvolveBuildStageResultItem*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_NumTextFormat()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_NUMTEXTFORMAT_OFFSET))(this);
		}

		::System::Void set_NumTextFormat(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_NUMTEXTFORMAT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_NUM_OFFSET))(this);
		}

		::System::Void set_Num(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_NUM_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULTITEM_SET_ICONPATH_OFFSET))(this, a1);
		}

	};
}
