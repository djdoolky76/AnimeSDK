#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GDPGBLHPJNO;
namespace System { class String; }

#define GDPGBLHPJNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE315E0)
#define GDPGBLHPJNO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE312D0)

inline static constexpr unsigned int GDPGBLHPJNO_TypeDefinitionIndex = 11281;

	class GDPGBLHPJNO : public ::System::Object
	{
	public:
		::System::String* NJINPDOKGPM; // 0x10
		::System::String* NBKAKPMNIDF; // 0x18
		::Il2CppArray<::System::UInt32>* KECPLLBNNNA; // 0x20
		::System::String* BIDDPFIKJLN; // 0x28
		::Il2CppArray<::System::UInt32>* GBJGDOAAEKL; // 0x30
		::System::UInt32 KFNMJCJPNBK; // 0x38
		::System::UInt32 LIIPLGLNPGB; // 0x3C
		::RPG::Client::TextID PLGOICOBHGA; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPGBLHPJNO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GDPGBLHPJNO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GDPGBLHPJNO*))((::PBYTE)hIl2Cpp + GDPGBLHPJNO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
