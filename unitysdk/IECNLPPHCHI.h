#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPKBDIJDMAP.h"
#include "unitysdk/MPKBDIJDMAP_IAMAKGEAMMG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class APOLLOBLGOE;
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define IECNLPPHCHI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1A456D90)
#define IECNLPPHCHI_DELDLFAGJEJ_OFFSET UNITYSDK_OFFSET(0x1A456AF0)
#define IECNLPPHCHI_HFJKKGKPANC_OFFSET UNITYSDK_OFFSET(0x1A456890)
#define IECNLPPHCHI_JFKGGDBBEDG_OFFSET UNITYSDK_OFFSET(0x1A456950)
#define IECNLPPHCHI_JGEKEKBAFAM_OFFSET UNITYSDK_OFFSET(0x1A456850)
#define IECNLPPHCHI_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1A456760)
#define IECNLPPHCHI_LNLDPCPNKNM_OFFSET UNITYSDK_OFFSET(0x1A456D20)
#define IECNLPPHCHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A456840)

inline static constexpr unsigned int IECNLPPHCHI_TypeDefinitionIndex = 64118;

class IECNLPPHCHI : public ::MPKBDIJDMAP
{
public:
	::MPKBDIJDMAP_IAMAKGEAMMG EPPENCBCAFH; // 0x58
	::System::Action_3<::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32>* LHMIGFLEOMK; // 0x68
	::UnityEngine::Vector3 ELHBNNCICIF; // 0x70
	::UnityEngine::Vector3 DECEMIHLKAD; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNLPPHCHI__CTOR_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNLPPHCHI_KMMIPNMJILI_OFFSET))(this);
	}

	::APOLLOBLGOE* JGEKEKBAFAM()
	{
		return ((::APOLLOBLGOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNLPPHCHI_JGEKEKBAFAM_OFFSET))(this);
	}

	::System::Void HFJKKGKPANC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECNLPPHCHI_HFJKKGKPANC_OFFSET))(this);
	}

	::System::Void JFKGGDBBEDG(::MoleMole::TextureSheetAnimCurveParam* ALLOPLHJOMK, ::System::Int32 DBHFIJGFPOK, ::System::Action* OCIKNBPALGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetAnimCurveParam*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + IECNLPPHCHI_JFKGGDBBEDG_OFFSET))(this, ALLOPLHJOMK, DBHFIJGFPOK, OCIKNBPALGG);
	}

	::System::Void DELDLFAGJEJ(::MoleMole::TextureSheetAnimCurveParam* LCCCJNLHCAC, ::UnityEngine::Vector4 FPKOBDJNIDH, ::UnityEngine::Vector4 CIEBHFEIMIB, ::System::Int32 DBHFIJGFPOK, ::System::Action_3<::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32>* MGIGKGDHLFL, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetAnimCurveParam*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Int32, ::System::Action_3<::MPKBDIJDMAP*, ::UnityEngine::Vector4, ::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + IECNLPPHCHI_DELDLFAGJEJ_OFFSET))(this, LCCCJNLHCAC, FPKOBDJNIDH, CIEBHFEIMIB, DBHFIJGFPOK, MGIGKGDHLFL, IHLBALNBGKM);
	}

	static ::IECNLPPHCHI* LNLDPCPNKNM()
	{
		return ((::IECNLPPHCHI*(*)())((::PBYTE)hIl2Cpp + IECNLPPHCHI_LNLDPCPNKNM_OFFSET))();
	}

	static ::IECNLPPHCHI* COKNIICCODC()
	{
		return ((::IECNLPPHCHI*(*)())((::PBYTE)hIl2Cpp + IECNLPPHCHI_COKNIICCODC_OFFSET))();
	}
};
