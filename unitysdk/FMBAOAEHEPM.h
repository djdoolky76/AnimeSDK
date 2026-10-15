#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"

#define FMBAOAEHEPM_BFLIJHNDMFP_OFFSET UNITYSDK_OFFSET(0x1583BDF0)
#define FMBAOAEHEPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1583C020)
#define FMBAOAEHEPM_FAPOOPJOEBJ_OFFSET UNITYSDK_OFFSET(0x1583BD90)
#define FMBAOAEHEPM_FCFKGLPCPOP_OFFSET UNITYSDK_OFFSET(0x1583BE50)
#define FMBAOAEHEPM_LHFAFAPJJEB_OFFSET UNITYSDK_OFFSET(0x1583BED0)
#define FMBAOAEHEPM_MEMFNCNBIPD_OFFSET UNITYSDK_OFFSET(0x1583BB70)
#define FMBAOAEHEPM_OBIKIDCNEPI_OFFSET UNITYSDK_OFFSET(0x1583BAE0)

inline static constexpr unsigned int FMBAOAEHEPM_TypeDefinitionIndex = 73281;

	class FMBAOAEHEPM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBAOAEHEPM_CTOR_OFFSET))(this);
		}

		static ::System::Single OBIKIDCNEPI(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FMBAOAEHEPM_OBIKIDCNEPI_OFFSET))(a1);
		}

		static ::System::Single MEMFNCNBIPD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FMBAOAEHEPM_MEMFNCNBIPD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int16 FAPOOPJOEBJ(::System::Single a1)
		{
			return ((::System::Int16(*)(::System::Single))((::PBYTE)hIl2Cpp + FMBAOAEHEPM_FAPOOPJOEBJ_OFFSET))(a1);
		}

		static ::System::Single BFLIJHNDMFP(::System::Int16 a1)
		{
			return ((::System::Single(*)(::System::Int16))((::PBYTE)hIl2Cpp + FMBAOAEHEPM_BFLIJHNDMFP_OFFSET))(a1);
		}

		static ::System::Single FCFKGLPCPOP(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FMBAOAEHEPM_FCFKGLPCPOP_OFFSET))(a1);
		}

		static ::RPG::MVector3 LHFAFAPJJEB(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::RPG::MVector3(*)(::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FMBAOAEHEPM_LHFAFAPJJEB_OFFSET))(a1, a2, a3);
		}

	};
