#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKMJHGEDE.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class POHNBOACDHB;
namespace System { class String; }

#define PKNMDKNGDNH_BOHOCEBKLHG_OFFSET UNITYSDK_OFFSET(0xC2E16B0)
#define PKNMDKNGDNH_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E2950)
#define PKNMDKNGDNH_DCJLGCIGHAF_OFFSET UNITYSDK_OFFSET(0xC2E08F0)
#define PKNMDKNGDNH_DNPPPJBAPJH_OFFSET UNITYSDK_OFFSET(0xC2E1A10)
#define PKNMDKNGDNH_FNJCKCNKBKC_OFFSET UNITYSDK_OFFSET(0xC2E18E0)
#define PKNMDKNGDNH_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xC2E1610)
#define PKNMDKNGDNH_GJJHPJENLHO_OFFSET UNITYSDK_OFFSET(0xC2E28B0)
#define PKNMDKNGDNH_HLGPIAMPANI_OFFSET UNITYSDK_OFFSET(0xC2E13F0)
#define PKNMDKNGDNH_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xC2E07C0)
#define PKNMDKNGDNH_KGEBDHJLGJN_OFFSET UNITYSDK_OFFSET(0xC2E1EE0)
#define PKNMDKNGDNH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC2E0270)
#define PKNMDKNGDNH_MNMPLEEMKKN_OFFSET UNITYSDK_OFFSET(0xC2E0890)
#define PKNMDKNGDNH_NNFAEMDBIHC_OFFSET UNITYSDK_OFFSET(0xC2E0A10)

inline static constexpr unsigned int PKNMDKNGDNH_TypeDefinitionIndex = 77052;

	class PKNMDKNGDNH : public ::CBIKMJHGEDE
	{
	public:
		::System::String* MOFDKKMMNKI; // 0x18
		::System::String* HEEFHCHGLHC; // 0x20
		::System::String* PGAGNJGGNPJ; // 0x28
		::System::String* BIGCBDDAEHM; // 0x30
		::System::Single LDPNNKKBEHK; // 0x38
		::System::Single FLHOEGBFPJB; // 0x3C
		::System::Single MPFEKLNFEOC; // 0x40
		::System::Single CFOHJFIOCMO; // 0x44
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
