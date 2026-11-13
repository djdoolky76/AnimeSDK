#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityDiceCombatV2TitleType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FGHCFBENCAN;
namespace System { class String; }

#define FGHCFBENCAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4544C0)
#define FGHCFBENCAN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E454190)

inline static constexpr unsigned int FGHCFBENCAN_TypeDefinitionIndex = 11349;

	class FGHCFBENCAN : public ::System::Object
	{
	public:
		::System::String* JPLIONFJGCL; // 0x10
		::Il2CppArray<::System::UInt32>* PBLPLDJKPEI; // 0x18
		::RPG::Client::TextID OFGKEMCCMIM; // 0x20
		::System::UInt32 NALMBOOCCIN; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID LKMNEALKDLO; // 0x38
		::RPG::GameCore::ActivityDiceCombatV2TitleType NJPLBONOODI; // 0x48
		::System::UInt32 PHFMCACHFIJ; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHCFBENCAN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FGHCFBENCAN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FGHCFBENCAN*))((::PBYTE)hIl2Cpp + FGHCFBENCAN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
