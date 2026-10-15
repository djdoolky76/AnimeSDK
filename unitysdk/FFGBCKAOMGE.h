#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/VersusBarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AIMBCMECFFB.h"
class BBDFGMBNDGD;
class FFGBCKAOMGE_JCBPFBPPCEG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define FFGBCKAOMGE_CTOR_OFFSET UNITYSDK_OFFSET(0x157360F0)
#define FFGBCKAOMGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15736110)
#define FFGBCKAOMGE_DJBEHLLEEPA_OFFSET UNITYSDK_OFFSET(0x15737200)
#define FFGBCKAOMGE_ELKDPANIBNL_OFFSET UNITYSDK_OFFSET(0x15736F40)
#define FFGBCKAOMGE_FIPNFKNDIBA_OFFSET UNITYSDK_OFFSET(0x15737390)
#define FFGBCKAOMGE_GEJPKMNEPPE_OFFSET UNITYSDK_OFFSET(0x15737440)
#define FFGBCKAOMGE_GET_INFEVER_OFFSET UNITYSDK_OFFSET(0x15737450)
#define FFGBCKAOMGE_HAIEJENPAMD_1_OFFSET UNITYSDK_OFFSET(0x157362E0)
#define FFGBCKAOMGE_HAIEJENPAMD_OFFSET UNITYSDK_OFFSET(0x15736260)
#define FFGBCKAOMGE_ICCIHOLAJCO_OFFSET UNITYSDK_OFFSET(0x15736C40)
#define FFGBCKAOMGE_JJLMLPBJFMI_OFFSET UNITYSDK_OFFSET(0x15736160)
#define FFGBCKAOMGE_KGLOIHLJHIM_OFFSET UNITYSDK_OFFSET(0x15736400)
#define FFGBCKAOMGE_KIMKOIOAHDK_OFFSET UNITYSDK_OFFSET(0x157372A0)
#define FFGBCKAOMGE_MOCNBEEIPPE_OFFSET UNITYSDK_OFFSET(0x157364E0)
#define FFGBCKAOMGE_PCKBOHGFFPF_OFFSET UNITYSDK_OFFSET(0x15737310)
#define FFGBCKAOMGE_SET_INFEVER_OFFSET UNITYSDK_OFFSET(0x15737460)

	class FFGBCKAOMGE : public ::System::Object
	{
	public:
		::FFGBCKAOMGE_JCBPFBPPCEG* DHCOMLOEANL; // 0x10
		::FFGBCKAOMGE_JCBPFBPPCEG* BBEGFKFKFJM; // 0x18
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x20
		::RPG::GameCore::FixPoint KFEJHIKHADH; // 0x28
		::System::Boolean _InFever_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_DISPOSE_OFFSET))(this);
		}

		::System::Void JJLMLPBJFMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_JJLMLPBJFMI_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint HAIEJENPAMD(::RPG::GameCore::TeamType a1, ::RPG::GameCore::VersusBarPropertyType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::VersusBarPropertyType))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_HAIEJENPAMD_OFFSET))(this, a1, a2);
		}

		::System::Boolean HAIEJENPAMD_1(::RPG::GameCore::TeamType a1, ::RPG::GameCore::VersusBarPropertyType a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::VersusBarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_HAIEJENPAMD_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MOCNBEEIPPE(::RPG::GameCore::TeamType a1, ::RPG::GameCore::VersusBarPropertyType a2, ::RPG::GameCore::PropertyModifyFunction a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::VersusBarPropertyType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_MOCNBEEIPPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DJBEHLLEEPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_DJBEHLLEEPA_OFFSET))(this, a1);
		}

		::System::Void PCKBOHGFFPF(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_PCKBOHGFFPF_OFFSET))(this, a1);
		}

		::System::Void FIPNFKNDIBA(::AIMBCMECFFB a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIMBCMECFFB))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_FIPNFKNDIBA_OFFSET))(this, a1);
		}

		::System::Void ICCIHOLAJCO(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_ICCIHOLAJCO_OFFSET))(this, a1);
		}

		::FFGBCKAOMGE_JCBPFBPPCEG* KGLOIHLJHIM(::RPG::GameCore::TeamType a1)
		{
			return ((::FFGBCKAOMGE_JCBPFBPPCEG*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_KGLOIHLJHIM_OFFSET))(this, a1);
		}

		::System::Void KIMKOIOAHDK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_KIMKOIOAHDK_OFFSET))(this, a1);
		}

		::System::Void ELKDPANIBNL(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_ELKDPANIBNL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GEJPKMNEPPE()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_GEJPKMNEPPE_OFFSET))(this);
		}

		::System::Boolean get_InFever()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_GET_INFEVER_OFFSET))(this);
		}

		::System::Void set_InFever(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FFGBCKAOMGE_SET_INFEVER_OFFSET))(this, a1);
		}

	};
