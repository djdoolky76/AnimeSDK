#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIStyle.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OAKAGIALIDL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define OAKAGIALIDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F7510)
#define OAKAGIALIDL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5F7550)
#define OAKAGIALIDL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5F74B0)

inline static constexpr unsigned int OAKAGIALIDL_TypeDefinitionIndex = 24143;

	class OAKAGIALIDL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* PBLPLDJKPEI; // 0x20
		::RPG::GameCore::StageInvasionMonsterUIStyle PPDLJLBALGE; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GGOKKGGEJAH; // 0x30
		::RPG::Client::TextID DDPBJAPNLAL; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAKAGIALIDL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OAKAGIALIDL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OAKAGIALIDL*))((::PBYTE)hIl2Cpp + OAKAGIALIDL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OAKAGIALIDL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OAKAGIALIDL*))((::PBYTE)hIl2Cpp + OAKAGIALIDL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
