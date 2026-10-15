#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BACIMFPMOPJ;
class FCOEMCEDLNL;
namespace System { class String; }

#define BACIMFPMOPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC2980)
#define BACIMFPMOPJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCC26D0)

inline static constexpr unsigned int BACIMFPMOPJ_TypeDefinitionIndex = 11568;

	class BACIMFPMOPJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FOHHOOKJPIM; // 0x10
		::System::String* BFMNOLGCCKH; // 0x18
		::System::UInt32 HNEIIAGADGO; // 0x20
		::System::UInt32 JFDHFPIIGCC; // 0x24
		::System::UInt32 DOBKKDIECDO; // 0x28
		::System::UInt32 PHFMCACHFIJ; // 0x2C
		::RPG::Client::TextID OENAMINOLLF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACIMFPMOPJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BACIMFPMOPJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BACIMFPMOPJ*))((::PBYTE)hIl2Cpp + BACIMFPMOPJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
