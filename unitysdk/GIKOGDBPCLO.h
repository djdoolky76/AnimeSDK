#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLNOEGNOJHH_PlaceInteractState.h"
#include "unitysdk/NNKGNMJOELO_OperateMode.h"
#include "unitysdk/System/Object.h"
class IDPIIKPHFJP;

#define GIKOGDBPCLO_ACILBLMBABJ_OFFSET UNITYSDK_OFFSET(0x15A39D50)
#define GIKOGDBPCLO_AMLMPHACOMK_OFFSET UNITYSDK_OFFSET(0x15A3A200)
#define GIKOGDBPCLO_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x15A3A2D0)
#define GIKOGDBPCLO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A3A460)
#define GIKOGDBPCLO_DMNGGJECJBJ_OFFSET UNITYSDK_OFFSET(0x15A39FB0)
#define GIKOGDBPCLO_ENTER_OFFSET UNITYSDK_OFFSET(0x15A39BE0)
#define GIKOGDBPCLO_EXIT_OFFSET UNITYSDK_OFFSET(0x15A39CA0)
#define GIKOGDBPCLO_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15A3A240)
#define GIKOGDBPCLO_HKOFCHLNKJB_OFFSET UNITYSDK_OFFSET(0x15A3A410)
#define GIKOGDBPCLO_HLNPLBLMLML_OFFSET UNITYSDK_OFFSET(0x15A3A3C0)
#define GIKOGDBPCLO_LAGNEMJMFGN_OFFSET UNITYSDK_OFFSET(0x15A3A070)
#define GIKOGDBPCLO_LDJJJODLHMB_OFFSET UNITYSDK_OFFSET(0x15A39EE0)
#define GIKOGDBPCLO_LIAODLAKNKN_OFFSET UNITYSDK_OFFSET(0x15A3A370)
#define GIKOGDBPCLO_NLGGFDANLKI_OFFSET UNITYSDK_OFFSET(0x15A39E10)
#define GIKOGDBPCLO_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x15A3A290)
#define GIKOGDBPCLO_NPJJJGIAGON_OFFSET UNITYSDK_OFFSET(0x15A3A320)
#define GIKOGDBPCLO_TICK_OFFSET UNITYSDK_OFFSET(0x15A39B90)

inline static constexpr unsigned int GIKOGDBPCLO_TypeDefinitionIndex = 77773;

	class GIKOGDBPCLO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_CTOR_OFFSET))(this);
		}

		::System::Void Tick(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_TICK_OFFSET))(this, a1);
		}

		::System::Void Enter(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_ENTER_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_EXIT_OFFSET))(this);
		}

		::System::Void ACILBLMBABJ(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_ACILBLMBABJ_OFFSET))(this, a1);
		}

		::System::Void NLGGFDANLKI(::IDPIIKPHFJP* a1, ::HLNOEGNOJHH_PlaceInteractState a2)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*, ::HLNOEGNOJHH_PlaceInteractState))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_NLGGFDANLKI_OFFSET))(this, a1, a2);
		}

		::System::Void LDJJJODLHMB(::IDPIIKPHFJP* a1, ::NNKGNMJOELO_OperateMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*, ::NNKGNMJOELO_OperateMode))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_LDJJJODLHMB_OFFSET))(this, a1, a2);
		}

		::System::Boolean DMNGGJECJBJ(::IDPIIKPHFJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_DMNGGJECJBJ_OFFSET))(this, a1);
		}

		::System::Void LAGNEMJMFGN(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_LAGNEMJMFGN_OFFSET))(this, a1);
		}

		::System::Void AMLMPHACOMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_AMLMPHACOMK_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void NMPLHCJKEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_NMPLHCJKEOI_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void NPJJJGIAGON(::IDPIIKPHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_NPJJJGIAGON_OFFSET))(this, a1);
		}

		::System::Void LIAODLAKNKN(::IDPIIKPHFJP* a1, ::HLNOEGNOJHH_PlaceInteractState a2)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*, ::HLNOEGNOJHH_PlaceInteractState))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_LIAODLAKNKN_OFFSET))(this, a1, a2);
		}

		::System::Void HLNPLBLMLML(::IDPIIKPHFJP* a1, ::NNKGNMJOELO_OperateMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::IDPIIKPHFJP*, ::NNKGNMJOELO_OperateMode))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_HLNPLBLMLML_OFFSET))(this, a1, a2);
		}

		::System::Boolean HKOFCHLNKJB(::IDPIIKPHFJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDPIIKPHFJP*))((::PBYTE)hIl2Cpp + GIKOGDBPCLO_HKOFCHLNKJB_OFFSET))(this, a1);
		}

	};
