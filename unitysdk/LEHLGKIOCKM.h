#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyContentTrigger.h"
#include "unitysdk/RPG/Client/MonopolyContentType.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MonopolyOptionalGroupEventDisplayData; }

#define LEHLGKIOCKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB653F50)
#define LEHLGKIOCKM_TRIGGER_OFFSET UNITYSDK_OFFSET(0xB653F70)

inline static constexpr unsigned int LEHLGKIOCKM_TypeDefinitionIndex = 66285;

	class LEHLGKIOCKM : public ::RPG::Client::MonopolyContentTrigger
	{
	public:
		::RPG::Client::MonopolyOptionalGroupEventDisplayData* FECPHJNPPJB; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::MonopolyContentType a3, ::RPG::Client::MonopolyOptionalGroupEventDisplayData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MonopolyContentType, ::RPG::Client::MonopolyOptionalGroupEventDisplayData*))((::PBYTE)hIl2Cpp + LEHLGKIOCKM_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::LuaUIController* Trigger()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHLGKIOCKM_TRIGGER_OFFSET))(this);
		}

	};
