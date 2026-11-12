#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIKOGDBPCLO.h"
#include "unitysdk/HLNOEGNOJHH_PlaceInteractState.h"
class IDPIIKPHFJP;

#define EBGAPLMBAMC_AGJJOCKENHH_OFFSET UNITYSDK_OFFSET(0x13AA0AC0)
#define EBGAPLMBAMC_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x13AA09A0)
#define EBGAPLMBAMC_CTOR_OFFSET UNITYSDK_OFFSET(0x13AA0CE0)
#define EBGAPLMBAMC_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x13AA0710)
#define EBGAPLMBAMC_HKOFCHLNKJB_OFFSET UNITYSDK_OFFSET(0x13AA0C20)
#define EBGAPLMBAMC_LIAODLAKNKN_OFFSET UNITYSDK_OFFSET(0x13AA0BB0)
#define EBGAPLMBAMC_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x13AA0960)
#define EBGAPLMBAMC_NPJJJGIAGON_OFFSET UNITYSDK_OFFSET(0x13AA0A00)

inline static constexpr unsigned int EBGAPLMBAMC_TypeDefinitionIndex = 80508;

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
