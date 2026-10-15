#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FIHMGKLCINA.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/KJFIKOKBCCA.h"
class FOCEBNDIALE;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace UnityEngine { class Collider; }

#define DPPECCECEAM_AJJEMAABGCC_OFFSET UNITYSDK_OFFSET(0x126643A0)
#define DPPECCECEAM_ALNABGNIGNJ_OFFSET UNITYSDK_OFFSET(0x12664520)
#define DPPECCECEAM_BIBBEBHAACH_OFFSET UNITYSDK_OFFSET(0x12665540)
#define DPPECCECEAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x12665B40)
#define DPPECCECEAM_CDPEOGNMHBN_OFFSET UNITYSDK_OFFSET(0x126641B0)
#define DPPECCECEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x126621F0)
#define DPPECCECEAM_DCBHIAOPBPO_OFFSET UNITYSDK_OFFSET(0x12663780)
#define DPPECCECEAM_EAPNJOKGMLD_OFFSET UNITYSDK_OFFSET(0x126659D0)
#define DPPECCECEAM_ENBEGLOFBCJ_OFFSET UNITYSDK_OFFSET(0x12663A30)
#define DPPECCECEAM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12662400)
#define DPPECCECEAM_FCDDCIJCHJN_OFFSET UNITYSDK_OFFSET(0x12663490)
#define DPPECCECEAM_GELFMCBNEBK_OFFSET UNITYSDK_OFFSET(0x12665350)
#define DPPECCECEAM_GGABJFEBPAC_OFFSET UNITYSDK_OFFSET(0x12662300)
#define DPPECCECEAM_GLMAHCGECLB_OFFSET UNITYSDK_OFFSET(0x12663DA0)
#define DPPECCECEAM_HABEHKMCDGE_OFFSET UNITYSDK_OFFSET(0x126639A0)
#define DPPECCECEAM_HAPFLBLBMGP_OFFSET UNITYSDK_OFFSET(0x12663F60)
#define DPPECCECEAM_HDBOOBDDKFI_OFFSET UNITYSDK_OFFSET(0x12663500)
#define DPPECCECEAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12662200)
#define DPPECCECEAM_JGEKALFCDLP_OFFSET UNITYSDK_OFFSET(0x12664800)
#define DPPECCECEAM_JGFMGGHJGAB_OFFSET UNITYSDK_OFFSET(0x126632B0)
#define DPPECCECEAM_KIKPLFHPGGD_OFFSET UNITYSDK_OFFSET(0x12662D20)
#define DPPECCECEAM_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x12662670)
#define DPPECCECEAM_LLNJDGBPGKO_OFFSET UNITYSDK_OFFSET(0x12662DF0)
#define DPPECCECEAM_LMBHDEGELEL_OFFSET UNITYSDK_OFFSET(0x126625C0)
#define DPPECCECEAM_MKBNJGMPLLN_OFFSET UNITYSDK_OFFSET(0x12664220)
#define DPPECCECEAM_NGGHLBDENKP_OFFSET UNITYSDK_OFFSET(0x12662A60)
#define DPPECCECEAM_NMOBGHJDLNA_OFFSET UNITYSDK_OFFSET(0x12662C60)
#define DPPECCECEAM_OLDGEJGIMPL_OFFSET UNITYSDK_OFFSET(0x12665AD0)
#define DPPECCECEAM_PDAEEOEFCDB_OFFSET UNITYSDK_OFFSET(0x12663010)
#define DPPECCECEAM_PFPBOAMCKJD_OFFSET UNITYSDK_OFFSET(0x126650E0)
#define DPPECCECEAM_PIBOIOIAFIG_OFFSET UNITYSDK_OFFSET(0x12663130)
#define DPPECCECEAM_POOLDMKLJLJ_OFFSET UNITYSDK_OFFSET(0x126640B0)
#define DPPECCECEAM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x126622B0)

inline static constexpr unsigned int DPPECCECEAM_TypeDefinitionIndex = 77010;

	class DPPECCECEAM : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::System::Single OLMGKCEDMHH; // 0x20
		::System::Single OEMNGPENJJG; // 0x24
		::System::Int32 ALAKAIJBCCG; // 0x28
		::System::Boolean ABKMPGNDAHO; // 0x2C
		::System::Boolean ELJAIHHNAAN; // 0x2D
		::System::Boolean ELPMDJAEOCC; // 0x2E
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_GFABCKDNIBJ()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "DPPECCECEAM")->GetStaticField(0x6FD30);
		}

		// static const ::System::String* DEDCELGGLKF; // 0x0
		// static const ::System::String* EGOKFHGOHEA; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + DPPECCECEAM_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPPECCECEAM_CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_EXECUTE_OFFSET))(this);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void LLNJDGBPGKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_LLNJDGBPGKO_OFFSET))(this);
		}

		::System::Boolean HABEHKMCDGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_HABEHKMCDGE_OFFSET))(this);
		}

		::System::Void ENBEGLOFBCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_ENBEGLOFBCJ_OFFSET))(this);
		}

		::System::Void GLMAHCGECLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_GLMAHCGECLB_OFFSET))(this);
		}

		::System::Void DCBHIAOPBPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_DCBHIAOPBPO_OFFSET))(this);
		}

		::System::Void NGGHLBDENKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_NGGHLBDENKP_OFFSET))(this);
		}

		::System::Void HAPFLBLBMGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_HAPFLBLBMGP_OFFSET))(this);
		}

		::System::Void POOLDMKLJLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_POOLDMKLJLJ_OFFSET))(this);
		}

		::System::Void PDAEEOEFCDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_PDAEEOEFCDB_OFFSET))(this);
		}

		::System::Void PIBOIOIAFIG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPPECCECEAM_PIBOIOIAFIG_OFFSET))(this, a1);
		}

		::System::Void KIKPLFHPGGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_KIKPLFHPGGD_OFFSET))(this);
		}

		::System::Boolean PFPBOAMCKJD(::HIOEAKHGILF* a1, ::FIHMGKLCINA a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::FIHMGKLCINA))((::PBYTE)hIl2Cpp + DPPECCECEAM_PFPBOAMCKJD_OFFSET))(this, a1, a2);
		}

		::System::Void ALNABGNIGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_ALNABGNIGNJ_OFFSET))(this);
		}

		::System::Void JGEKALFCDLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_JGEKALFCDLP_OFFSET))(this);
		}

		::System::Boolean GELFMCBNEBK(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DPPECCECEAM_GELFMCBNEBK_OFFSET))(this, a1);
		}

		::System::Boolean BIBBEBHAACH(::FIHMGKLCINA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIHMGKLCINA))((::PBYTE)hIl2Cpp + DPPECCECEAM_BIBBEBHAACH_OFFSET))(this, a1);
		}

		::System::Void CDPEOGNMHBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_CDPEOGNMHBN_OFFSET))(this);
		}

		::System::Void JGFMGGHJGAB(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DPPECCECEAM_JGFMGGHJGAB_OFFSET))(this, a1, a2);
		}

		::System::Void FCDDCIJCHJN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPPECCECEAM_FCDDCIJCHJN_OFFSET))(this, a1);
		}

		::System::Void NMOBGHJDLNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_NMOBGHJDLNA_OFFSET))(this);
		}

		::System::Void EAPNJOKGMLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_EAPNJOKGMLD_OFFSET))(this);
		}

		::System::Void GGABJFEBPAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_GGABJFEBPAC_OFFSET))(this);
		}

		::System::Void OLDGEJGIMPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_OLDGEJGIMPL_OFFSET))(this);
		}

		::System::Void HDBOOBDDKFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_HDBOOBDDKFI_OFFSET))(this);
		}

		::KJFIKOKBCCA MKBNJGMPLLN()
		{
			return ((::KJFIKOKBCCA(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_MKBNJGMPLLN_OFFSET))(this);
		}

		::KJFIKOKBCCA AJJEMAABGCC()
		{
			return ((::KJFIKOKBCCA(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_AJJEMAABGCC_OFFSET))(this);
		}

		::FOCEBNDIALE* LMBHDEGELEL()
		{
			return ((::FOCEBNDIALE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM_LMBHDEGELEL_OFFSET))(this);
		}

	};
