#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/RPG/GameCore/AvatarChangePhase.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
class MJAGJLCMBNM;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define IKGBJCAIIJG_ADPHPNPLAAA_OFFSET UNITYSDK_OFFSET(0x1648A8D0)
#define IKGBJCAIIJG_BAPKDEDFOEF_OFFSET UNITYSDK_OFFSET(0x1648BA60)
#define IKGBJCAIIJG_BHGLNDDNGID_OFFSET UNITYSDK_OFFSET(0x16489CE0)
#define IKGBJCAIIJG_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x16489EE0)
#define IKGBJCAIIJG_CTOR_OFFSET UNITYSDK_OFFSET(0x16489B70)
#define IKGBJCAIIJG_EIMPPAIPMPC_OFFSET UNITYSDK_OFFSET(0x1648A950)
#define IKGBJCAIIJG_HMFIACOJJBE_OFFSET UNITYSDK_OFFSET(0x1648A160)
#define IKGBJCAIIJG_IFDJLCGOHGK_OFFSET UNITYSDK_OFFSET(0x1648A2F0)
#define IKGBJCAIIJG_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0x1648A0A0)
#define IKGBJCAIIJG_JJNKDJMPEND_OFFSET UNITYSDK_OFFSET(0x1648B960)
#define IKGBJCAIIJG_JMLJFMGCGIE_OFFSET UNITYSDK_OFFSET(0x1648AA80)
#define IKGBJCAIIJG_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x16489B80)
#define IKGBJCAIIJG_LGEDKFENNGK_OFFSET UNITYSDK_OFFSET(0x1648AA40)
#define IKGBJCAIIJG_LGJKDJDMPHP_OFFSET UNITYSDK_OFFSET(0x1648B9A0)
#define IKGBJCAIIJG_OCMJCKKEPOI_OFFSET UNITYSDK_OFFSET(0x1648A2B0)
#define IKGBJCAIIJG_TICK_OFFSET UNITYSDK_OFFSET(0x16489F70)

inline static constexpr unsigned int IKGBJCAIIJG_TypeDefinitionIndex = 56250;

	class IKGBJCAIIJG : public ::HBPNHCICJGF
	{
	public:
		::MJAGJLCMBNM* PKHOJJENBAL; // 0x28
		::System::UInt32 FBICNDALCKD; // 0x30
		::RPG::GameCore::AvatarChangePhase BBPJCOMHOEC; // 0x34
		::System::Single JFGFIDIBMEC; // 0x38
		::System::Int32 CMHIJDOCDFB; // 0x3C
		// static const ::System::String* CPKLGNCAMHN; // 0x0
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_INOMGFMHLDO_OFFSET))(this);
		}

		::System::Void BHGLNDDNGID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_BHGLNDDNGID_OFFSET))(this);
		}

		::System::Void HMFIACOJJBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_HMFIACOJJBE_OFFSET))(this);
		}

		::System::Boolean OCMJCKKEPOI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_OCMJCKKEPOI_OFFSET))(this);
		}

		::System::Void IFDJLCGOHGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_IFDJLCGOHGK_OFFSET))(this);
		}

		::System::Boolean ADPHPNPLAAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_ADPHPNPLAAA_OFFSET))(this);
		}

		::System::Void EIMPPAIPMPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_EIMPPAIPMPC_OFFSET))(this);
		}

		::System::Boolean LGEDKFENNGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_LGEDKFENNGK_OFFSET))(this);
		}

		::System::Void JMLJFMGCGIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_JMLJFMGCGIE_OFFSET))(this);
		}

		::System::Boolean JJNKDJMPEND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_JJNKDJMPEND_OFFSET))(this);
		}

		::System::Void LGJKDJDMPHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_LGJKDJDMPHP_OFFSET))(this);
		}

		::System::Void BAPKDEDFOEF(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + IKGBJCAIIJG_BAPKDEDFOEF_OFFSET))(this, a1, a2);
		}

	};
