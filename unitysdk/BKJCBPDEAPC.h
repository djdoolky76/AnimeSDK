#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ChimeraBattleShowNPCTalkBubble; }

#define BKJCBPDEAPC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA59500)
#define BKJCBPDEAPC_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0xBA59680)
#define BKJCBPDEAPC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBA59540)

inline static constexpr unsigned int BKJCBPDEAPC_TypeDefinitionIndex = 78409;

	class BKJCBPDEAPC : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraBattleShowNPCTalkBubble* IGHAHBNLIJA; // 0x10
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
		::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowNPCTalkBubble* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble*))((::PBYTE)hIl2Cpp + BKJCBPDEAPC_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCBPDEAPC_NPAFMEBNFOB_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCBPDEAPC_KMFNKDMEJBC_OFFSET))(this);
		}

	};
