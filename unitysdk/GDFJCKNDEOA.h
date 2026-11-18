#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HJDNNLKBHBA;
class MJHDNMKGLBJ;
class OHEPPDANJKP;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDFJCKNDEOA_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x15CD31E0)
#define GDFJCKNDEOA_AOIOALPKKIG_OFFSET UNITYSDK_OFFSET(0x15CD52D0)
#define GDFJCKNDEOA_BPOMENPKFIL_OFFSET UNITYSDK_OFFSET(0x15CD6320)
#define GDFJCKNDEOA_CBNBADCLEOE_OFFSET UNITYSDK_OFFSET(0x15CD6A20)
#define GDFJCKNDEOA_CELNMMDOGCE_OFFSET UNITYSDK_OFFSET(0x15CD60B0)
#define GDFJCKNDEOA_CLLEBEEPELF_OFFSET UNITYSDK_OFFSET(0x15CD62D0)
#define GDFJCKNDEOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CD3490)
#define GDFJCKNDEOA_DMGDLGJNKJF_OFFSET UNITYSDK_OFFSET(0x15CD35A0)
#define GDFJCKNDEOA_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x15CD3450)
#define GDFJCKNDEOA_FHFNGEPIPCP_OFFSET UNITYSDK_OFFSET(0x15CD3230)
#define GDFJCKNDEOA_HDLGAMJCGNB_OFFSET UNITYSDK_OFFSET(0x15CD77C0)
#define GDFJCKNDEOA_HKLIKNNFMHE_OFFSET UNITYSDK_OFFSET(0x15CD3860)
#define GDFJCKNDEOA_IHKPKLBGLOL_OFFSET UNITYSDK_OFFSET(0x15CD7370)
#define GDFJCKNDEOA_JIJPHNKOJGF_OFFSET UNITYSDK_OFFSET(0x15CD6BB0)
#define GDFJCKNDEOA_JLMNGAEPANL_OFFSET UNITYSDK_OFFSET(0x15CD5D60)
#define GDFJCKNDEOA_KNOOLNKJJFC_OFFSET UNITYSDK_OFFSET(0x15CD61E0)
#define GDFJCKNDEOA_MNIJBJKEGEP_OFFSET UNITYSDK_OFFSET(0x15CD71E0)
#define GDFJCKNDEOA_ONCREATE_OFFSET UNITYSDK_OFFSET(0x15CD31A0)
#define GDFJCKNDEOA_PEMJJGPBLND_OFFSET UNITYSDK_OFFSET(0x15CC61A0)
#define GDFJCKNDEOA__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD2EA0)

inline static constexpr unsigned int GDFJCKNDEOA_TypeDefinitionIndex = 87527;

class GDFJCKNDEOA
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* NHNMPKLPFHL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KGAOJKPHEIA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* OLKHFPDHIOG; // 0x20
	::System::UInt32 NPHJHGKNOOB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFJCKNDEOA__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_ONCREATE_OFFSET))(this);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_DISPOSE_OFFSET))(this);
	}

	::System::Void FHFNGEPIPCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_FHFNGEPIPCP_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* DMGDLGJNKJF(::MoleMole::Battle::Entity* JHGPEHNCJID, ::MoleMole::Config::EntityType OBNIAHNMHPF, ::System::Int32 GHCMLMNPLPJ, ::MoleMole::Config::CampType PEDKGCGKOFD, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single DCEOBAPNGIK, ::System::Single DIOFEKCEAJO, ::System::Collections::Generic::List_1<::System::String*>* HMPKKCKNFIH, ::System::String* KECLCBNADIE, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MFOCDDABELC, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK, ::System::String* CFHNJGJMMJA, ::System::Int32 PBCMNKKGKBL, ::System::Int32 FDFONJNHHMC, ::System::Boolean EKOOIKDDFOA, ::System::Boolean HDAKOILNHNB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ACOBAMPEGEH)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::EntityType, ::System::Int32, ::MoleMole::Config::CampType, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_DMGDLGJNKJF_OFFSET))(this, JHGPEHNCJID, OBNIAHNMHPF, GHCMLMNPLPJ, PEDKGCGKOFD, CKPGOKHECCH, DCEOBAPNGIK, DIOFEKCEAJO, HMPKKCKNFIH, KECLCBNADIE, MFOCDDABELC, OJBJBOJKFJO, DJKNNEEKHGK, CFHNJGJMMJA, PBCMNKKGKBL, FDFONJNHHMC, EKOOIKDDFOA, HDAKOILNHNB, ACOBAMPEGEH);
	}

	::System::Void CELNMMDOGCE(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_CELNMMDOGCE_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Int32 KNOOLNKJJFC(::System::String* AELLPLBJELA)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_KNOOLNKJJFC_OFFSET))(this, AELLPLBJELA);
	}

	::System::UInt32 CLLEBEEPELF()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_CLLEBEEPELF_OFFSET))(this);
	}

	::System::Void PEMJJGPBLND(::HJDNNLKBHBA* DLCKCEPKJFK, ::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* FBLGONAJGHM, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::HJDNNLKBHBA*, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_PEMJJGPBLND_OFFSET))(this, DLCKCEPKJFK, OBNIAHNMHPF, FBLGONAJGHM, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void BPOMENPKFIL(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_BPOMENPKFIL_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void JIJPHNKOJGF(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_JIJPHNKOJGF_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void IHKPKLBGLOL(::MoleMole::Battle::Entity* JHGPEHNCJID, ::OHEPPDANJKP* HNEOABEOADK, ::System::Collections::Generic::List_1<::System::String*>* HMPKKCKNFIH, ::System::Single MDPPNMIPDMP, ::System::Boolean PKGFBAGEHOM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::OHEPPDANJKP*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_IHKPKLBGLOL_OFFSET))(this, JHGPEHNCJID, HNEOABEOADK, HMPKKCKNFIH, MDPPNMIPDMP, PKGFBAGEHOM);
	}

	::MoleMole::Battle::Entity* HKLIKNNFMHE(::MoleMole::Battle::Entity* JHGPEHNCJID, ::System::Int32 GHCMLMNPLPJ, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single DCEOBAPNGIK, ::MoleMole::Config::CampType PEDKGCGKOFD, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK, ::System::String* CFHNJGJMMJA, ::System::Int32 PBCMNKKGKBL, ::System::Boolean EKOOIKDDFOA, ::System::Boolean GEBFLKMONCI, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* COOOHNBFEGM)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_HKLIKNNFMHE_OFFSET))(this, JHGPEHNCJID, GHCMLMNPLPJ, CKPGOKHECCH, DCEOBAPNGIK, PEDKGCGKOFD, OJBJBOJKFJO, DJKNNEEKHGK, CFHNJGJMMJA, PBCMNKKGKBL, EKOOIKDDFOA, GEBFLKMONCI, COOOHNBFEGM);
	}

	::System::Void CBNBADCLEOE(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_CBNBADCLEOE_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void JLMNGAEPANL(::MoleMole::Battle::Entity* JHGPEHNCJID, ::MoleMole::Battle::Entity* LMMEJKPAOEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_JLMNGAEPANL_OFFSET))(this, JHGPEHNCJID, LMMEJKPAOEA);
	}

	::MoleMole::Battle::Entity* AOIOALPKKIG(::MoleMole::Battle::Entity* JHGPEHNCJID, ::System::Int32 GHCMLMNPLPJ, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single DCEOBAPNGIK, ::MoleMole::Config::CampType PEDKGCGKOFD, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* DJKNNEEKHGK, ::System::Int32 FDFONJNHHMC)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*, ::System::Int32))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_AOIOALPKKIG_OFFSET))(this, JHGPEHNCJID, GHCMLMNPLPJ, CKPGOKHECCH, DCEOBAPNGIK, PEDKGCGKOFD, OJBJBOJKFJO, DJKNNEEKHGK, FDFONJNHHMC);
	}

	::System::Void MNIJBJKEGEP(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_MNIJBJKEGEP_OFFSET))(this, AELLPLBJELA);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* HDLGAMJCGNB(::MoleMole::Battle::Entity* JHGPEHNCJID)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GDFJCKNDEOA_HDLGAMJCGNB_OFFSET))(this, JHGPEHNCJID);
	}
};
