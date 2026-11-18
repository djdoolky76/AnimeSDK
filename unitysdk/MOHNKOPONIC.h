#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::SceneMark { class SceneMarkNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOHNKOPONIC_ABCMBOMMHGB_OFFSET UNITYSDK_OFFSET(0x1217CFF0)
#define MOHNKOPONIC_DMBBLIMDNNB_OFFSET UNITYSDK_OFFSET(0x1217CB10)
#define MOHNKOPONIC_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x1217C900)
#define MOHNKOPONIC_HKEEBEPIFPC_OFFSET UNITYSDK_OFFSET(0x1217D600)
#define MOHNKOPONIC_IKKJFCHNLDP_OFFSET UNITYSDK_OFFSET(0x1217C980)
#define MOHNKOPONIC_KIJNGEDFIGC_1_OFFSET UNITYSDK_OFFSET(0x1217D8F0)
#define MOHNKOPONIC_KIJNGEDFIGC_OFFSET UNITYSDK_OFFSET(0x1217D3D0)
#define MOHNKOPONIC_NBBDNFAEODE_OFFSET UNITYSDK_OFFSET(0x1217C9C0)
#define MOHNKOPONIC_NOIPNBAFNJD_OFFSET UNITYSDK_OFFSET(0x1217CEE0)
#define MOHNKOPONIC_OAGGIGPCGFM_1_OFFSET UNITYSDK_OFFSET(0x1217DAA0)
#define MOHNKOPONIC_OAGGIGPCGFM_OFFSET UNITYSDK_OFFSET(0x1217D750)
#define MOHNKOPONIC_OJFBBOMGIEN_OFFSET UNITYSDK_OFFSET(0x1217C940)
#define MOHNKOPONIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1217CA00)

inline static constexpr unsigned int MOHNKOPONIC_TypeDefinitionIndex = 70941;

class MOHNKOPONIC : public ::System::Object
{
public:
	// static const ::System::Int32 EAPICLKOCFF = -0x64; // 0x0
	// static const ::System::Int32 PFPDOKKNFHD = -0x1; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* PHGOBEKEPLH; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* EMFJPCJFMKL; // 0x18
	::System::Int32 GOBONGGNLHP; // 0x20
	::System::Single GKLNGKEMNHO; // 0x24
	::System::Single DAJBHGKELMF; // 0x28
	::System::Single FCKHEABDPON; // 0x2C
	::System::Int32 NDOMMKEMILF; // 0x30
	::System::Int32 CBABIFNGGJC; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHNKOPONIC__CTOR_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHNKOPONIC_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Void OJFBBOMGIEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHNKOPONIC_OJFBBOMGIEN_OFFSET))(this);
	}

	::System::Void IKKJFCHNLDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHNKOPONIC_IKKJFCHNLDP_OFFSET))(this);
	}

	::System::Boolean NBBDNFAEODE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHNKOPONIC_NBBDNFAEODE_OFFSET))(this);
	}

	::System::Boolean DMBBLIMDNNB(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOHNKOPONIC_DMBBLIMDNNB_OFFSET))(this, OHOGDOMNHNK);
	}

	::System::Boolean NOIPNBAFNJD(::UnityEngine::Vector3 MPLDDNMCECG, ::UnityEngine::Vector3& EMBJNLBGKDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOHNKOPONIC_NOIPNBAFNJD_OFFSET))(this, MPLDDNMCECG, EMBJNLBGKDD);
	}

	::System::Boolean KIJNGEDFIGC(::System::UInt16 HAAEBCOBKFF, ::System::UInt16 BFMMEICFNCD, ::System::UInt16 GNHOCNHLCCA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + MOHNKOPONIC_KIJNGEDFIGC_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD, GNHOCNHLCCA);
	}

	::System::Boolean HKEEBEPIFPC(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Single OGIHENKICBP)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOHNKOPONIC_HKEEBEPIFPC_OFFSET))(this, OHOGDOMNHNK, OGIHENKICBP);
	}

	::System::Void OAGGIGPCGFM(::MoleMole::SceneMark::SceneMarkNode* HHIJHDFHPOI, ::System::Boolean OICDGPGIPCF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SceneMark::SceneMarkNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOHNKOPONIC_OAGGIGPCGFM_OFFSET))(this, HHIJHDFHPOI, OICDGPGIPCF);
	}

	::System::Boolean KIJNGEDFIGC_1(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOHNKOPONIC_KIJNGEDFIGC_1_OFFSET))(this, OHOGDOMNHNK);
	}

	::System::Void OAGGIGPCGFM_1(::UnityEngine::Bounds GOFCNJELMHH, ::System::Boolean OICDGPGIPCF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::System::Boolean))((::PBYTE)hIl2Cpp + MOHNKOPONIC_OAGGIGPCGFM_1_OFFSET))(this, GOFCNJELMHH, OICDGPGIPCF);
	}

	::System::Boolean ABCMBOMMHGB(::UnityEngine::Vector3 MPLDDNMCECG, ::System::Int32& HPDACNPGOGO, ::System::Int32& CDKMDONFKJB)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOHNKOPONIC_ABCMBOMMHGB_OFFSET))(this, MPLDDNMCECG, HPDACNPGOGO, CDKMDONFKJB);
	}
};
