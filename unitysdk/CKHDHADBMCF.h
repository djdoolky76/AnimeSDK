#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKHDHADBMCF_IdleLiveBattleState.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"
class CKHDHADBMCF;
class PLLPNJOEDHF;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CKHDHADBMCF_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xE095EB0)
#define CKHDHADBMCF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE095360)
#define CKHDHADBMCF_CTOR_OFFSET UNITYSDK_OFFSET(0xE095290)
#define CKHDHADBMCF_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xE0954D0)
#define CKHDHADBMCF_DPBLBGNBJAK_OFFSET UNITYSDK_OFFSET(0xE095EF0)
#define CKHDHADBMCF_EIMIENOJBGO_OFFSET UNITYSDK_OFFSET(0xE0955F0)
#define CKHDHADBMCF_FFFMCMNHONG_OFFSET UNITYSDK_OFFSET(0xE095C10)
#define CKHDHADBMCF_FGIKAAACJGL_OFFSET UNITYSDK_OFFSET(0xE095F30)
#define CKHDHADBMCF_GEJBILGPAFL_OFFSET UNITYSDK_OFFSET(0xE095D10)
#define CKHDHADBMCF_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xE095DE0)
#define CKHDHADBMCF__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xE095E50)

inline static constexpr unsigned int CKHDHADBMCF_TypeDefinitionIndex = 77605;

	class CKHDHADBMCF : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* GLCFFOIDEMA; // 0x20
		::PLLPNJOEDHF* HEMMHLHDGBO; // 0x28
		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* KIHNNLDEOOM; // 0x30
		::CKHDHADBMCF_IdleLiveBattleState DLNIGFGLPLJ; // 0x38
		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CKHDHADBMCF_CTOR_OFFSET))(this, a1);
		}

		static ::CKHDHADBMCF* BPLPBPMEODA(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::CKHDHADBMCF*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CKHDHADBMCF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* EIMIENOJBGO()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHDHADBMCF_EIMIENOJBGO_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHDHADBMCF_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void FFFMCMNHONG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHDHADBMCF_FFFMCMNHONG_OFFSET))(this);
		}

		::System::Void GEJBILGPAFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHDHADBMCF_GEJBILGPAFL_OFFSET))(this);
		}

		::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CKHDHADBMCF_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHDHADBMCF__ONDESTROYED_OFFSET))(this);
		}

		::CKHDHADBMCF_IdleLiveBattleState BGDKFHEBDFJ()
		{
			return ((::CKHDHADBMCF_IdleLiveBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHDHADBMCF_BGDKFHEBDFJ_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* DPBLBGNBJAK()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHDHADBMCF_DPBLBGNBJAK_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* FGIKAAACJGL()
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHDHADBMCF_FGIKAAACJGL_OFFSET))(this);
		}

	};
