#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DANPOJMKNAP;
class FCOEMCEDLNL;

#define DANPOJMKNAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF0E60)
#define DANPOJMKNAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EEF0AD0)

inline static constexpr unsigned int DANPOJMKNAP_TypeDefinitionIndex = 14122;

	class DANPOJMKNAP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* KOAGHJCOOGA; // 0x10
		::Il2CppArray<::System::UInt32>* FMMELPPDMKI; // 0x18
		::RPG::Client::TextID DCDCCOBHCAP; // 0x20
		::System::UInt32 EPDCFPAADJF; // 0x30
		::System::UInt32 GABPGBDNDEH; // 0x34
		::RPG::Client::TextID FAHDNMHFOKD; // 0x38
		::System::UInt32 GGKPLJJMBBA; // 0x48
		::System::Boolean CBCAAENONPB; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DANPOJMKNAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DANPOJMKNAP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DANPOJMKNAP*))((::PBYTE)hIl2Cpp + DANPOJMKNAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
