#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitEffectConfig; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BMFLJKAEIGP_BPMAIMOMBCL_OFFSET UNITYSDK_OFFSET(0xBDAC900)
#define BMFLJKAEIGP_CTOR_OFFSET UNITYSDK_OFFSET(0xBDACD90)
#define BMFLJKAEIGP_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBDACA40)
#define BMFLJKAEIGP__ONBIND_OFFSET UNITYSDK_OFFSET(0xBDAC770)

inline static constexpr unsigned int BMFLJKAEIGP_TypeDefinitionIndex = 72299;

	class BMFLJKAEIGP : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::GridFightTraitConfigBase* AJDMLJMMPMJ; // 0x60
		::RPG::Client::AnimatorButton* NHNPPHCCPGA; // 0x68
		::System::String* CGNGHKIIGCM; // 0x70
		::System::Action_1<::System::Object*>* AMIEOPJOEIJ; // 0x78
		::RPG::GameCore::BattleGridFightTeamTraitData* NHDBMHJLKNF; // 0x80
		::RPG::Client::GridFightTraitEffectConfig* HECGJKBHOMI; // 0x88
		::System::String* IIFENECAOBG; // 0x90
		::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0x98
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFLJKAEIGP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFLJKAEIGP__ONBIND_OFFSET))(this);
		}

		::System::Void BPMAIMOMBCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMFLJKAEIGP_BPMAIMOMBCL_OFFSET))(this, a1);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BMFLJKAEIGP_DHHDFAAJMMC_OFFSET))(this, a1);
		}

	};
