#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HAOGAENOKFH;
namespace System { class String; }

#define HAOGAENOKFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE52C40)
#define HAOGAENOKFH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE528E0)

inline static constexpr unsigned int HAOGAENOKFH_TypeDefinitionIndex = 15405;

	class HAOGAENOKFH : public ::System::Object
	{
	public:
		::System::String* EEBNMNAJJHF; // 0x10
		::System::UInt32 HMKPKMILCAE; // 0x18
		::RPG::GameCore::CombatPowerRelicRarityType NHAFDDACLLA; // 0x1C
		::System::UInt32 LEPEPJIHEFL; // 0x20
		::System::UInt32 JPJLIFNHPAA; // 0x24
		::System::UInt32 BAFNGNPHHEC; // 0x28
		::System::UInt32 JDGHCBCNMBI; // 0x2C
		::System::UInt32 HLLMOIBCKNO; // 0x30
		::System::UInt32 OCMAKGJLFBJ; // 0x34
		::RPG::GameCore::CombatPowerRelicRarityType ILHDODKFKOI; // 0x38
		::System::UInt32 OPJDGJNAKFF; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOGAENOKFH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HAOGAENOKFH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HAOGAENOKFH*))((::PBYTE)hIl2Cpp + HAOGAENOKFH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
