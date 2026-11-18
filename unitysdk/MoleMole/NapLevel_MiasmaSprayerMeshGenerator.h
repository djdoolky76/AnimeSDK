#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGLPGGLOHDO.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/MoleMole/Config/RuntimePolygonBound.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_ADNFCFDCMDF_OFFSET UNITYSDK_OFFSET(0x146A1A10)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_AJNEBCAFACH_OFFSET UNITYSDK_OFFSET(0x146A1AC0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_APNGLCBFEOC_OFFSET UNITYSDK_OFFSET(0x146A2CE0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_CLLFMPAPEME_OFFSET UNITYSDK_OFFSET(0x146A2EE0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_CLMBAGNMBEK_OFFSET UNITYSDK_OFFSET(0x146A21E0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_DJCNIJGGKDI_OFFSET UNITYSDK_OFFSET(0x146A4010)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_FGDHEIJNPFF_OFFSET UNITYSDK_OFFSET(0x146A2010)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_HDJAOMKJAIC_1_OFFSET UNITYSDK_OFFSET(0x146A3F40)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_HDJAOMKJAIC_OFFSET UNITYSDK_OFFSET(0x146A3EE0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_HECGPAAPNBO_OFFSET UNITYSDK_OFFSET(0x146A1F00)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_ICGHIJHGGHE_OFFSET UNITYSDK_OFFSET(0x146A17B0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_IDKDIHEBKEJ_OFFSET UNITYSDK_OFFSET(0x146A2C70)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_IGNJOGIKNLP_OFFSET UNITYSDK_OFFSET(0x146A0DC0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_INHHBCOAMOA_OFFSET UNITYSDK_OFFSET(0x146A3D40)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_IOCMEGENEED_OFFSET UNITYSDK_OFFSET(0x146A3C80)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_JGDBMDAJMNC_OFFSET UNITYSDK_OFFSET(0x1469FBF0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_KDIGIGKCPMI_OFFSET UNITYSDK_OFFSET(0x146A2A40)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_LCGJKKJIJEJ_OFFSET UNITYSDK_OFFSET(0x1469FF30)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_MCBOCKAGKHH_OFFSET UNITYSDK_OFFSET(0x146A1580)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_MLENBIADKCD_OFFSET UNITYSDK_OFFSET(0x146A2F70)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_MPPMAKOBDIO_OFFSET UNITYSDK_OFFSET(0x146A2110)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_OBNKBAGFDJN_OFFSET UNITYSDK_OFFSET(0x146A0700)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x146A0650)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_ONSUBMITPOLYGON_OFFSET UNITYSDK_OFFSET(0x1469F7C0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_PENAABAABML_OFFSET UNITYSDK_OFFSET(0x146A29D0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_PFJCKCKKNPG_OFFSET UNITYSDK_OFFSET(0x146A1CB0)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_PKNJCOICMBG_OFFSET UNITYSDK_OFFSET(0x146A3570)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_POBMNPCECJO_OFFSET UNITYSDK_OFFSET(0x146A0920)
#define MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x146A06A0)

namespace MoleMole
{
	inline static constexpr unsigned int NapLevel_MiasmaSprayerMeshGenerator_TypeDefinitionIndex = 70041;

	class NapLevel_MiasmaSprayerMeshGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single PHGIFJBOGPB; // 0x0
		// static const ::System::Int32 NPAPDLIJLDH = 0x20; // 0x0
		::UnityEngine::MeshRenderer* m_TargetMeshRenderer; // 0x18
		::UnityEngine::MeshFilter* m_TargetMeshFilter; // 0x20
		::LGLPGGLOHDO _uvMode; // 0x28
		::System::Single _planarTilingSize; // 0x2C
		::System::Boolean _enableEdgeTransition; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single _edgeTransitionDistance; // 0x34
		::System::Single _heightOffset; // 0x38
		::System::Byte _padding1[0x4];
		::UnityEngine::Mesh* BFDOGKGJIAP; // 0x40
		::UnityEngine::Material* OIJKKAAIBAJ; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnSubmitPolygon(::System::String* PLAAMNBJHFN, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* JLKFFJEIMAP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HPMOIAMHPLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_ONSUBMITPOLYGON_OFFSET))(this, PLAAMNBJHFN, JLKFFJEIMAP, HPMOIAMHPLC);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void OBNKBAGFDJN(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* FBBKCBCPNDM, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GAJHHPOMOBF, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CHPCHCGAFIN)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_OBNKBAGFDJN_OFFSET))(FBBKCBCPNDM, GAJHHPOMOBF, CHPCHCGAFIN);
		}

		::System::Void POBMNPCECJO(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CELGKCKLPJC, ::UnityEngine::Vector3 EIIDOADGOIF, ::UnityEngine::Quaternion BFBELMDIAHI, ::UnityEngine::Vector3 AAFIKENFLAL, ::System::Single KGHNBNOMMJI, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DDCMDFBCOCJ, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* AGLPILADKGJ, ::System::Collections::Generic::List_1<::UnityEngine::Color>* COEABFOGOBI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_POBMNPCECJO_OFFSET))(this, CELGKCKLPJC, EIIDOADGOIF, BFBELMDIAHI, AAFIKENFLAL, KGHNBNOMMJI, DDCMDFBCOCJ, AGLPILADKGJ, COEABFOGOBI);
		}

		::System::Void JGDBMDAJMNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_JGDBMDAJMNC_OFFSET))(this);
		}

		static ::System::Boolean IGNJOGIKNLP(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CELGKCKLPJC, ::System::Single BDEDDEGJFKL, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& JFMLEBOIEIC)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_IGNJOGIKNLP_OFFSET))(CELGKCKLPJC, BDEDDEGJFKL, JFMLEBOIEIC);
		}

		static ::System::Single HECGPAAPNBO(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CELGKCKLPJC)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_HECGPAAPNBO_OFFSET))(CELGKCKLPJC);
		}

		::System::Void FGDHEIJNPFF(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CELGKCKLPJC, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CHPCHCGAFIN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_FGDHEIJNPFF_OFFSET))(this, CELGKCKLPJC, CHPCHCGAFIN);
		}

		static ::System::Boolean MPPMAKOBDIO(::UnityEngine::Vector2 JNDDJMAHNAI, ::UnityEngine::Vector2 EJCBEJMGFAJ, ::UnityEngine::Vector2 EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_MPPMAKOBDIO_OFFSET))(JNDDJMAHNAI, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		static ::System::Boolean CLMBAGNMBEK(::UnityEngine::Vector2 OJEAHHBCAAN, ::UnityEngine::Vector2 EEBGKAHLFNO, ::UnityEngine::Vector2 JJGPBPEDLNO, ::UnityEngine::Vector2 IJFHKDLHBMH)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_CLMBAGNMBEK_OFFSET))(OJEAHHBCAAN, EEBGKAHLFNO, JJGPBPEDLNO, IJFHKDLHBMH);
		}

		static ::System::Void KDIGIGKCPMI(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* FBBKCBCPNDM, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GAJHHPOMOBF, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CHPCHCGAFIN)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_KDIGIGKCPMI_OFFSET))(FBBKCBCPNDM, GAJHHPOMOBF, CHPCHCGAFIN);
		}

		static ::System::Boolean ICGHIJHGGHE(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CELGKCKLPJC)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_ICGHIJHGGHE_OFFSET))(CELGKCKLPJC);
		}

		::System::Void APNGLCBFEOC(::MoleMole::Config::RuntimePolygonBound PLKKOIKIMMA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DDCMDFBCOCJ, ::System::Collections::Generic::List_1<::System::Int32>* JOLIICIAMBF, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CHPCHCGAFIN, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* AGLPILADKGJ, ::System::Collections::Generic::List_1<::UnityEngine::Color>* COEABFOGOBI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RuntimePolygonBound, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_APNGLCBFEOC_OFFSET))(this, PLKKOIKIMMA, DDCMDFBCOCJ, JOLIICIAMBF, CHPCHCGAFIN, AGLPILADKGJ, COEABFOGOBI);
		}

		static ::System::Boolean MCBOCKAGKHH(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CELGKCKLPJC)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_MCBOCKAGKHH_OFFSET))(CELGKCKLPJC);
		}

		static ::System::Void IOCMEGENEED(::System::Collections::Generic::List_1<::System::Int32>* JOLIICIAMBF, ::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC, ::System::Int32 CBLGCIFLMKL, ::System::Boolean IKIAINGDFMJ)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_IOCMEGENEED_OFFSET))(JOLIICIAMBF, EJCBEJMGFAJ, EBFCACIEKBC, CBLGCIFLMKL, IKIAINGDFMJ);
		}

		static ::System::Boolean PFJCKCKKNPG(::UnityEngine::Vector2 OPMPKFEHOBM, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* ICCPGFIBMBD, ::System::Boolean IKIAINGDFMJ)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_PFJCKCKKNPG_OFFSET))(OPMPKFEHOBM, ICCPGFIBMBD, IKIAINGDFMJ);
		}

		static ::System::Boolean CLLFMPAPEME(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CELGKCKLPJC, ::System::Single BDEDDEGJFKL, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& JFMLEBOIEIC)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_CLLFMPAPEME_OFFSET))(CELGKCKLPJC, BDEDDEGJFKL, JFMLEBOIEIC);
		}

		::System::Void HDJAOMKJAIC(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CELGKCKLPJC, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CHPCHCGAFIN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_HDJAOMKJAIC_OFFSET))(this, CELGKCKLPJC, CHPCHCGAFIN);
		}

		static ::System::Boolean AJNEBCAFACH(::UnityEngine::Vector2 FEEFJKNGPAD, ::UnityEngine::Vector2 EJKCCEHMDDO, ::UnityEngine::Vector2 BAFOIFLFFPH, ::UnityEngine::Vector2 HHNBDNMLOCD, ::UnityEngine::Vector2& GPPDFABNGMG)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_AJNEBCAFACH_OFFSET))(FEEFJKNGPAD, EJKCCEHMDDO, BAFOIFLFFPH, HHNBDNMLOCD, GPPDFABNGMG);
		}

		static ::System::Single PENAABAABML(::UnityEngine::Vector2 EJCBEJMGFAJ, ::UnityEngine::Vector2 EBFCACIEKBC)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_PENAABAABML_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}

		static ::System::Void DJCNIJGGKDI(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CELGKCKLPJC, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CHPCHCGAFIN)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_DJCNIJGGKDI_OFFSET))(CELGKCKLPJC, CHPCHCGAFIN);
		}

		static ::System::Single ADNFCFDCMDF(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* KPBGFGOPMJJ)
		{
			return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_ADNFCFDCMDF_OFFSET))(KPBGFGOPMJJ);
		}

		static ::System::Boolean IDKDIHEBKEJ(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC, ::System::Int32 JHFKDGBCOBA)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_IDKDIHEBKEJ_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, JHFKDGBCOBA);
		}

		::UnityEngine::Mesh* LCGJKKJIJEJ(::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* GFCPEGNMKFC, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HPMOIAMHPLC)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_LCGJKKJIJEJ_OFFSET))(this, GFCPEGNMKFC, HPMOIAMHPLC);
		}

		::System::Void HDJAOMKJAIC_1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* FBBKCBCPNDM, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GAJHHPOMOBF, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CHPCHCGAFIN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_HDJAOMKJAIC_1_OFFSET))(this, FBBKCBCPNDM, GAJHHPOMOBF, CHPCHCGAFIN);
		}

		::System::Void PKNJCOICMBG(::MoleMole::Config::RuntimePolygonBound PLKKOIKIMMA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DDCMDFBCOCJ, ::System::Collections::Generic::List_1<::System::Int32>* JOLIICIAMBF, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CHPCHCGAFIN, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* AGLPILADKGJ, ::System::Collections::Generic::List_1<::UnityEngine::Color>* COEABFOGOBI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RuntimePolygonBound, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_PKNJCOICMBG_OFFSET))(this, PLKKOIKIMMA, DDCMDFBCOCJ, JOLIICIAMBF, CHPCHCGAFIN, AGLPILADKGJ, COEABFOGOBI);
		}

		::System::Void MLENBIADKCD(::MoleMole::Config::RuntimePolygonBound PLKKOIKIMMA, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* JFMLEBOIEIC, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DDCMDFBCOCJ, ::System::Collections::Generic::List_1<::System::Int32>* JOLIICIAMBF, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CHPCHCGAFIN, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* AGLPILADKGJ, ::System::Collections::Generic::List_1<::UnityEngine::Color>* COEABFOGOBI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RuntimePolygonBound, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_MLENBIADKCD_OFFSET))(this, PLKKOIKIMMA, JFMLEBOIEIC, DDCMDFBCOCJ, JOLIICIAMBF, CHPCHCGAFIN, AGLPILADKGJ, COEABFOGOBI);
		}

		static ::System::Boolean INHHBCOAMOA(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CELGKCKLPJC, ::System::Single BDEDDEGJFKL, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& JFMLEBOIEIC)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MIASMASPRAYERMESHGENERATOR_INHHBCOAMOA_OFFSET))(CELGKCKLPJC, BDEDDEGJFKL, JFMLEBOIEIC);
		}
	};
}
