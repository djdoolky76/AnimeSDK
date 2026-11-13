#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHCCNDPHPBC;
class HDEPIHNOOHF;
class OHDDNNJKFID;
namespace RPG::Client { class UIMeta; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::UI { class RawImage; }

#define EHCCNDPHPBC_BFEFLKGHICK_OFFSET UNITYSDK_OFFSET(0x18BC7420)
#define EHCCNDPHPBC_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x18BC8590)
#define EHCCNDPHPBC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x18BC7070)
#define EHCCNDPHPBC_CHCDMEFIOED_OFFSET UNITYSDK_OFFSET(0x18BC73D0)
#define EHCCNDPHPBC_CTOR_OFFSET UNITYSDK_OFFSET(0x18BC7110)
#define EHCCNDPHPBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BC7180)
#define EHCCNDPHPBC_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0x18BC7710)
#define EHCCNDPHPBC_EHDJGBLANLB_OFFSET UNITYSDK_OFFSET(0x18BC8350)
#define EHCCNDPHPBC_FPBFHHHPFGH_OFFSET UNITYSDK_OFFSET(0x18BC83A0)
#define EHCCNDPHPBC_GBCGAGBDABN_OFFSET UNITYSDK_OFFSET(0x18BC7E60)
#define EHCCNDPHPBC_GBMJJIOAOHC_OFFSET UNITYSDK_OFFSET(0x18BC8300)
#define EHCCNDPHPBC_HIOGKNJNMCG_OFFSET UNITYSDK_OFFSET(0x18BC7370)
#define EHCCNDPHPBC_KFCNGNAAEAM_OFFSET UNITYSDK_OFFSET(0x18BC7A90)
#define EHCCNDPHPBC_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x18BC7120)
#define EHCCNDPHPBC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x18BC74E0)
#define EHCCNDPHPBC_OHFFPMHHEIE_OFFSET UNITYSDK_OFFSET(0x18BC82B0)
#define EHCCNDPHPBC_PEPFGJFANIB_OFFSET UNITYSDK_OFFSET(0x18BC7AE0)
#define EHCCNDPHPBC_PIPKCDOAMJM_OFFSET UNITYSDK_OFFSET(0x18BC8540)

inline static constexpr unsigned int EHCCNDPHPBC_TypeDefinitionIndex = 74866;

	class EHCCNDPHPBC : public ::System::Object
	{
	public:
		::UnityEngine::Coroutine* JOCAMCMPBPE; // 0x10
		::HDEPIHNOOHF* EFNAPCAMDKJ; // 0x18
		::OHDDNNJKFID* NBHJNGJIIEA; // 0x20
		::System::Boolean LMJJEABKLMM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_CTOR_OFFSET))(this);
		}

		static ::EHCCNDPHPBC* BPLPBPMEODA(::HDEPIHNOOHF* a1)
		{
			return ((::EHCCNDPHPBC*(*)(::HDEPIHNOOHF*))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_DISPOSE_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::HDEPIHNOOHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDEPIHNOOHF*))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Boolean NPAFMEBNFOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void BFEFLKGHICK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_BFEFLKGHICK_OFFSET))(this);
		}

		::System::Void GBCGAGBDABN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_GBCGAGBDABN_OFFSET))(this);
		}

		::System::Void OHFFPMHHEIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_OHFFPMHHEIE_OFFSET))(this);
		}

		::System::Void EDBPHODBFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_EDBPHODBFCP_OFFSET))(this);
		}

		::System::Void PEPFGJFANIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_PEPFGJFANIB_OFFSET))(this);
		}

		::System::Void HIOGKNJNMCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_HIOGKNJNMCG_OFFSET))(this);
		}

		::System::Void FPBFHHHPFGH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_FPBFHHHPFGH_OFFSET))(this, a1);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_BJLJAHMLKIO_OFFSET))(this);
		}

		::System::Single KFCNGNAAEAM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_KFCNGNAAEAM_OFFSET))(this);
		}

		::System::Single GBMJJIOAOHC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_GBMJJIOAOHC_OFFSET))(this);
		}

		::RPG::Client::UIValueChangeAnimation* CHCDMEFIOED()
		{
			return ((::RPG::Client::UIValueChangeAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_CHCDMEFIOED_OFFSET))(this);
		}

		::UnityEngine::UI::RawImage* EHDJGBLANLB()
		{
			return ((::UnityEngine::UI::RawImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_EHDJGBLANLB_OFFSET))(this);
		}

		::RPG::Client::UIMeta* PIPKCDOAMJM()
		{
			return ((::RPG::Client::UIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCCNDPHPBC_PIPKCDOAMJM_OFFSET))(this);
		}

	};
