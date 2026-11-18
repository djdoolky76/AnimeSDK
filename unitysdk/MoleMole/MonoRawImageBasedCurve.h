#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class JOPCOBDEFGN;
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_AWAKE_OFFSET UNITYSDK_OFFSET(0x11943EA0)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_DCMJNONBJLI_OFFSET UNITYSDK_OFFSET(0x119459B0)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_ELOKICAIHBP_OFFSET UNITYSDK_OFFSET(0x11945330)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_GETCURVEHELPER_OFFSET UNITYSDK_OFFSET(0x11944040)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_IKLBHLEDIDN_OFFSET UNITYSDK_OFFSET(0x119450F0)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_KOJKBEBMLDD_OFFSET UNITYSDK_OFFSET(0x119455E0)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11944600)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11944200)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_PHNNCBGKKDB_OFFSET UNITYSDK_OFFSET(0x11944790)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x11944740)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRawImageBasedCurve_TypeDefinitionIndex = 68338;

	class MonoRawImageBasedCurve : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::RawImage* FFBCMFPIAON; // 0x18
		::UnityEngine::UI::Text* NBNKJCEMOHD; // 0x20
		::UnityEngine::UI::Text* DOIDCJHPBIM; // 0x28
		::UnityEngine::UI::Text* FKBIBDFBDDC; // 0x30
		::UnityEngine::UI::Text* KIKGGPLBLBM; // 0x38
		::UnityEngine::UI::Text* BAMNPJFBBDN; // 0x40
		::UnityEngine::Texture2D* NGCGBLJCMAC; // 0x48
		::System::Boolean MCGKPMIHODM; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_AWAKE_OFFSET))(this);
		}

		::JOPCOBDEFGN* GetCurveHelper()
		{
			return ((::JOPCOBDEFGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_GETCURVEHELPER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_ONDISABLE_OFFSET))(this);
		}

		::System::Void PHNNCBGKKDB(::System::Single EKCEOBJKGOA, ::System::Single JJPBJCCGNDC, ::System::String* FBCNNPLFAAG, ::System::String* GOKEGHENOGP, ::System::String* ONOAGAPJNCG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_PHNNCBGKKDB_OFFSET))(this, EKCEOBJKGOA, JJPBJCCGNDC, FBCNNPLFAAG, GOKEGHENOGP, ONOAGAPJNCG);
		}

		::System::Void IKLBHLEDIDN(::System::Int32 INJLJBKGFPE, ::System::Int32 APPIEJPKICF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_IKLBHLEDIDN_OFFSET))(this, INJLJBKGFPE, APPIEJPKICF);
		}

		::System::Void ELOKICAIHBP(::System::String* FBCNNPLFAAG, ::System::String* GOKEGHENOGP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_ELOKICAIHBP_OFFSET))(this, FBCNNPLFAAG, GOKEGHENOGP);
		}

		::System::Void KOJKBEBMLDD(::System::Single EKCEOBJKGOA, ::System::Single JJPBJCCGNDC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_KOJKBEBMLDD_OFFSET))(this, EKCEOBJKGOA, JJPBJCCGNDC);
		}

		::System::Void DCMJNONBJLI(::System::String* ONOAGAPJNCG)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_DCMJNONBJLI_OFFSET))(this, ONOAGAPJNCG);
		}
	};
}
