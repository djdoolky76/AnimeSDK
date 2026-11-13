#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournUnderlineParamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace RPG::Client { class RogueKeywordData; }
namespace RPG::Client { class RogueTournKeywordUnderlineParam; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x1CEB6A80)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB6B00)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CEB69C0)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CEB6930)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CEB6870)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x1CEB6980)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CEB68C0)
#define RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CEB6820)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournKeywordUnderlineParam_TypeDefinitionIndex = 69820;

	class RogueTournKeywordUnderlineParam : public ::System::Object
	{
	public:
		::RPG::Client::RogueKeywordData* _Keyword; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournUnderlineParamType get_Type()
		{
			return ((::RPG::Client::RogueTournUnderlineParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordData* get_Keyword()
		{
			return ((::RPG::Client::RogueKeywordData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_GET_KEYWORD_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::IRogueTournUnderlineParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournUnderlineParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_EQUALS_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournKeywordUnderlineParam* Create(::RPG::Client::RogueKeywordData* a1)
		{
			return ((::RPG::Client::RogueTournKeywordUnderlineParam*(*)(::RPG::Client::RogueKeywordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNKEYWORDUNDERLINEPARAM_CREATE_OFFSET))(a1);
		}

	};
}
