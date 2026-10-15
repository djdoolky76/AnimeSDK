#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DBEILICHGCG;
class JBACCAGFHON;
namespace RPG::Client { class CakeRaceHUDRichTextMsgData; }
namespace RPG::Client { class CakeRaceParticipantData; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC91BA70)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC91BB10)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETPARTICIPANT_OFFSET UNITYSDK_OFFSET(0xC91BD20)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTID_OFFSET UNITYSDK_OFFSET(0xC91BC60)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTPARAMS_OFFSET UNITYSDK_OFFSET(0xC91BCC0)
#define RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTSTR_OFFSET UNITYSDK_OFFSET(0xC91BB20)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHUDRichTextMsgData_TypeDefinitionIndex = 63061;

	class CakeRaceHUDRichTextMsgData : public ::System::Object
	{
	public:
		::JBACCAGFHON* _Services; // 0x10
		::DBEILICHGCG* _EventParam; // 0x18
		::RPG::Client::TextID _Text; // 0x20
		::System::Void _ctor(::RPG::Client::TextID a1, ::DBEILICHGCG* a2, ::JBACCAGFHON* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::DBEILICHGCG*, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::CakeRaceHUDRichTextMsgData* Create(::RPG::Client::TextID a1, ::DBEILICHGCG* a2, ::JBACCAGFHON* a3)
		{
			return ((::RPG::Client::CakeRaceHUDRichTextMsgData*(*)(::RPG::Client::TextID, ::DBEILICHGCG*, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::String* GetTextStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTSTR_OFFSET))(this);
		}

		::RPG::Client::TextID GetTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTID_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetTextParams()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETTEXTPARAMS_OFFSET))(this);
		}

		::RPG::Client::CakeRaceParticipantData* GetParticipant()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHUDRICHTEXTMSGDATA_GETPARTICIPANT_OFFSET))(this);
		}

	};
}
