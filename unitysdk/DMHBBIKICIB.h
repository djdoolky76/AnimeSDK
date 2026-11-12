#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DMHBBIKICIB;
class FCOEMCEDLNL;
namespace System { class String; }

#define DMHBBIKICIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF130E0)
#define DMHBBIKICIB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF12C60)

inline static constexpr unsigned int DMHBBIKICIB_TypeDefinitionIndex = 11556;

	class DMHBBIKICIB : public ::System::Object
	{
	public:
		::System::String* JFOOFHLOJAO; // 0x10
		::System::String* AMOILJKCNOI; // 0x18
		::System::String* MNMGEPNEJDO; // 0x20
		::System::String* LEPNNKOAOJF; // 0x28
		::System::String* JKIMMLOIJKJ; // 0x30
		::System::String* PPMFCIIEGJF; // 0x38
		::System::String* HLBMOIKELLN; // 0x40
		::RPG::Client::TextID HMGGLIEMDDF; // 0x48
		::RPG::Client::TextID AJKJEBNLMIE; // 0x58
		::RPG::Client::TextID PAFJIBPHLBF; // 0x68
		::System::UInt32 ACCJKGEKHKP; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBBIKICIB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DMHBBIKICIB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMHBBIKICIB*))((::PBYTE)hIl2Cpp + DMHBBIKICIB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
