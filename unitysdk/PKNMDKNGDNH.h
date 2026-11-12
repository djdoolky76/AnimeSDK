#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKMJHGEDE.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class POHNBOACDHB;
namespace System { class String; }

#define PKNMDKNGDNH_BOHOCEBKLHG_OFFSET UNITYSDK_OFFSET(0xCC17E40)
#define PKNMDKNGDNH_CTOR_OFFSET UNITYSDK_OFFSET(0xCC190C0)
#define PKNMDKNGDNH_DCJLGCIGHAF_OFFSET UNITYSDK_OFFSET(0xCC17090)
#define PKNMDKNGDNH_DNPPPJBAPJH_OFFSET UNITYSDK_OFFSET(0xCC181A0)
#define PKNMDKNGDNH_FNJCKCNKBKC_OFFSET UNITYSDK_OFFSET(0xCC18070)
#define PKNMDKNGDNH_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xCC17DA0)
#define PKNMDKNGDNH_GJJHPJENLHO_OFFSET UNITYSDK_OFFSET(0xCC19020)
#define PKNMDKNGDNH_HLGPIAMPANI_OFFSET UNITYSDK_OFFSET(0xCC17B80)
#define PKNMDKNGDNH_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xCC16F60)
#define PKNMDKNGDNH_KGEBDHJLGJN_OFFSET UNITYSDK_OFFSET(0xCC18660)
#define PKNMDKNGDNH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCC16A20)
#define PKNMDKNGDNH_MNMPLEEMKKN_OFFSET UNITYSDK_OFFSET(0xCC17030)
#define PKNMDKNGDNH_NNFAEMDBIHC_OFFSET UNITYSDK_OFFSET(0xCC171B0)

inline static constexpr unsigned int PKNMDKNGDNH_TypeDefinitionIndex = 79387;

	class PKNMDKNGDNH : public ::CBIKMJHGEDE
	{
	public:
		::System::String* HEEFHCHGLHC; // 0x18
		::System::String* MOFDKKMMNKI; // 0x20
		::System::String* BIGCBDDAEHM; // 0x28
		::System::String* PGAGNJGGNPJ; // 0x30
		::System::Single FLHOEGBFPJB; // 0x38
		::System::Single CFOHJFIOCMO; // 0x3C
		::System::Single MPFEKLNFEOC; // 0x40
		::System::Single LDPNNKKBEHK; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void MNMPLEEMKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_MNMPLEEMKKN_OFFSET))(this);
		}

		::System::Boolean DCJLGCIGHAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_DCJLGCIGHAF_OFFSET))(this);
		}

		::System::Void NNFAEMDBIHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_NNFAEMDBIHC_OFFSET))(this);
		}

		::System::Boolean HLGPIAMPANI(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_HLGPIAMPANI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GBCHFFLMIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_GBCHFFLMIIC_OFFSET))(this);
		}

		::System::Void BOHOCEBKLHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_BOHOCEBKLHG_OFFSET))(this);
		}

		::System::Void FNJCKCNKBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_FNJCKCNKBKC_OFFSET))(this);
		}

		::System::Void DNPPPJBAPJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_DNPPPJBAPJH_OFFSET))(this);
		}

		::System::Void KGEBDHJLGJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_KGEBDHJLGJN_OFFSET))(this);
		}

		::System::Void GJJHPJENLHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNMDKNGDNH_GJJHPJENLHO_OFFSET))(this);
		}

	};
