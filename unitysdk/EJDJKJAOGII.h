#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJDJKJAOGII_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xFE17130)
#define EJDJKJAOGII_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xFE170A0)
#define EJDJKJAOGII_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xFE16F70)
#define EJDJKJAOGII_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0xFE17000)
#define EJDJKJAOGII_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xFE16DE0)
#define EJDJKJAOGII__CCTOR_OFFSET UNITYSDK_OFFSET(0xFE16EF0)
#define EJDJKJAOGII__CTOR_OFFSET UNITYSDK_OFFSET(0xFE16F60)

inline static constexpr unsigned int EJDJKJAOGII_TypeDefinitionIndex = 75244;

class EJDJKJAOGII : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xCD; // 0x0
	::System::String* EBLKBABPBEB; // 0x20
	::MoleMole::Config::ConfigPosRot* BANODIDMKOA; // 0x28
	::System::String* KIHGNGKBADE; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* ALEOJPJGBAG; // 0x38
	::MoleMole::Config::ConfigPosRot* KPAPPDGCNPE; // 0x40
	::MoleMole::Config::ConfigPosRot* AEGJIEMBDLC; // 0x48
	::System::Int32 BNKHCNKJKFO; // 0x50
	::System::Boolean HCDMKEBKAGF; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJDJKJAOGII__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDJKJAOGII__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDJKJAOGII_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDJKJAOGII_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDJKJAOGII_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJDJKJAOGII_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* AELLPLBJELA, ::System::String* AFEGGHDPNOE, ::System::Boolean BGIAGEMJLHC, ::System::Int32 FKNINAGNMIA, ::MoleMole::Config::ConfigPosRot* JNGODKFKLHA, ::MoleMole::Config::ConfigPosRot* BHBNFNLBNLP, ::MoleMole::Config::ConfigPosRot* NMEBADMAHGD, ::System::Collections::Generic::List_1<::System::String*>* OHJBODKHDOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::MoleMole::Config::ConfigPosRot*, ::MoleMole::Config::ConfigPosRot*, ::MoleMole::Config::ConfigPosRot*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + EJDJKJAOGII_CNHBDOMKKDE_OFFSET))(this, AELLPLBJELA, AFEGGHDPNOE, BGIAGEMJLHC, FKNINAGNMIA, JNGODKFKLHA, BHBNFNLBNLP, NMEBADMAHGD, OHJBODKHDOM);
	}
};
