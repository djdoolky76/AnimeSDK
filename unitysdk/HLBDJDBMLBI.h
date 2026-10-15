#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIPJIAJGJIJ.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueKeywordData; }
namespace System { class Object; }

#define HLBDJDBMLBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15D4DD30)
#define HLBDJDBMLBI_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0x15D4DD40)
#define HLBDJDBMLBI_OBLLHNNHLAP_OFFSET UNITYSDK_OFFSET(0x15D4DDE0)

inline static constexpr unsigned int HLBDJDBMLBI_TypeDefinitionIndex = 67254;

	class HLBDJDBMLBI : public ::System::Object
	{
	public:
		::RPG::Client::RogueKeywordData* FGABBEKDPAP; // 0x10
		::JIPJIAJGJIJ LNPLJMDCPEP; // 0x18
		::System::Void _ctor(::JIPJIAJGJIJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIPJIAJGJIJ))((::PBYTE)hIl2Cpp + HLBDJDBMLBI_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBDJDBMLBI_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordData* OBLLHNNHLAP()
		{
			return ((::RPG::Client::RogueKeywordData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBDJDBMLBI_OBLLHNNHLAP_OFFSET))(this);
		}

	};
