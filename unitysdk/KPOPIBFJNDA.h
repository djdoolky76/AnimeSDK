#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"
#include "unitysdk/RPG/Client/LittleGame/TRFMsgType.h"
namespace System { class Object; }

#define KPOPIBFJNDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90C3E0)
#define KPOPIBFJNDA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C90C3F0)

inline static constexpr unsigned int KPOPIBFJNDA_TypeDefinitionIndex = 42471;

	class KPOPIBFJNDA : public ::KIDPCOMKMKJ
	{
	public:
		::Il2CppArray<::System::Object*>* DMFEKIIDMFL; // 0x18
		::RPG::Client::LittleGame::TRFMsgType HHNELAIEKDP; // 0x20
		::System::Void _ctor(::RPG::Client::LittleGame::TRFMsgType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TRFMsgType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + KPOPIBFJNDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOPIBFJNDA_NPAFMEBNFOB_OFFSET))(this);
		}

	};
