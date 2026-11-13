#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCNFFGBIMPD.h"
namespace RPG::Client { class GridFightTraitBonusConfig; }
namespace RPG::Client { class GridFightTraitSpaceEffect; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }

#define HOGIJPKICBF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF23450)
#define HOGIJPKICBF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF23540)
#define HOGIJPKICBF_BPMAIMOMBCL_OFFSET UNITYSDK_OFFSET(0x1AF22DA0)
#define HOGIJPKICBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF23610)
#define HOGIJPKICBF_GENEPMBBGPC_OFFSET UNITYSDK_OFFSET(0x1AF22A30)
#define HOGIJPKICBF_MJNBJHBOBGF_OFFSET UNITYSDK_OFFSET(0x1AF232A0)
#define HOGIJPKICBF_NPDPOMOGIDL_OFFSET UNITYSDK_OFFSET(0x1AF22CD0)
#define HOGIJPKICBF_PBJKBHEGGGC_OFFSET UNITYSDK_OFFSET(0x1AF22C60)
#define HOGIJPKICBF_PKLAFBFEEDF_OFFSET UNITYSDK_OFFSET(0x1AF22EA0)
#define HOGIJPKICBF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1AF229A0)
#define HOGIJPKICBF___UPDATEEFFECTDATA_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AF23680)

inline static constexpr unsigned int HOGIJPKICBF_TypeDefinitionIndex = 74373;

	class HOGIJPKICBF : public ::OCNFFGBIMPD
	{
	public:
		::RPG::Client::GridFightTraitBonusConfig* ODCBJGENKDF; // 0x128
		::RPG::Client::GridFightTraitSpaceEffect* CCKHOKFBBEE; // 0x130
		::System::UInt32 MEOFDHOMCKP; // 0x138
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGIJPKICBF_CTOR_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGIJPKICBF__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NPDPOMOGIDL(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + HOGIJPKICBF_NPDPOMOGIDL_OFFSET))(this, a1);
		}

		::System::Void GENEPMBBGPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGIJPKICBF_GENEPMBBGPC_OFFSET))(this);
		}

		::System::Void PBJKBHEGGGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGIJPKICBF_PBJKBHEGGGC_OFFSET))(this);
		}

		::System::Void BPMAIMOMBCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOGIJPKICBF_BPMAIMOMBCL_OFFSET))(this, a1);
		}

		::System::String* PKLAFBFEEDF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGIJPKICBF_PKLAFBFEEDF_OFFSET))(this);
		}

		::System::Void MJNBJHBOBGF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOGIJPKICBF_MJNBJHBOBGF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGIJPKICBF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGIJPKICBF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Boolean __UpdateEffectData_b__2_0(::RPG::Client::GridFightTraitBonusConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + HOGIJPKICBF___UPDATEEFFECTDATA_B__2_0_OFFSET))(this, a1);
		}

	};
