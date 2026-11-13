#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerEffect.h"
class ACNFHAKPMIK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class CRPVirtualCameraTargetConfig; }
namespace SimpleJSON { class JSONNode; }

#define ACNFHAKPMIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E017250)
#define ACNFHAKPMIK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E018680)
#define ACNFHAKPMIK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E018600)
#define ACNFHAKPMIK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E0172A0)
#define ACNFHAKPMIK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E0171D0)

inline static constexpr unsigned int ACNFHAKPMIK_TypeDefinitionIndex = 23319;

	class ACNFHAKPMIK : public ::RPG::GameCore::TriggerEffect
	{
	public:
		::RPG::GameCore::CRPVirtualCameraTargetConfig* AKJBPEPHNPG; // 0x158
		::RPG::GameCore::CRPVirtualCameraTargetConfig* IMAFEMCIJDK; // 0x160
		::RPG::GameCore::CRPVirtualCameraTargetConfig* HENPNIABNAD; // 0x168
		::RPG::GameCore::CRPVirtualCameraTargetConfig* IEIOCHGPBAM; // 0x170
		::RPG::GameCore::CRPVirtualCameraTargetConfig* MFHDAFAFHAD; // 0x178
		::System::Boolean NIEKCEHHNIP; // 0x180
		::System::Boolean BEBFMAPHDLK; // 0x181
		::System::Byte _padding0[0x2];
		::System::Single GGKJFMBJEIB; // 0x184
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNFHAKPMIK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ACNFHAKPMIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ACNFHAKPMIK*))((::PBYTE)hIl2Cpp + ACNFHAKPMIK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ACNFHAKPMIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ACNFHAKPMIK*))((::PBYTE)hIl2Cpp + ACNFHAKPMIK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::ACNFHAKPMIK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::ACNFHAKPMIK*))((::PBYTE)hIl2Cpp + ACNFHAKPMIK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::ACNFHAKPMIK* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::ACNFHAKPMIK*))((::PBYTE)hIl2Cpp + ACNFHAKPMIK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
