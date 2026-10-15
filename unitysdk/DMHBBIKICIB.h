#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DMHBBIKICIB;
class FCOEMCEDLNL;
namespace System { class String; }

#define DMHBBIKICIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD16490)
#define DMHBBIKICIB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD16010)

inline static constexpr unsigned int DMHBBIKICIB_TypeDefinitionIndex = 11505;

	class DMHBBIKICIB : public ::System::Object
	{
	public:
		::System::String* JKIMMLOIJKJ; // 0x10
		::System::String* JFOOFHLOJAO; // 0x18
		::System::String* PPMFCIIEGJF; // 0x20
		::System::String* LEPNNKOAOJF; // 0x28
		::System::String* HLBMOIKELLN; // 0x30
		::System::String* MNMGEPNEJDO; // 0x38
		::System::String* AMOILJKCNOI; // 0x40
		::System::UInt32 ACCJKGEKHKP; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AJKJEBNLMIE; // 0x50
		::RPG::Client::TextID PAFJIBPHLBF; // 0x60
		::RPG::Client::TextID HMGGLIEMDDF; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHBBIKICIB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DMHBBIKICIB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMHBBIKICIB*))((::PBYTE)hIl2Cpp + DMHBBIKICIB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
