#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateHouguType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class EPPEFKBPGDC;
class FCOEMCEDLNL;
namespace System { class String; }

#define EPPEFKBPGDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED246C0)
#define EPPEFKBPGDC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED24150)

inline static constexpr unsigned int EPPEFKBPGDC_TypeDefinitionIndex = 11578;

	class EPPEFKBPGDC : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x10
		::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x18
		::System::String* NGAGNNIHGFE; // 0x20
		::System::UInt32 AMONFPEGLAF; // 0x28
		::System::UInt32 EFAIIOHKFGD; // 0x2C
		::RPG::Client::TextID OKCCPDBENOJ; // 0x30
		::System::UInt32 GDLLGLFCEHC; // 0x40
		::System::UInt32 OHFGNODANEP; // 0x44
		::System::UInt32 ILLBMODJJGP; // 0x48
		::RPG::GameCore::FateHouguType GMPGDEINODK; // 0x4C
		::RPG::Client::TextID GMGEMCFDIOE; // 0x50
		::RPG::Client::TextID CBCOAKMDBHD; // 0x60
		::RPG::Client::TextID LEPNNKOAOJF; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPEFKBPGDC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EPPEFKBPGDC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EPPEFKBPGDC*))((::PBYTE)hIl2Cpp + EPPEFKBPGDC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
