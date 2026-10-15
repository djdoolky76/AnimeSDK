#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIKOGDBPCLO.h"
#include "unitysdk/HLNOEGNOJHH_PlaceInteractState.h"
class IDPIIKPHFJP;

#define EBGAPLMBAMC_AGJJOCKENHH_OFFSET UNITYSDK_OFFSET(0x12CEFA50)
#define EBGAPLMBAMC_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x12CEF930)
#define EBGAPLMBAMC_CTOR_OFFSET UNITYSDK_OFFSET(0x12CEFC70)
#define EBGAPLMBAMC_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x12CEF690)
#define EBGAPLMBAMC_HKOFCHLNKJB_OFFSET UNITYSDK_OFFSET(0x12CEFBB0)
#define EBGAPLMBAMC_LIAODLAKNKN_OFFSET UNITYSDK_OFFSET(0x12CEFB40)
#define EBGAPLMBAMC_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x12CEF8F0)
#define EBGAPLMBAMC_NPJJJGIAGON_OFFSET UNITYSDK_OFFSET(0x12CEF990)

inline static constexpr unsigned int EBGAPLMBAMC_TypeDefinitionIndex = 77773;

	class EBGAPLMBAMC : public ::GIKOGDBPCLO
	{
	public:
		::System::Boolean JIKCNOKBNDB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAPLMBAMC_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + EBGAPLMBAMC_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void NMPLHCJKEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAPLMBAMC_NMPLHCJKEOI_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + EBGAPLMBAMC_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void NPJJJGIAGON(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + EBGAPLMBAMC_NPJJJGIAGON_OFFSET))(this, a1);
		}

		::System::Void LIAODLAKNKN(::IDPIIKPHFJP* a1, ::HLNOEGNOJHH_PlaceInteractState a2)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*, ::HLNOEGNOJHH_PlaceInteractState))((::PBYTE)hIl2Cpp + EBGAPLMBAMC_LIAODLAKNKN_OFFSET))(this, a1, a2);
		}

		::System::Boolean HKOFCHLNKJB(::IDPIIKPHFJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + EBGAPLMBAMC_HKOFCHLNKJB_OFFSET))(this, a1);
		}

		::System::Void AGJJOCKENHH(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + EBGAPLMBAMC_AGJJOCKENHH_OFFSET))(this, a1);
		}

	};
