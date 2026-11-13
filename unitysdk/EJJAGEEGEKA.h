#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Decimal.h"
class EJJAGEEGEKA;
class MFDOHDNPCDC;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace System { class Object; }
namespace System { class String; }

#define EJJAGEEGEKA_AHJDPJFPPJN_OFFSET UNITYSDK_OFFSET(0x19AAF0C0)
#define EJJAGEEGEKA_BHIBBEJNGPC_OFFSET UNITYSDK_OFFSET(0x19AAF960)
#define EJJAGEEGEKA_BKMDPAAJKKM_OFFSET UNITYSDK_OFFSET(0x19AB02E0)
#define EJJAGEEGEKA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19AAEFC0)
#define EJJAGEEGEKA_CTOR_OFFSET UNITYSDK_OFFSET(0x19AAF030)
#define EJJAGEEGEKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AAF510)
#define EJJAGEEGEKA_DKFCGLJJBGJ_OFFSET UNITYSDK_OFFSET(0x19AAF040)
#define EJJAGEEGEKA_EMNDGCPFDLK_OFFSET UNITYSDK_OFFSET(0x19AAFF20)
#define EJJAGEEGEKA_FMKABNDHHPH_OFFSET UNITYSDK_OFFSET(0x19AAFBC0)
#define EJJAGEEGEKA_FNCLNFHCKHO_OFFSET UNITYSDK_OFFSET(0x19AB0600)
#define EJJAGEEGEKA_FPABJIPNJJL_OFFSET UNITYSDK_OFFSET(0x19AAFCF0)
#define EJJAGEEGEKA_GMGAHNEPDEC_OFFSET UNITYSDK_OFFSET(0x19AB0690)
#define EJJAGEEGEKA_HDAPCHLPCML_OFFSET UNITYSDK_OFFSET(0x19AAFFB0)
#define EJJAGEEGEKA_HODKDGEIMDK_1_OFFSET UNITYSDK_OFFSET(0x19AAF6E0)
#define EJJAGEEGEKA_HODKDGEIMDK_OFFSET UNITYSDK_OFFSET(0x19AAF5A0)
#define EJJAGEEGEKA_ILMKBAIKBDD_OFFSET UNITYSDK_OFFSET(0x19AAF220)
#define EJJAGEEGEKA_IOBNIBCOPGP_OFFSET UNITYSDK_OFFSET(0x19AAF830)
#define EJJAGEEGEKA_KAELGIGOHKO_OFFSET UNITYSDK_OFFSET(0x19AB0250)
#define EJJAGEEGEKA_MLOAKBJHKKK_OFFSET UNITYSDK_OFFSET(0x19AB0720)
#define EJJAGEEGEKA_NPIJEDDFMMC_OFFSET UNITYSDK_OFFSET(0x19AAFA90)
#define EJJAGEEGEKA_NPOFMFEDCIF_OFFSET UNITYSDK_OFFSET(0x19AAFE20)
#define EJJAGEEGEKA_OIENNDOOCCF_OFFSET UNITYSDK_OFFSET(0x19AAF3E0)
#define EJJAGEEGEKA_OKFNEBMNMHE_OFFSET UNITYSDK_OFFSET(0x19AAF380)
#define EJJAGEEGEKA_ONCFGNKGKNK_OFFSET UNITYSDK_OFFSET(0x19AAF560)

inline static constexpr unsigned int EJJAGEEGEKA_TypeDefinitionIndex = 74153;

	class EJJAGEEGEKA : public ::System::Object
	{
	public:
		::MFDOHDNPCDC* GIEOINBJPBL; // 0x10
		::RPG::GameCore::TeamTypeMask AKCDGGOOBKG; // 0x18
		::System::Boolean DOCLKBJNDIA; // 0x1A
		// static const ::System::Object HEMLEDIIGPB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_CTOR_OFFSET))(this);
		}

		static ::EJJAGEEGEKA* BPLPBPMEODA(::RPG::GameCore::TeamTypeMask a1)
		{
			return ((::EJJAGEEGEKA*(*)(::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void AHJDPJFPPJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_AHJDPJFPPJN_OFFSET))(this);
		}

		::System::Void ILMKBAIKBDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_ILMKBAIKBDD_OFFSET))(this);
		}

		::System::Void OKFNEBMNMHE(::RPG::GameCore::TeamTypeMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_OKFNEBMNMHE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_DISPOSE_OFFSET))(this);
		}

		static ::MFDOHDNPCDC* DKFCGLJJBGJ()
		{
			return ((::MFDOHDNPCDC*(*)())((::PBYTE)hIl2Cpp + EJJAGEEGEKA_DKFCGLJJBGJ_OFFSET))();
		}

		::System::Void HODKDGEIMDK(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_HODKDGEIMDK_OFFSET))(this, a1);
		}

		::System::Void HODKDGEIMDK_1(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_HODKDGEIMDK_1_OFFSET))(this, a1);
		}

		::System::Void IOBNIBCOPGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_IOBNIBCOPGP_OFFSET))(this);
		}

		::System::Void OIENNDOOCCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_OIENNDOOCCF_OFFSET))(this);
		}

		::System::Boolean BHIBBEJNGPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_BHIBBEJNGPC_OFFSET))(this);
		}

		::System::Boolean NPIJEDDFMMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_NPIJEDDFMMC_OFFSET))(this);
		}

		::System::Boolean FMKABNDHHPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_FMKABNDHHPH_OFFSET))(this);
		}

		::System::String* FPABJIPNJJL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_FPABJIPNJJL_OFFSET))(this);
		}

		static ::System::Boolean ONCFGNKGKNK()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJJAGEEGEKA_ONCFGNKGKNK_OFFSET))();
		}

		::System::Void NPOFMFEDCIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_NPOFMFEDCIF_OFFSET))(this);
		}

		::System::Void EMNDGCPFDLK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_EMNDGCPFDLK_OFFSET))(this, a1);
		}

		::System::Void KAELGIGOHKO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_KAELGIGOHKO_OFFSET))(this, a1);
		}

		::System::Void FNCLNFHCKHO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_FNCLNFHCKHO_OFFSET))(this, a1);
		}

		::System::Void GMGAHNEPDEC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_GMGAHNEPDEC_OFFSET))(this, a1);
		}

		::System::Void HDAPCHLPCML(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_HDAPCHLPCML_OFFSET))(this, a1);
		}

		::System::Boolean MLOAKBJHKKK(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_MLOAKBJHKKK_OFFSET))(this, a1);
		}

		::System::Void BKMDPAAJKKM(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + EJJAGEEGEKA_BKMDPAAJKKM_OFFSET))(this, a1);
		}

	};
