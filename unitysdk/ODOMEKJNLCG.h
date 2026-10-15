#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }

#define ODOMEKJNLCG_FHLKFMGAKJN_OFFSET UNITYSDK_OFFSET(0xBDF1FB0)
#define ODOMEKJNLCG_IFNCGMDKJJL_OFFSET UNITYSDK_OFFSET(0xBDF1C60)

inline static constexpr unsigned int ODOMEKJNLCG_TypeDefinitionIndex = 79983;

	class ODOMEKJNLCG : public ::System::Object
	{
	public:
		static ::RPG::Client::Promises::IPromise* IFNCGMDKJJL(::RPG::Client::TextID a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + ODOMEKJNLCG_IFNCGMDKJJL_OFFSET))(a1);
		}

		static ::System::Void FHLKFMGAKJN(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3, ::RPG::Client::TextID a4, ::System::Action* a5, ::System::Action* a6)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + ODOMEKJNLCG_FHLKFMGAKJN_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

	};
