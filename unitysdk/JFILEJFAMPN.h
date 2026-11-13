#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostSubmitType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JFILEJFAMPN;
namespace System { class String; }

#define JFILEJFAMPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59F4B0)
#define JFILEJFAMPN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E59EDE0)

inline static constexpr unsigned int JFILEJFAMPN_TypeDefinitionIndex = 14077;

	class JFILEJFAMPN : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BDKECJFBAJJ; // 0x10
		::System::String* BDEBECLIHMD; // 0x18
		::Il2CppArray<::System::UInt32>* MHLNDBFHHLF; // 0x20
		::System::String* BDACPPLKLGL; // 0x28
		::System::String* EEIEODMEMFI; // 0x30
		::System::String* ODLDEEANNCM; // 0x38
		::Il2CppArray<::System::UInt32>* LIDHGBEAJMA; // 0x40
		::Il2CppArray<::System::UInt32>* NEPKPFOBEIO; // 0x48
		::System::String* GACBINGMEJB; // 0x50
		::RPG::GameCore::LimaoNewsPostType EFFFIJHJHMA; // 0x58
		::System::UInt32 DGLJLJEHNNB; // 0x5C
		::RPG::Client::TextID DPFCAIKMBEP; // 0x60
		::System::UInt32 KHIALKEMEGH; // 0x70
		::System::UInt32 AEONKNDCDKN; // 0x74
		::RPG::GameCore::LimaoNewsOfficeSurveyType BEBEEMKOBNN; // 0x78
		::System::UInt32 JFBDBCKPPEI; // 0x7C
		::RPG::Client::TextID KJGJGNLACKF; // 0x80
		::RPG::GameCore::LimaoNewsPostSubmitType GAPKKIEIEHE; // 0x90
		::System::UInt32 HIHLLBFEONI; // 0x94
		::System::UInt32 ODEKADIBFAO; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFILEJFAMPN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JFILEJFAMPN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFILEJFAMPN*))((::PBYTE)hIl2Cpp + JFILEJFAMPN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
