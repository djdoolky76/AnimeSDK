#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PENGPJKHIJF;
namespace RPG::GameCore { class ItemConfig; }

#define PENGPJKHIJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A9790)
#define PENGPJKHIJF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2A9250)

inline static constexpr unsigned int PENGPJKHIJF_TypeDefinitionIndex = 12995;

	class PENGPJKHIJF : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HFIAAGAKFMD; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* LOJCIDLKPKG; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* OGALGHMIIAH; // 0x20
		::Il2CppArray<::System::UInt32>* MLMEGBLDFKE; // 0x28
		::Il2CppArray<::System::UInt32>* LCHKKJDBLGM; // 0x30
		::Il2CppArray<::System::UInt32>* OGEOMCGNNMP; // 0x38
		::Il2CppArray<::System::UInt32>* JEBMBCLBIOI; // 0x40
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* EGEEJLHBALB; // 0x48
		::Il2CppArray<::System::UInt32>* LDKPJPCMMAE; // 0x50
		::System::UInt32 IDBJENCBJHM; // 0x58
		::System::UInt32 EMNJGCPDIFF; // 0x5C
		::System::UInt32 DLCKKJFMJOB; // 0x60
		::System::UInt32 PHOIICMCGIH; // 0x64
		::System::UInt32 GNGENMHNLAH; // 0x68
		::System::UInt32 IMCMJHAMMKK; // 0x6C
		::System::UInt32 PHFMCACHFIJ; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGPJKHIJF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PENGPJKHIJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PENGPJKHIJF*))((::PBYTE)hIl2Cpp + PENGPJKHIJF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
