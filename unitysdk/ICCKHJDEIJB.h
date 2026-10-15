#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class ICCKHJDEIJB;
namespace System { class String; }

#define ICCKHJDEIJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE19B0)
#define ICCKHJDEIJB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEE1830)

inline static constexpr unsigned int ICCKHJDEIJB_TypeDefinitionIndex = 21059;

	class ICCKHJDEIJB : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* KAHGDLPDJCD; // 0x10
		::System::String* AAMGOJCABAC; // 0x18
		::System::UInt32 BIKLAFLEIOC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCKHJDEIJB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ICCKHJDEIJB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ICCKHJDEIJB*))((::PBYTE)hIl2Cpp + ICCKHJDEIJB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
