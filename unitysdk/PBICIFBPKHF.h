#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PBICIFBPKHF;
namespace RPG::GameCore { class ItemConfig; }

#define PBICIFBPKHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D297A50)
#define PBICIFBPKHF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2975A0)

inline static constexpr unsigned int PBICIFBPKHF_TypeDefinitionIndex = 12962;

	class PBICIFBPKHF : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* EGEEJLHBALB; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* LOJCIDLKPKG; // 0x18
		::Il2CppArray<::System::UInt32>* JEBMBCLBIOI; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* OGALGHMIIAH; // 0x28
		::Il2CppArray<::System::UInt32>* OGEOMCGNNMP; // 0x30
		::Il2CppArray<::System::UInt32>* MLMEGBLDFKE; // 0x38
		::Il2CppArray<::System::UInt32>* LCHKKJDBLGM; // 0x40
		::Il2CppArray<::System::UInt32>* HFIAAGAKFMD; // 0x48
		::System::UInt32 IMCMJHAMMKK; // 0x50
		::System::UInt32 PHOIICMCGIH; // 0x54
		::System::UInt32 GNGENMHNLAH; // 0x58
		::System::UInt32 PHFMCACHFIJ; // 0x5C
		::System::UInt32 EMNJGCPDIFF; // 0x60
		::System::UInt32 DLCKKJFMJOB; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBICIFBPKHF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PBICIFBPKHF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PBICIFBPKHF*))((::PBYTE)hIl2Cpp + PBICIFBPKHF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
