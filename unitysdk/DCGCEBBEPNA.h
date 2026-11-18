#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBBBNHGCMJJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCGCEBBEPNA_FACGJNJOHNE_OFFSET UNITYSDK_OFFSET(0x168A4B90)
#define DCGCEBBEPNA_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x168A4600)
#define DCGCEBBEPNA_IKKJFCHNLDP_OFFSET UNITYSDK_OFFSET(0x168A4680)
#define DCGCEBBEPNA_KAGAFHLHCLF_OFFSET UNITYSDK_OFFSET(0x168A47D0)
#define DCGCEBBEPNA_NBBDNFAEODE_OFFSET UNITYSDK_OFFSET(0x168A46C0)
#define DCGCEBBEPNA_NOIPNBAFNJD_OFFSET UNITYSDK_OFFSET(0x168A4FC0)
#define DCGCEBBEPNA_OJFBBOMGIEN_OFFSET UNITYSDK_OFFSET(0x168A4640)
#define DCGCEBBEPNA__CTOR_OFFSET UNITYSDK_OFFSET(0x168A4700)

inline static constexpr unsigned int DCGCEBBEPNA_TypeDefinitionIndex = 76559;

class DCGCEBBEPNA : public ::System::Object
{
public:
	// static const ::System::Int32 EAPICLKOCFF = -0x64; // 0x0
	// static const ::System::Int32 PFPDOKKNFHD = -0x1; // 0x0
	// static const ::System::Single EMLPFDDJHJH; // 0x0
	::System::Collections::Generic::List_1<::System::Object*>* EMFJPCJFMKL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::PBBBNHGCMJJ>* EOPPFPBBPFB; // 0x18
	::System::Single DAJBHGKELMF; // 0x20
	::System::Int32 CBABIFNGGJC; // 0x24
	::System::Int32 GOBONGGNLHP; // 0x28
	::System::Int32 NDOMMKEMILF; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGCEBBEPNA__CTOR_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGCEBBEPNA_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Void OJFBBOMGIEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGCEBBEPNA_OJFBBOMGIEN_OFFSET))(this);
	}

	::System::Void IKKJFCHNLDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGCEBBEPNA_IKKJFCHNLDP_OFFSET))(this);
	}

	::System::Boolean NBBDNFAEODE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGCEBBEPNA_NBBDNFAEODE_OFFSET))(this);
	}

	::System::Void KAGAFHLHCLF(::System::Collections::Generic::List_1<::System::String*>* CAAGOBKDCMN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + DCGCEBBEPNA_KAGAFHLHCLF_OFFSET))(this, CAAGOBKDCMN);
	}

	::System::Boolean FACGJNJOHNE(::UnityEngine::Bounds& LKEGAHFGOEP, ::PBBBNHGCMJJ EBJICBIMOHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds&, ::PBBBNHGCMJJ))((::PBYTE)hIl2Cpp + DCGCEBBEPNA_FACGJNJOHNE_OFFSET))(this, LKEGAHFGOEP, EBJICBIMOHN);
	}

	::System::Boolean NOIPNBAFNJD(::UnityEngine::Vector3 MPLDDNMCECG, ::UnityEngine::Vector3& EMBJNLBGKDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DCGCEBBEPNA_NOIPNBAFNJD_OFFSET))(this, MPLDDNMCECG, EMBJNLBGKDD);
	}
};
