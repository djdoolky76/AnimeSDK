#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TaskState.h"
#include "unitysdk/RPG/GameCore/StateTreeTransitionToType.h"
#include "unitysdk/RPG/GameCore/StateTreeTransitionTriggerType.h"
#include "unitysdk/System/Object.h"
class DJPBAKPBELL;
class GKDAANCFPGO;
class PAPOPANPGIJ;
namespace RPG::GameCore { class StateTreeTransitionConfig; }
namespace System { class String; }

#define MGPEJKEMDPK_AIKDAHGHDEI_OFFSET UNITYSDK_OFFSET(0x1C74C970)
#define MGPEJKEMDPK_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1C74CE70)
#define MGPEJKEMDPK_CFFJKMHBMOO_OFFSET UNITYSDK_OFFSET(0x1C74CAB0)
#define MGPEJKEMDPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74C890)
#define MGPEJKEMDPK_DBPMBODGAHO_OFFSET UNITYSDK_OFFSET(0x1C74CE20)
#define MGPEJKEMDPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C74C9E0)
#define MGPEJKEMDPK_DPAMNCLDNLI_OFFSET UNITYSDK_OFFSET(0x1C74CBC0)
#define MGPEJKEMDPK_GJIHIJNKIHF_OFFSET UNITYSDK_OFFSET(0x1C74CE00)
#define MGPEJKEMDPK_KIAGEGJCPAK_OFFSET UNITYSDK_OFFSET(0x1C74CB60)
#define MGPEJKEMDPK_KICNCHJMFNB_OFFSET UNITYSDK_OFFSET(0x1C74CE40)
#define MGPEJKEMDPK_NENLPBDFKJA_OFFSET UNITYSDK_OFFSET(0x1C74CC90)
#define MGPEJKEMDPK_PCHAMOCLBBD_OFFSET UNITYSDK_OFFSET(0x1C74CE60)

inline static constexpr unsigned int MGPEJKEMDPK_TypeDefinitionIndex = 36972;

	class MGPEJKEMDPK : public ::System::Object
	{
	public:
		::GKDAANCFPGO* DLNIGFGLPLJ; // 0x10
		::DJPBAKPBELL* OLPNJHPNJNG; // 0x18
		::RPG::GameCore::StateTreeTransitionConfig* OFKGLJOAMLD; // 0x20
		::System::String* FEMHOGGGPIG; // 0x28
		::PAPOPANPGIJ* DDDNLILNMKA; // 0x30
		::System::Single NDHHEFKHPLE; // 0x38
		::System::Void _ctor(::RPG::GameCore::StateTreeTransitionConfig* a1, ::PAPOPANPGIJ* a2, ::GKDAANCFPGO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeTransitionConfig*, ::PAPOPANPGIJ*, ::GKDAANCFPGO*))((::PBYTE)hIl2Cpp + MGPEJKEMDPK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AIKDAHGHDEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPEJKEMDPK_AIKDAHGHDEI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPEJKEMDPK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean CFFJKMHBMOO(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGPEJKEMDPK_CFFJKMHBMOO_OFFSET))(this, a1);
		}

		::System::Boolean KIAGEGJCPAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPEJKEMDPK_KIAGEGJCPAK_OFFSET))(this);
		}

		::System::Boolean DPAMNCLDNLI(::RPG::Client::LittleGameShare::TaskState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::TaskState))((::PBYTE)hIl2Cpp + MGPEJKEMDPK_DPAMNCLDNLI_OFFSET))(this, a1);
		}

		::System::Void NENLPBDFKJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPEJKEMDPK_NENLPBDFKJA_OFFSET))(this);
		}

		::RPG::GameCore::StateTreeTransitionTriggerType GJIHIJNKIHF()
		{
			return ((::RPG::GameCore::StateTreeTransitionTriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPEJKEMDPK_GJIHIJNKIHF_OFFSET))(this);
		}

		::RPG::GameCore::StateTreeTransitionToType DBPMBODGAHO()
		{
			return ((::RPG::GameCore::StateTreeTransitionToType(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPEJKEMDPK_DBPMBODGAHO_OFFSET))(this);
		}

		::System::String* KICNCHJMFNB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPEJKEMDPK_KICNCHJMFNB_OFFSET))(this);
		}

		::System::String* PCHAMOCLBBD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPEJKEMDPK_PCHAMOCLBBD_OFFSET))(this);
		}

		::GKDAANCFPGO* BGDKFHEBDFJ()
		{
			return ((::GKDAANCFPGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPEJKEMDPK_BGDKFHEBDFJ_OFFSET))(this);
		}

	};
