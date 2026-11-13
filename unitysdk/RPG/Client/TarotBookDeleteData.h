#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class TarotBookDeleteInfoRow; }
namespace System { class String; }

#define RPG_CLIENT_TAROTBOOKDELETEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C4E00)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0x1C5C4B80)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_CONTENTTEXTPARAM_OFFSET UNITYSDK_OFFSET(0x1C5C4BF0)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_FADEINTIME_OFFSET UNITYSDK_OFFSET(0x1C5C4D60)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_FINALPROGRESSRATIO_OFFSET UNITYSDK_OFFSET(0x1C5C4D00)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_GAPTIME_OFFSET UNITYSDK_OFFSET(0x1C5C4DB0)
#define RPG_CLIENT_TAROTBOOKDELETEDATA_GET_PROGRESSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C5C4C90)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookDeleteData_TypeDefinitionIndex = 70004;

	class TarotBookDeleteData : public ::System::Object
	{
	public:
		::RPG::GameCore::TarotBookDeleteInfoRow* _Meta; // 0x10
		::System::String* _ContentTextParam; // 0x18
		::System::Void _ctor(::RPG::GameCore::TarotBookDeleteInfoRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookDeleteInfoRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ContentTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_GET_CONTENTTEXTID_OFFSET))(this);
		}

		::System::String* get_ContentTextParam()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_GET_CONTENTTEXTPARAM_OFFSET))(this);
		}

		::RPG::Client::TextID get_ProgressDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_GET_PROGRESSDESCRIPTION_OFFSET))(this);
		}

		::System::Single get_FinalProgressRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_GET_FINALPROGRESSRATIO_OFFSET))(this);
		}

		::System::Single get_FadeInTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_GET_FADEINTIME_OFFSET))(this);
		}

		::System::Single get_GapTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKDELETEDATA_GET_GAPTIME_OFFSET))(this);
		}

	};
}
