#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIKOGDBPCLO.h"
#include "unitysdk/HLNOEGNOJHH_PlaceInteractState.h"
#include "unitysdk/NNKGNMJOELO_OperateMode.h"
class IDPIIKPHFJP;

#define FGKKOHNDOHL_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x18A906A0)
#define FGKKOHNDOHL_CTOR_OFFSET UNITYSDK_OFFSET(0x18A90AE0)
#define FGKKOHNDOHL_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x18A90210)
#define FGKKOHNDOHL_HKOFCHLNKJB_OFFSET UNITYSDK_OFFSET(0x18A908B0)
#define FGKKOHNDOHL_HLNPLBLMLML_OFFSET UNITYSDK_OFFSET(0x18A90840)
#define FGKKOHNDOHL_ICNFFGOHHGE_OFFSET UNITYSDK_OFFSET(0x18A90440)
#define FGKKOHNDOHL_LIAODLAKNKN_OFFSET UNITYSDK_OFFSET(0x18A907C0)
#define FGKKOHNDOHL_MJEAEBGMNJB_OFFSET UNITYSDK_OFFSET(0x18A90270)
#define FGKKOHNDOHL_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x18A90570)
#define FGKKOHNDOHL_NPJJJGIAGON_OFFSET UNITYSDK_OFFSET(0x18A90700)

inline static constexpr unsigned int FGKKOHNDOHL_TypeDefinitionIndex = 80505;

	class FGKKOHNDOHL : public ::GIKOGDBPCLO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKKOHNDOHL_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + FGKKOHNDOHL_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void NMPLHCJKEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKKOHNDOHL_NMPLHCJKEOI_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + FGKKOHNDOHL_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void NPJJJGIAGON(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + FGKKOHNDOHL_NPJJJGIAGON_OFFSET))(this, a1);
		}

		::System::Void LIAODLAKNKN(::IDPIIKPHFJP* a1, ::HLNOEGNOJHH_PlaceInteractState a2)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*, ::HLNOEGNOJHH_PlaceInteractState))((::PBYTE)hIl2Cpp + FGKKOHNDOHL_LIAODLAKNKN_OFFSET))(this, a1, a2);
		}

		::System::Void HLNPLBLMLML(::IDPIIKPHFJP* a1, ::NNKGNMJOELO_OperateMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*, ::NNKGNMJOELO_OperateMode))((::PBYTE)hIl2Cpp + FGKKOHNDOHL_HLNPLBLMLML_OFFSET))(this, a1, a2);
		}

		::System::Boolean HKOFCHLNKJB(::IDPIIKPHFJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + FGKKOHNDOHL_HKOFCHLNKJB_OFFSET))(this, a1);
		}

		::System::Void MJEAEBGMNJB(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + FGKKOHNDOHL_MJEAEBGMNJB_OFFSET))(this, a1);
		}

		::System::Void ICNFFGOHHGE(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + FGKKOHNDOHL_ICNFFGOHHGE_OFFSET))(this, a1);
		}

	};
