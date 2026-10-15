#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class BDELHFKGEEI;
class FCOEMCEDLNL;
namespace System { class String; }

#define BDELHFKGEEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCEDB0)
#define BDELHFKGEEI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCCEA60)

inline static constexpr unsigned int BDELHFKGEEI_TypeDefinitionIndex = 12495;

	class BDELHFKGEEI : public ::System::Object
	{
	public:
		::System::String* PNCFJGFAEMA; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x20
		::System::String* GINFOPOAKHK; // 0x28
		::RPG::Client::TextID NMAHGFAPENI; // 0x30
		::System::UInt32 PHFMCACHFIJ; // 0x40
		::System::UInt32 ODEKADIBFAO; // 0x44
		::RPG::Client::TextID OENAMINOLLF; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDELHFKGEEI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BDELHFKGEEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BDELHFKGEEI*))((::PBYTE)hIl2Cpp + BDELHFKGEEI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
