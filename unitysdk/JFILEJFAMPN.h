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

#define JFILEJFAMPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D027330)
#define JFILEJFAMPN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D026CA0)

inline static constexpr unsigned int JFILEJFAMPN_TypeDefinitionIndex = 13920;

	class JFILEJFAMPN : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MHLNDBFHHLF; // 0x10
		::System::String* ODLDEEANNCM; // 0x18
		::Il2CppArray<::System::UInt32>* NEPKPFOBEIO; // 0x20
		::Il2CppArray<::System::UInt32>* LIDHGBEAJMA; // 0x28
		::System::String* EEIEODMEMFI; // 0x30
		::System::String* BDEBECLIHMD; // 0x38
		::System::String* BDACPPLKLGL; // 0x40
		::Il2CppArray<::System::UInt32>* BDKECJFBAJJ; // 0x48
		::RPG::GameCore::LimaoNewsPostType EFFFIJHJHMA; // 0x50
		::System::UInt32 AEONKNDCDKN; // 0x54
		::RPG::GameCore::LimaoNewsPostSubmitType GAPKKIEIEHE; // 0x58
		::System::UInt32 DGLJLJEHNNB; // 0x5C
		::System::UInt32 JFBDBCKPPEI; // 0x60
		::System::UInt32 HIHLLBFEONI; // 0x64
		::System::UInt32 KHIALKEMEGH; // 0x68
		::RPG::GameCore::LimaoNewsOfficeSurveyType BEBEEMKOBNN; // 0x6C
		::System::UInt32 ODEKADIBFAO; // 0x70
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID DPFCAIKMBEP; // 0x78
		::RPG::Client::TextID KJGJGNLACKF; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFILEJFAMPN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JFILEJFAMPN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFILEJFAMPN*))((::PBYTE)hIl2Cpp + JFILEJFAMPN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
