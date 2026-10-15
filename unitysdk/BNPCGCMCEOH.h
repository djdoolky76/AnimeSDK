#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAlertType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/UltraSkillAlertType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BNPCGCMCEOH_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE1DB0)

inline static constexpr unsigned int BNPCGCMCEOH_TypeDefinitionIndex = 73287;

	class BNPCGCMCEOH : public ::System::Object
	{
	public:
		::System::String* MABCLHBFLCN; // 0x10
		::System::String* ADMPOKJGIBH; // 0x18
		::System::String* OEDECKGEFEO; // 0x20
		::RPG::GameCore::SkillType JBCBONFABOM; // 0x28
		::RPG::GameCore::UltraSkillAlertType MNKNKEKLFJO; // 0x2C
		::RPG::GameCore::BattleAlertType HNBJHDBMMNN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPCGCMCEOH_CTOR_OFFSET))(this);
		}

	};
