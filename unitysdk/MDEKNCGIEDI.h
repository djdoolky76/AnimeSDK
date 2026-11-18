#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace Ara { class AraTrail; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigAraTrail; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MDEKNCGIEDI_COKMIIDJOGD_OFFSET UNITYSDK_OFFSET(0x16C774C0)
#define MDEKNCGIEDI_EAPBJFMMIMG_OFFSET UNITYSDK_OFFSET(0x16C77170)
#define MDEKNCGIEDI_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x16C77250)
#define MDEKNCGIEDI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16C77090)
#define MDEKNCGIEDI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16C771D0)
#define MDEKNCGIEDI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16C77430)
#define MDEKNCGIEDI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16C77030)
#define MDEKNCGIEDI__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C770E0)
#define MDEKNCGIEDI__CTOR_OFFSET UNITYSDK_OFFSET(0x16C77160)

inline static constexpr unsigned int MDEKNCGIEDI_TypeDefinitionIndex = 82291;

class MDEKNCGIEDI : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x8; // 0x0
	::UnityEngine::Transform* GKIFHDDPNOI; // 0x48
	::UnityEngine::GameObject* FKEEAIDHDBE; // 0x50
	::MoleMole::Config::ConfigAraTrail* AFKGPJPICFI; // 0x58
	::Ara::AraTrail* KBGPLPHBICE; // 0x60
	::MoleMole::Battle::Entity* PDBCBIMFHKN; // 0x68
	::System::String* KIHGNGKBADE; // 0x70
	::System::Single CKNACNMEHMH; // 0x78
	::System::Boolean IHLDIOOCHEM; // 0x7C
	::System::Byte _padding0[0x3];
	::System::Single CCDNKBONPLB; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDEKNCGIEDI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEKNCGIEDI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEKNCGIEDI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEKNCGIEDI_GETCLASSID_OFFSET))(this);
	}

	::System::Void EAPBJFMMIMG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEKNCGIEDI_EAPBJFMMIMG_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::MDEKNCGIEDI* JFDOOELFAOA()
	{
		return ((::MDEKNCGIEDI*(*)())((::PBYTE)hIl2Cpp + MDEKNCGIEDI_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC(::System::String* AABLMHIPMLF, ::System::String* AELLPLBJELA, ::System::String* FPBNHPCLHMI, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MDEKNCGIEDI_GALGFCPKMGC_OFFSET))(this, AABLMHIPMLF, AELLPLBJELA, FPBNHPCLHMI, KECKGDFIALJ);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEKNCGIEDI_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean COKMIIDJOGD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEKNCGIEDI_COKMIIDJOGD_OFFSET))(this);
	}
};
