#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDGIOENHBEJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PAMCHATQUESTIONRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0xE4C4A60)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatQuestionResult_TypeDefinitionIndex = 64723;

	class PamChatQuestionResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Tags; // 0x10
		::System::String* Title; // 0x18
		::System::String* EmojiPath; // 0x20
		::System::String* Content; // 0x28
		::System::Void _ctor(::MDGIOENHBEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDGIOENHBEJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATQUESTIONRESULT_CTOR_OFFSET))(this, a1);
		}

	};
}
