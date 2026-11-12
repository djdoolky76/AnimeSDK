#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipType.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/StoryBlackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KGABIOFEDBP;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define KGABIOFEDBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E27EEB0)
#define KGABIOFEDBP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E27EEF0)
#define KGABIOFEDBP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E27EE40)

inline static constexpr unsigned int KGABIOFEDBP_TypeDefinitionIndex = 23830;

	class KGABIOFEDBP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DACJLKFGKBC; // 0x18
		::System::String* NLBAGBJGHMH; // 0x20
		::System::String* NPFOAIGHHJB; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ANAOOKCOBFJ; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* IKEOGLDKPKH; // 0x38
		::System::String* IJHMIFMBKAI; // 0x40
		::RPG::GameCore::ScreenTransferMode GANFAJFCMPK; // 0x48
		::RPG::GameCore::PerformanceSkipType HLEKAACPFHP; // 0x4C
		::RPG::GameCore::ScreenTransferType FLBAPNOPPKI; // 0x50
		::RPG::GameCore::StoryBlackType NKLLADBJFJF; // 0x54
		::System::UInt32 BDNMINKICFK; // 0x58
		::System::Single EPKNMGMCCCB; // 0x5C
		::System::Single ALEIEMPBHOM; // 0x60
		::System::Single MGMKBKFGPIH; // 0x64
		::RPG::GameCore::ScreenTransferType DPAHKIFFDCP; // 0x68
		::System::UInt32 MJHLOMMCIIJ; // 0x6C
		::RPG::GameCore::StoryBlackType FGOKJHGMBDL; // 0x70
		::System::UInt32 JMDAGIAEMBB; // 0x74
		::System::Boolean ECBCEHKNNJN; // 0x78
		::System::Boolean CLANKALDLOP; // 0x79
		::System::Boolean FFDBJJFAPOD; // 0x7A
		::System::Boolean KOECAJEKEIB; // 0x7B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGABIOFEDBP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KGABIOFEDBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KGABIOFEDBP*))((::PBYTE)hIl2Cpp + KGABIOFEDBP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KGABIOFEDBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KGABIOFEDBP*))((::PBYTE)hIl2Cpp + KGABIOFEDBP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
