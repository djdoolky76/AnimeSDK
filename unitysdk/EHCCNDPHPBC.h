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

#define EHCCNDPHPBC_BFEFLKGHICK_OFFSET UNITYSDK_OFFSET(0x15496A50)
#define EHCCNDPHPBC_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x15497BC0)
#define EHCCNDPHPBC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154966A0)
#define EHCCNDPHPBC_CHCDMEFIOED_OFFSET UNITYSDK_OFFSET(0x15496A00)
#define EHCCNDPHPBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15496740)
#define EHCCNDPHPBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154967B0)
#define EHCCNDPHPBC_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0x15496D40)
#define EHCCNDPHPBC_EHDJGBLANLB_OFFSET UNITYSDK_OFFSET(0x15497980)
#define EHCCNDPHPBC_FPBFHHHPFGH_OFFSET UNITYSDK_OFFSET(0x154979D0)
#define EHCCNDPHPBC_GBCGAGBDABN_OFFSET UNITYSDK_OFFSET(0x15497490)
#define EHCCNDPHPBC_GBMJJIOAOHC_OFFSET UNITYSDK_OFFSET(0x15497930)
#define EHCCNDPHPBC_HIOGKNJNMCG_OFFSET UNITYSDK_OFFSET(0x154969A0)
#define EHCCNDPHPBC_KFCNGNAAEAM_OFFSET UNITYSDK_OFFSET(0x154970C0)
#define EHCCNDPHPBC_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x15496750)
#define EHCCNDPHPBC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15496B10)
#define EHCCNDPHPBC_OHFFPMHHEIE_OFFSET UNITYSDK_OFFSET(0x154978E0)
#define EHCCNDPHPBC_PEPFGJFANIB_OFFSET UNITYSDK_OFFSET(0x15497110)
#define EHCCNDPHPBC_PIPKCDOAMJM_OFFSET UNITYSDK_OFFSET(0x15497B70)

inline static constexpr unsigned int EHCCNDPHPBC_TypeDefinitionIndex = 72787;

	class EHCCNDPHPBC : public ::System::Object
	{
	public:
		::OHDDNNJKFID* NBHJNGJIIEA; // 0x10
		::UnityEngine::Coroutine* JOCAMCMPBPE; // 0x18
		::HDEPIHNOOHF* EFNAPCAMDKJ; // 0x20
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
