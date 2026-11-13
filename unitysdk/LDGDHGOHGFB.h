#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LDGDHGOHGFB_BBIFAGCHFBC_OFFSET UNITYSDK_OFFSET(0x1AC7CFA0)
#define LDGDHGOHGFB_BCBEEDECJDC_OFFSET UNITYSDK_OFFSET(0x1AC7D440)
#define LDGDHGOHGFB_CBAMPMFECDH_OFFSET UNITYSDK_OFFSET(0x1AC7D9E0)
#define LDGDHGOHGFB_CGEPGFHCEDD_1_OFFSET UNITYSDK_OFFSET(0x1AC7BEC0)
#define LDGDHGOHGFB_CGEPGFHCEDD_OFFSET UNITYSDK_OFFSET(0x1AC7BD30)
#define LDGDHGOHGFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC7B510)
#define LDGDHGOHGFB_DEOOOFJILOO_OFFSET UNITYSDK_OFFSET(0x1AC7C500)
#define LDGDHGOHGFB_EIINMJMFEOM_OFFSET UNITYSDK_OFFSET(0x1AC7DA00)
#define LDGDHGOHGFB_GKEDFBMHBDM_OFFSET UNITYSDK_OFFSET(0x1AC7C330)
#define LDGDHGOHGFB_HBENNCOBLPK_OFFSET UNITYSDK_OFFSET(0x1AC7DAF0)
#define LDGDHGOHGFB_IHLCKDJPLCF_OFFSET UNITYSDK_OFFSET(0x1AC7DA70)
#define LDGDHGOHGFB_JCJBDFDOOPC_OFFSET UNITYSDK_OFFSET(0x1AC7D520)
#define LDGDHGOHGFB_JOCDBOEGBCC_OFFSET UNITYSDK_OFFSET(0x1AC7D780)
#define LDGDHGOHGFB_LAFMIMLBMPO_OFFSET UNITYSDK_OFFSET(0x1AC7DAD0)
#define LDGDHGOHGFB_MOOENEIANFA_OFFSET UNITYSDK_OFFSET(0x1AC7DA80)
#define LDGDHGOHGFB_NBDHJMJAABJ_OFFSET UNITYSDK_OFFSET(0x1AC7DAA0)
#define LDGDHGOHGFB_NFHOINCPHKG_OFFSET UNITYSDK_OFFSET(0x1AC7DA20)
#define LDGDHGOHGFB_NLGBJHAJLHD_OFFSET UNITYSDK_OFFSET(0x1AC7C040)
#define LDGDHGOHGFB_ODLKJPBBIKE_OFFSET UNITYSDK_OFFSET(0x1AC7DB20)
#define LDGDHGOHGFB_OLIIKJGHHNH_OFFSET UNITYSDK_OFFSET(0x1AC7DAB0)
#define LDGDHGOHGFB_PBLFAECCECM_OFFSET UNITYSDK_OFFSET(0x1AC7D100)
#define LDGDHGOHGFB_PJEMGKGLDOK_OFFSET UNITYSDK_OFFSET(0x1AC7DB10)

inline static constexpr unsigned int LDGDHGOHGFB_TypeDefinitionIndex = 55930;

	class LDGDHGOHGFB : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 CKDHNMIOHHF; // 0x10
		::System::Single HDKDHGBLCGG; // 0x1C
		::System::Single DMBLHAAJMDF; // 0x20
		::UnityEngine::Vector3 KKONNJMKPBM; // 0x24
		::UnityEngine::Vector3 OLPPAGFGJCJ; // 0x30
		::UnityEngine::Vector3 OPFCDKJCFJB; // 0x3C
		::UnityEngine::Vector3 EIHDBOLAHND; // 0x48
		::System::Boolean PJLNJMNFJPG; // 0x54
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 HMKIJNDLEIE; // 0x58
		::System::Single GNJFILJIIKI; // 0x64
		::System::Int32 LPFHPPJNHPM; // 0x68
		::System::Single JAOEAEIEAAI; // 0x6C
		::System::Single OCFGPLIKDLA; // 0x70
		::System::Single PHPKIPNNKLI; // 0x74
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 CGEPGFHCEDD(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_CGEPGFHCEDD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 CGEPGFHCEDD_1(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_CGEPGFHCEDD_1_OFFSET))(this, a1);
		}

		::System::Void NLGBJHAJLHD(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_NLGBJHAJLHD_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GKEDFBMHBDM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_GKEDFBMHBDM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DEOOOFJILOO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_DEOOOFJILOO_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 PBLFAECCECM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_PBLFAECCECM_OFFSET))(this, a1, a2, a3);
		}

		::System::Single BBIFAGCHFBC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_BBIFAGCHFBC_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 BCBEEDECJDC(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_BCBEEDECJDC_OFFSET))(this, a1);
		}

		::System::Void JCJBDFDOOPC(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_JCJBDFDOOPC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JOCDBOEGBCC(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_JOCDBOEGBCC_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 CBAMPMFECDH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_CBAMPMFECDH_OFFSET))(this);
		}

		::UnityEngine::Vector3 EIINMJMFEOM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_EIINMJMFEOM_OFFSET))(this);
		}

		::System::Single NFHOINCPHKG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_NFHOINCPHKG_OFFSET))(this);
		}

		::System::Single IHLCKDJPLCF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_IHLCKDJPLCF_OFFSET))(this);
		}

		::UnityEngine::Vector3 MOOENEIANFA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_MOOENEIANFA_OFFSET))(this);
		}

		::System::Boolean NBDHJMJAABJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_NBDHJMJAABJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 OLIIKJGHHNH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_OLIIKJGHHNH_OFFSET))(this);
		}

		::UnityEngine::Vector3 LAFMIMLBMPO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_LAFMIMLBMPO_OFFSET))(this);
		}

		::UnityEngine::Vector3 HBENNCOBLPK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_HBENNCOBLPK_OFFSET))(this);
		}

		::System::Single PJEMGKGLDOK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_PJEMGKGLDOK_OFFSET))(this);
		}

		::UnityEngine::Vector3 ODLKJPBBIKE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGDHGOHGFB_ODLKJPBBIKE_OFFSET))(this);
		}

	};
