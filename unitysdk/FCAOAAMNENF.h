#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELEAAKFDPL.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/System/ValueTuple_2.h"

class ENGKPGFGGLM;
class POFOFGILKAA;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCAOAAMNENF_AHBAFMKBCGL_OFFSET UNITYSDK_OFFSET(0x10F5B820)
#define FCAOAAMNENF_AMODKFGCBPJ_OFFSET UNITYSDK_OFFSET(0x10F5C620)
#define FCAOAAMNENF_ANJGEOHJCBE_OFFSET UNITYSDK_OFFSET(0x10F5B060)
#define FCAOAAMNENF_BKIMLKOIEID_OFFSET UNITYSDK_OFFSET(0x10F5C630)
#define FCAOAAMNENF_CGMKKFEIFMI_OFFSET UNITYSDK_OFFSET(0x10F5AD90)
#define FCAOAAMNENF_CKINGEHLFIH_OFFSET UNITYSDK_OFFSET(0x10F5ADF0)
#define FCAOAAMNENF_DMBMHHBNANK_OFFSET UNITYSDK_OFFSET(0x10F5C540)
#define FCAOAAMNENF_DPMAIMCJNAO_OFFSET UNITYSDK_OFFSET(0x10F5C700)
#define FCAOAAMNENF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F5C520)
#define FCAOAAMNENF_EHMHJPCBENO_OFFSET UNITYSDK_OFFSET(0x10F5ABD0)
#define FCAOAAMNENF_FNACHECOODF_OFFSET UNITYSDK_OFFSET(0x10F5C370)
#define FCAOAAMNENF_GHIKPOHDEGM_OFFSET UNITYSDK_OFFSET(0x10F5C490)
#define FCAOAAMNENF_HIKFHKGCIJN_OFFSET UNITYSDK_OFFSET(0x10F5C600)
#define FCAOAAMNENF_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x10F5C2D0)
#define FCAOAAMNENF_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x10F5C530)
#define FCAOAAMNENF_ILKLLMLDFNE_OFFSET UNITYSDK_OFFSET(0x10F5C610)
#define FCAOAAMNENF_KNAMLBOMBMK_OFFSET UNITYSDK_OFFSET(0x10F5C480)
#define FCAOAAMNENF_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x10F5AAB0)
#define FCAOAAMNENF_MPJHNJFGJGN_OFFSET UNITYSDK_OFFSET(0x10F5AE30)
#define FCAOAAMNENF_NBOKLEHABCP_OFFSET UNITYSDK_OFFSET(0x10F5C670)
#define FCAOAAMNENF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F5AAC0)
#define FCAOAAMNENF_PPNLOBALFKG_OFFSET UNITYSDK_OFFSET(0x10F5B460)
#define FCAOAAMNENF__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F5C3D0)
#define FCAOAAMNENF__CTOR_OFFSET UNITYSDK_OFFSET(0x10F5C3C0)

inline static constexpr unsigned int FCAOAAMNENF_TypeDefinitionIndex = 74334;

class FCAOAAMNENF : public ::CELEAAKFDPL
{
public:
	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_DNAHGHCNDGA()
	{
		return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(FCAOAAMNENF_TypeDefinitionIndex)->GetStaticField(0x3DB30);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_IAOAMJGNIIM()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FCAOAAMNENF_TypeDefinitionIndex)->GetStaticField(0x3DB38);
	}
	static ::System::Boolean* StaticGet_IDKLOECIIHP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FCAOAAMNENF_TypeDefinitionIndex)->GetStaticField(0xE260);
	}
	::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* MOELBLCOBIK; // 0x2F8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCAOAAMNENF__CCTOR_OFFSET))();
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF_LJEEJABBAHD_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void CGMKKFEIFMI(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FCAOAAMNENF_CGMKKFEIFMI_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Boolean CKINGEHLFIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF_CKINGEHLFIH_OFFSET))(this);
	}

	::System::Void MPJHNJFGJGN(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* AIAJIMFIJBM, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* LNBBBBLKBKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + FCAOAAMNENF_MPJHNJFGJGN_OFFSET))(this, AIAJIMFIJBM, LNBBBBLKBKF);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> ANJGEOHJCBE(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* EIDHJDBNFJF, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* PAPNEOOMBFJ)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + FCAOAAMNENF_ANJGEOHJCBE_OFFSET))(this, EIDHJDBNFJF, PAPNEOOMBFJ);
	}

	::System::Void PPNLOBALFKG(::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FCAOAAMNENF_PPNLOBALFKG_OFFSET))(this, DBIOAKNMBDM);
	}

	::System::Void AHBAFMKBCGL(::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FCAOAAMNENF_AHBAFMKBCGL_OFFSET))(this, DJMEFDIHNDO);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void FNACHECOODF(::POFOFGILKAA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + FCAOAAMNENF_FNACHECOODF_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::Void KNAMLBOMBMK(::POFOFGILKAA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + FCAOAAMNENF_KNAMLBOMBMK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean GHIKPOHDEGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF_GHIKPOHDEGM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> DMBMHHBNANK(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* MIALFKCCCPI, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* KMGKAIDEIBA)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + FCAOAAMNENF_DMBMHHBNANK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void HIKFHKGCIJN(::ENGKPGFGGLM* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FCAOAAMNENF_HIKFHKGCIJN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* EHMHJPCBENO()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF_EHMHJPCBENO_OFFSET))(this);
	}

	::System::Void ILKLLMLDFNE(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* MIALFKCCCPI, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + FCAOAAMNENF_ILKLLMLDFNE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void AMODKFGCBPJ(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FCAOAAMNENF_AMODKFGCBPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BKIMLKOIEID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF_BKIMLKOIEID_OFFSET))(this);
	}

	::System::Void NBOKLEHABCP(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FCAOAAMNENF_NBOKLEHABCP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 DPMAIMCJNAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF_DPMAIMCJNAO_OFFSET))(this);
	}
};
