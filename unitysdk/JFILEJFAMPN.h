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

#define JFILEJFAMPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E214660)
#define JFILEJFAMPN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E213F90)

inline static constexpr unsigned int JFILEJFAMPN_TypeDefinitionIndex = 14077;

	class JFILEJFAMPN : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BDKECJFBAJJ; // 0x10
		::System::String* GACBINGMEJB; // 0x18
		::System::String* ODLDEEANNCM; // 0x20
		::Il2CppArray<::System::UInt32>* LIDHGBEAJMA; // 0x28
		::System::String* BDACPPLKLGL; // 0x30
		::System::String* BDEBECLIHMD; // 0x38
		::Il2CppArray<::System::UInt32>* MHLNDBFHHLF; // 0x40
		::Il2CppArray<::System::UInt32>* NEPKPFOBEIO; // 0x48
		::System::String* EEIEODMEMFI; // 0x50
		::RPG::Client::TextID DPFCAIKMBEP; // 0x58
		::RPG::Client::TextID KJGJGNLACKF; // 0x68
		::System::UInt32 AEONKNDCDKN; // 0x78
		::RPG::GameCore::LimaoNewsPostSubmitType GAPKKIEIEHE; // 0x7C
		::RPG::GameCore::LimaoNewsPostType EFFFIJHJHMA; // 0x80
		::System::UInt32 HIHLLBFEONI; // 0x84
		::RPG::GameCore::LimaoNewsOfficeSurveyType BEBEEMKOBNN; // 0x88
		::System::UInt32 DGLJLJEHNNB; // 0x8C
		::System::UInt32 ODEKADIBFAO; // 0x90
		::System::UInt32 KHIALKEMEGH; // 0x94
		::System::UInt32 JFBDBCKPPEI; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFILEJFAMPN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JFILEJFAMPN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFILEJFAMPN*))((::PBYTE)hIl2Cpp + JFILEJFAMPN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
