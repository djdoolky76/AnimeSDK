#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDMAAFGJMJH.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueFormulaData; }
namespace System { class Object; }

#define OFAFAALOFEF_CTOR_OFFSET UNITYSDK_OFFSET(0xBE39CC0)
#define OFAFAALOFEF_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0xBE39CD0)
#define OFAFAALOFEF_OKBIPDHEKHF_OFFSET UNITYSDK_OFFSET(0xBE39DF0)

inline static constexpr unsigned int OFAFAALOFEF_TypeDefinitionIndex = 67252;

	class OFAFAALOFEF : public ::System::Object
	{
	public:
		::RPG::Client::RogueFormulaData* FPDGGPGNLCI; // 0x10
		::NDMAAFGJMJH LNPLJMDCPEP; // 0x18
		::System::Void _ctor(::NDMAAFGJMJH a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDMAAFGJMJH))((::PBYTE)hIl2Cpp + OFAFAALOFEF_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAFAALOFEF_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaData* OKBIPDHEKHF()
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAFAALOFEF_OKBIPDHEKHF_OFFSET))(this);
		}

	};
