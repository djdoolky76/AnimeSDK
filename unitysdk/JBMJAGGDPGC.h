#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IIMHFNMMBEA;
class KABJIGHDKFI;
class KKILCHMCBMI;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshPath; }

#define JBMJAGGDPGC_DBGJFPLFCDE_OFFSET UNITYSDK_OFFSET(0x1382E350)
#define JBMJAGGDPGC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1382DAD0)
#define JBMJAGGDPGC_ILCBMAAAIJO_OFFSET UNITYSDK_OFFSET(0x1382E0A0)
#define JBMJAGGDPGC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1382DE90)
#define JBMJAGGDPGC_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1382DE00)
#define JBMJAGGDPGC_MGGJCCOFJBJ_OFFSET UNITYSDK_OFFSET(0x1382DF10)
#define JBMJAGGDPGC_ODDBIACGBJP_OFFSET UNITYSDK_OFFSET(0x1382DD30)
#define JBMJAGGDPGC_OEKMLJKHDNO_OFFSET UNITYSDK_OFFSET(0x1382E140)
#define JBMJAGGDPGC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1382D910)
#define JBMJAGGDPGC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1382DB20)
#define JBMJAGGDPGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1382DBA0)

inline static constexpr unsigned int JBMJAGGDPGC_TypeDefinitionIndex = 85050;

class JBMJAGGDPGC : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x73; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::IIMHFNMMBEA*>* PHAHCENMHGL; // 0x48
	::Il2CppArray<::UnityEngine::Vector3>* GHKFFCOHHKE; // 0x50
	::UnityEngine::AI::NavMeshPath* NBGABGDMCFG; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* JPAIPGPMHEC; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::KABJIGHDKFI*>* DGCJBLIDFOG; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CJBJONJDOLI; // 0x70
	::System::Collections::Generic::List_1<::KKILCHMCBMI*>* BHEFMAMMBGA; // 0x78
	::System::Boolean HJAFDGCPEGC; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBMJAGGDPGC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMJAGGDPGC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMJAGGDPGC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMJAGGDPGC_GETCLASSID_OFFSET))(this);
	}

	::System::Void ODDBIACGBJP(::KKILCHMCBMI* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::KKILCHMCBMI*))((::PBYTE)hIl2Cpp + JBMJAGGDPGC_ODDBIACGBJP_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMJAGGDPGC_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::JBMJAGGDPGC* JFDOOELFAOA()
	{
		return ((::JBMJAGGDPGC*(*)())((::PBYTE)hIl2Cpp + JBMJAGGDPGC_JFDOOELFAOA_OFFSET))();
	}

	::System::Void MGGJCCOFJBJ(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JBMJAGGDPGC_MGGJCCOFJBJ_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void ILCBMAAAIJO(::KKILCHMCBMI* IDBJNPBOMOG)
	{
		return ((::System::Void(*)(::PVOID, ::KKILCHMCBMI*))((::PBYTE)hIl2Cpp + JBMJAGGDPGC_ILCBMAAAIJO_OFFSET))(this, IDBJNPBOMOG);
	}

	::System::Void OEKMLJKHDNO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JBMJAGGDPGC_OEKMLJKHDNO_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void DBGJFPLFCDE(::System::String* MCOHLHMKLIP, ::UnityEngine::Transform* HBAIENEBGMH, ::UnityEngine::Vector3 BOGPAHGJOJK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JBMJAGGDPGC_DBGJFPLFCDE_OFFSET))(this, MCOHLHMKLIP, HBAIENEBGMH, BOGPAHGJOJK);
	}
};
