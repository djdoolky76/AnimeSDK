#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMHKHFAEOAD.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/RendererMoveReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EDMFJBLKKIF;
class HEHPINDHNON;
class OJALIGLEAGK;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }

#define GFACMJOEDGH_BMGCLNNDLGC_OFFSET UNITYSDK_OFFSET(0x1CA8A3C0)
#define GFACMJOEDGH_CAKFOPJJKLO_OFFSET UNITYSDK_OFFSET(0x1CA899A0)
#define GFACMJOEDGH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA8A560)
#define GFACMJOEDGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA8AAE0)
#define GFACMJOEDGH_DOAGLLJAIDF_OFFSET UNITYSDK_OFFSET(0x1CA89DD0)
#define GFACMJOEDGH_FDKFBFELNBK_OFFSET UNITYSDK_OFFSET(0x1CA89F50)
#define GFACMJOEDGH_IHHMBDIAKMA_OFFSET UNITYSDK_OFFSET(0x1CA8A000)
#define GFACMJOEDGH_KGAHMJAMFPC_OFFSET UNITYSDK_OFFSET(0x1CA8A290)
#define GFACMJOEDGH_LOECGOEHKNH_OFFSET UNITYSDK_OFFSET(0x1CA8A490)
#define GFACMJOEDGH_NLKFNJLMJCD_OFFSET UNITYSDK_OFFSET(0x1CA89B90)
#define GFACMJOEDGH_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA8AA30)
#define GFACMJOEDGH_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA8AAA0)
#define GFACMJOEDGH_PDFCFNOGJCF_OFFSET UNITYSDK_OFFSET(0x1CA8A220)
#define GFACMJOEDGH_PGIAFDBMMIO_OFFSET UNITYSDK_OFFSET(0x1CA89A70)
#define GFACMJOEDGH_POJALLMFIJJ_OFFSET UNITYSDK_OFFSET(0x1CA8A500)

inline static constexpr unsigned int GFACMJOEDGH_TypeDefinitionIndex = 43287;

	class GFACMJOEDGH : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::HEHPINDHNON*>* BMGBOIBPGKL; // 0x10
		::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::RPG::PoolDictionary_2<::MMHKHFAEOAD, ::OJALIGLEAGK*>*>* CAGGBOGCPHH; // 0x18
		::RPG::PoolList_1<::EDMFJBLKKIF*>* CEHBONLFIIO; // 0x20
		::System::Boolean PLFEMPPAFAB; // 0x28
		::System::Boolean BJMHBKDMIAG; // 0x29
		::System::Byte _padding0[0x2];
		::UnityEngine::Quaternion HMLADPBJAMB; // 0x2C
		::UnityEngine::Vector3 OHLPJGIECPF; // 0x3C
		::UnityEngine::Quaternion FBGGLNLDMKE; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFACMJOEDGH_CTOR_OFFSET))(this);
		}

		::System::Void CAKFOPJJKLO(::HEHPINDHNON* a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::HEHPINDHNON*, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + GFACMJOEDGH_CAKFOPJJKLO_OFFSET))(this, a1, a2);
		}

		::System::Void NLKFNJLMJCD(::OJALIGLEAGK* a1, ::MMHKHFAEOAD a2, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::OJALIGLEAGK*, ::MMHKHFAEOAD, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + GFACMJOEDGH_NLKFNJLMJCD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DOAGLLJAIDF(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2, ::MMHKHFAEOAD a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::MMHKHFAEOAD))((::PBYTE)hIl2Cpp + GFACMJOEDGH_DOAGLLJAIDF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FDKFBFELNBK(::EDMFJBLKKIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDMFJBLKKIF*))((::PBYTE)hIl2Cpp + GFACMJOEDGH_FDKFBFELNBK_OFFSET))(this, a1);
		}

		::System::Void PGIAFDBMMIO(::RPG::Client::LittleGame::FiveDim::RendererMoveReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + GFACMJOEDGH_PGIAFDBMMIO_OFFSET))(this, a1);
		}

		::System::Void IHHMBDIAKMA(::RPG::Client::LittleGame::FiveDim::RendererMoveReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + GFACMJOEDGH_IHHMBDIAKMA_OFFSET))(this, a1);
		}

		::System::Void PDFCFNOGJCF(::EDMFJBLKKIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDMFJBLKKIF*))((::PBYTE)hIl2Cpp + GFACMJOEDGH_PDFCFNOGJCF_OFFSET))(this, a1);
		}

		::System::Void KGAHMJAMFPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFACMJOEDGH_KGAHMJAMFPC_OFFSET))(this);
		}

		::System::Boolean BMGCLNNDLGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFACMJOEDGH_BMGCLNNDLGC_OFFSET))(this);
		}

		::System::Boolean LOECGOEHKNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFACMJOEDGH_LOECGOEHKNH_OFFSET))(this);
		}

		::System::Boolean POJALLMFIJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFACMJOEDGH_POJALLMFIJJ_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFACMJOEDGH_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFACMJOEDGH_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFACMJOEDGH_ONRECYCLE_OFFSET))(this);
		}

	};
