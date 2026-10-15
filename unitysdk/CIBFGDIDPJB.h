#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetDiySlotType.h"
#include "unitysdk/System/Object.h"
class CIBFGDIDPJB;
class FCOEMCEDLNL;
namespace System { class String; }

#define CIBFGDIDPJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC14060)
#define CIBFGDIDPJB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC13D40)

inline static constexpr unsigned int CIBFGDIDPJB_TypeDefinitionIndex = 14411;

	class CIBFGDIDPJB : public ::System::Object
	{
	public:
		::System::String* HCDCEPGEMKD; // 0x10
		::System::String* HFKHMNJPGMI; // 0x18
		::RPG::GameCore::PetDiySlotType MPADIDFJBEF; // 0x20
		::System::Single EMNHIJAIMBE; // 0x24
		::System::UInt32 AILMCDDKIFO; // 0x28
		::System::UInt32 OBOMNIHKHMM; // 0x2C
		::System::UInt32 LLDCHLHNADA; // 0x30
		::System::UInt32 DGIPOMANFEM; // 0x34
		::System::UInt32 BEOFPCAACEP; // 0x38
		::System::UInt32 FMLGGKAFMKC; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBFGDIDPJB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CIBFGDIDPJB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CIBFGDIDPJB*))((::PBYTE)hIl2Cpp + CIBFGDIDPJB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
