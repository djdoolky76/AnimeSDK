#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFINLFNBLBG.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/ODNEHMBABEO.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MEMDIFHDIAC.h"

class CFAADMFEGHP;
class LPJDPEBKHOF;
class NFCIDHJGOIB;
class PFFLAOOPDII;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define OACAIEEIMEB_DOKGJLDLBMF_OFFSET UNITYSDK_OFFSET(0xEEC7BC0)
#define OACAIEEIMEB_GBBPKCFEGPG_OFFSET UNITYSDK_OFFSET(0xEEC7D40)
#define OACAIEEIMEB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xEEC7730)
#define OACAIEEIMEB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xEEC7F20)
#define OACAIEEIMEB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xEEC7E90)
#define OACAIEEIMEB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xEEC7360)
#define OACAIEEIMEB__CCTOR_OFFSET UNITYSDK_OFFSET(0xEEC7780)
#define OACAIEEIMEB__CTOR_OFFSET UNITYSDK_OFFSET(0xEEC7800)

inline static constexpr unsigned int OACAIEEIMEB_TypeDefinitionIndex = 93091;

class OACAIEEIMEB : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 LKKPPEGKKIN = 0x40; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x40; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LPJDPEBKHOF*>* BEODAANEJFF; // 0x48
	::System::Collections::Generic::List_1<::PFFLAOOPDII*>* LKJAMIIFJKF; // 0x50
	::Il2CppArray<::UnityEngine::RaycastHit>* OAAJPDENOBD; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::MonoConfigurableCollider*>* HMANGFJPIGD; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LPJDPEBKHOF*>* CJHMMPOFJCE; // 0x68
	::Il2CppArray<::UnityEngine::Collider*>* HBGGCCKJJDA; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* BKCOBMBANNI; // 0x78
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* DGCFKBGJGBJ; // 0x80
	::System::Collections::Generic::List_1<::CFAADMFEGHP*>* MHKIIABMAIJ; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* HPILNLJGGHI; // 0x90
	::System::Boolean PKAENEIGDGD; // 0x98
	::System::Boolean FAJCONOLBCL; // 0x99
	::System::Boolean EPGMAPHGGNE; // 0x9A
	::System::Byte _padding0[0x1];
	::UnityEngine::Vector3 FFJFOJKFPEM; // 0x9C
	::ODNEHMBABEO JHPEHHNPPGN; // 0xA8
	::UnityEngine::Vector3 COIICEJBDKC; // 0xAC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OACAIEEIMEB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OACAIEEIMEB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OACAIEEIMEB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OACAIEEIMEB_GETCLASSID_OFFSET))(this);
	}

	::OACAIEEIMEB* DOKGJLDLBMF(::MoleMole::MonoConfigurableCollider* IOKEFECCFCH)
	{
		return ((::OACAIEEIMEB*(*)(::PVOID, ::MoleMole::MonoConfigurableCollider*))((::PBYTE)hIl2Cpp + OACAIEEIMEB_DOKGJLDLBMF_OFFSET))(this, IOKEFECCFCH);
	}

	::MEMDIFHDIAC GBBPKCFEGPG(::NFCIDHJGOIB* DFMKILICPFB, ::MoleMole::Config::ConfigTimeDrivenAttackCollider* BAHIHJCGNBP, ::FFINLFNBLBG IOKLJOEKCCN, ::MoleMole::MonoConfigurableCollider* AFNGHDGJCOK, ::System::Int32 KMOHKCADPNA)
	{
		return ((::MEMDIFHDIAC(*)(::PVOID, ::NFCIDHJGOIB*, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::FFINLFNBLBG, ::MoleMole::MonoConfigurableCollider*, ::System::Int32))((::PBYTE)hIl2Cpp + OACAIEEIMEB_GBBPKCFEGPG_OFFSET))(this, DFMKILICPFB, BAHIHJCGNBP, IOKLJOEKCCN, AFNGHDGJCOK, KMOHKCADPNA);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OACAIEEIMEB_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::OACAIEEIMEB* JFDOOELFAOA()
	{
		return ((::OACAIEEIMEB*(*)())((::PBYTE)hIl2Cpp + OACAIEEIMEB_JFDOOELFAOA_OFFSET))();
	}
};
