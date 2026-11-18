#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLLBGBCAMCH.h"
#include "unitysdk/KDACPOHLKJL_BMJLJBBAECJ.h"
#include "unitysdk/KDACPOHLKJL_HANJPAPAJOO.h"
#include "unitysdk/KDACPOHLKJL_HPGAMGLNMFC.h"
#include "unitysdk/KDACPOHLKJL_JAAEJCJJDNB.h"
#include "unitysdk/KDACPOHLKJL_JFKDMAFLLOF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/PLGEFGFNJAD.h"

class KDACPOHLKJL_GBBECMALJAF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define KDACPOHLKJL_NDNOAADBNGO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x130AF980)
#define KDACPOHLKJL_NDNOAADBNGO_BHLIAEIONNP_OFFSET UNITYSDK_OFFSET(0x130B0C80)
#define KDACPOHLKJL_NDNOAADBNGO_FBDINPHOPEH_OFFSET UNITYSDK_OFFSET(0x130AF960)
#define KDACPOHLKJL_NDNOAADBNGO_GJJDMPKGOPO_OFFSET UNITYSDK_OFFSET(0x130AFFA0)
#define KDACPOHLKJL_NDNOAADBNGO_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x130B0580)
#define KDACPOHLKJL_NDNOAADBNGO_LOHHDJAGDMK_OFFSET UNITYSDK_OFFSET(0x130B00F0)
#define KDACPOHLKJL_NDNOAADBNGO_PCNIJCMCMOC_OFFSET UNITYSDK_OFFSET(0x130B02A0)
#define KDACPOHLKJL_NDNOAADBNGO__CTOR_OFFSET UNITYSDK_OFFSET(0x130AF950)

inline static constexpr unsigned int KDACPOHLKJL_NDNOAADBNGO_TypeDefinitionIndex = 65701;

class KDACPOHLKJL_NDNOAADBNGO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* EGJDNOBAIFO; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* OBKICKGGFEO; // 0x18
	::KDACPOHLKJL_GBBECMALJAF* BDLKKCMONFD; // 0x20
	::KDACPOHLKJL_JFKDMAFLLOF GNPCMAHEFMN; // 0x28
	::KDACPOHLKJL_BMJLJBBAECJ FMCLNGJBOHM; // 0x38
	::Unity::Jobs::JobHandle BJOOLNIDBJH; // 0x48
	::Unity::Collections::NativeQueue_1<::System::Int32> LGLNPFAGFFN; // 0x58
	::System::Byte _padding0[0x10];
	::UnityEngine::Jobs::TransformAccessArray FGHJNIHKJEO; // 0x70
	::KDACPOHLKJL_JAAEJCJJDNB EBPGNAANLLA; // 0x78
	::KDACPOHLKJL_HANJPAPAJOO DJOEFAIHDNH; // 0xB0
	::Unity::Collections::NativeList_1<::HLLBGBCAMCH> NHIJHIOCHOH; // 0xD8
	::System::Byte _padding1[0x8];
	::Unity::Collections::NativeQueue_1<::System::Int32> LELKNOHDAJH; // 0xE8
	::System::Byte _padding2[0x10];
	::Unity::Collections::NativeQueue_1<::System::Int32> LINOEAHLFOM; // 0x100
	::System::Byte _padding3[0x10];
	::System::Boolean OIDIMNCAOGF; // 0x118
	::System::Boolean FAHODHFIFOI; // 0x119
	::System::Byte _padding4[0x6];
	::KDACPOHLKJL_HPGAMGLNMFC COBPGDOAJMH; // 0x120
	::Unity::Collections::NativeQueue_1<::System::UInt32> CPHHPIFPKFK; // 0x188
	::System::Byte _padding5[0x10];
	::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Int32> JGJLIFHFCJE; // 0x1A0

	::System::Void _ctor(::System::Boolean FAHODHFIFOI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDACPOHLKJL_NDNOAADBNGO__CTOR_OFFSET))(this, FAHODHFIFOI);
	}

	::PLGEFGFNJAD FBDINPHOPEH()
	{
		return ((::PLGEFGFNJAD(*)(::PVOID))((::PBYTE)hIl2Cpp + KDACPOHLKJL_NDNOAADBNGO_FBDINPHOPEH_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDACPOHLKJL_NDNOAADBNGO_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void GJJDMPKGOPO(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDACPOHLKJL_NDNOAADBNGO_GJJDMPKGOPO_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void LOHHDJAGDMK(::System::Int32 KKIIJGFNHOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDACPOHLKJL_NDNOAADBNGO_LOHHDJAGDMK_OFFSET))(this, KKIIJGFNHOD);
	}

	::System::Int32 PCNIJCMCMOC(::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KDACPOHLKJL_NDNOAADBNGO_PCNIJCMCMOC_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDACPOHLKJL_NDNOAADBNGO_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Void BHLIAEIONNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDACPOHLKJL_NDNOAADBNGO_BHLIAEIONNP_OFFSET))(this);
	}
};
