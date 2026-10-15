#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KHBIBLMGMGC;
namespace System { class String; }

#define KHBIBLMGMGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D091450)
#define KHBIBLMGMGC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0911E0)

inline static constexpr unsigned int KHBIBLMGMGC_TypeDefinitionIndex = 15137;

	class KHBIBLMGMGC : public ::System::Object
	{
	public:
		::System::String* LGNKFIIEICM; // 0x10
		::System::String* MEDEFCIKNLA; // 0x18
		::System::String* BFLIFKBEOPJ; // 0x20
		::System::String* BIEJJCIFBGA; // 0x28
		::System::String* EOAHMJFOLHD; // 0x30
		::System::String* KACPIAGHKMN; // 0x38
		::System::String* APNFMFEMPNI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBIBLMGMGC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KHBIBLMGMGC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KHBIBLMGMGC*))((::PBYTE)hIl2Cpp + KHBIBLMGMGC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
