#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_AlignMeta.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_BDCIINGEKMH.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_HGJOGJODPEN.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_KIIDOPBABNF.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIPhysicalSizeHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIPHYSICALPOSHANDLER_ALNLFJPKIPO_OFFSET UNITYSDK_OFFSET(0x17449560)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_APPLYLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x174483B0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x174452A0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_BMOGOLBNPCF_OFFSET UNITYSDK_OFFSET(0x17449550)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_BPAMAMICDKI_OFFSET UNITYSDK_OFFSET(0x174491A0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x17445610)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_DJFLFBMCHLH_OFFSET UNITYSDK_OFFSET(0x17449540)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_EMLLPAAAHNG_OFFSET UNITYSDK_OFFSET(0x17445D40)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_GETLAYOUTRESULT_1_OFFSET UNITYSDK_OFFSET(0x17445E40)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_GETLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x174487E0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_GETPOSHANDLER_OFFSET UNITYSDK_OFFSET(0x17445000)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_GHNAIJKPLKK_OFFSET UNITYSDK_OFFSET(0x174457E0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x174494B0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x17448F70)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_INLEAIPJAHP_OFFSET UNITYSDK_OFFSET(0x17448A10)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x174498E0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_KEHPPNIHBOH_OFFSET UNITYSDK_OFFSET(0x17448C20)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x174454E0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_LFBJOLPHBFF_OFFSET UNITYSDK_OFFSET(0x17449000)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_LJLHPGBFLGC_OFFSET UNITYSDK_OFFSET(0x174488A0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_LKPBHODJPIM_OFFSET UNITYSDK_OFFSET(0x17445A30)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_MCJGEECCCPG_OFFSET UNITYSDK_OFFSET(0x17449440)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17445430)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17445370)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_PDMKAEDLDPB_OFFSET UNITYSDK_OFFSET(0x17448DD0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_PIOOPLAPDPK_OFFSET UNITYSDK_OFFSET(0x174493B0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_PLIIFNNBICH_OFFSET UNITYSDK_OFFSET(0x17445C40)
#define MOLEMOLE_UIPHYSICALPOSHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17448D30)
#define MOLEMOLE_UIPHYSICALPOSHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17448CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhysicalPosHandler_TypeDefinitionIndex = 47251;

	class UIPhysicalPosHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::UIPhysicalPosHandler*>** StaticGet_PLCOJIDEHII()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::UIPhysicalPosHandler*>**)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalPosHandler_TypeDefinitionIndex)->GetStaticField(0x4EC10);
		}
		static ::UnityEngine::Vector2* StaticGet_LGJKBKMCDBI()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalPosHandler_TypeDefinitionIndex)->GetStaticField(0x12A80);
		}
		static ::System::Single* StaticGet_GEBOLAMCLOF()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalPosHandler_TypeDefinitionIndex)->GetStaticField(0x12A88);
		}
		::System::String* _name; // 0x18
		::MoleMole::UIPhysicalPosHandler_AlignMeta _horizontalAlignMeta; // 0x20
		::MoleMole::UIPhysicalPosHandler_KIIDOPBABNF _horizontalEdge; // 0x38
		::MoleMole::UIPhysicalPosHandler_KIIDOPBABNF _horizontalAlignEdge; // 0x3C
		::System::Single _horizontalDistanceWithMillimeter; // 0x40
		::System::Single _minHorizontalDistanceWithMillimeter; // 0x44
		::System::Boolean _horizontalUsePhysicalRatio; // 0x48
		::System::Byte _padding0[0x7];
		::MoleMole::UIPhysicalPosHandler_AlignMeta _verticalAlignMeta; // 0x50
		::MoleMole::UIPhysicalPosHandler_HGJOGJODPEN _verticalEdge; // 0x68
		::MoleMole::UIPhysicalPosHandler_HGJOGJODPEN _verticalAlignEdge; // 0x6C
		::System::Single _verticalDistanceWithMillimeter; // 0x70
		::System::Single _minVerticalDistanceWithMillimeter; // 0x74
		::System::Boolean _verticalUsePhysicalRatio; // 0x78
		::System::Byte _padding1[0x3];
		::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH JFKFALDOBCL; // 0x7C
		::System::Byte _padding2[0x4];
		::MoleMole::UIPhysicalSizeHandler* OHPODEPHPME; // 0xD8
		::UnityEngine::Canvas* LHHCBJMINFM; // 0xE0
		::System::Boolean JJJFLPOLELO; // 0xE8
		::System::Boolean HOCCNOAALHH; // 0xE9
		::System::Boolean IANHKOLCODN; // 0xEA
		::System::Boolean NHBJNGHHKMC; // 0xEB
		::System::Boolean _ADPHDBHIELK_k__BackingField; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER__CCTOR_OFFSET))();
		}

		static ::MoleMole::UIPhysicalPosHandler* GetPosHandler(::System::String* HIAIKHDFCLN)
		{
			return ((::MoleMole::UIPhysicalPosHandler*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_GETPOSHANDLER_OFFSET))(HIAIKHDFCLN);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH GetLayoutResult()
		{
			return ((::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_GETLAYOUTRESULT_OFFSET))(this);
		}

		::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH GetLayoutResult_1(::System::Single EEIIKBKGCLP, ::System::Single DOJGPDLLECO)
		{
			return ((::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_GETLAYOUTRESULT_1_OFFSET))(this, EEIIKBKGCLP, DOJGPDLLECO);
		}

		::System::Void ApplyLayoutResult(::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH EKAAIJAKBPM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_APPLYLAYOUTRESULT_OFFSET))(this, EKAAIJAKBPM);
		}

		::UnityEngine::Canvas* INLEAIPJAHP()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_INLEAIPJAHP_OFFSET))(this);
		}

		::System::Single PLIIFNNBICH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_PLIIFNNBICH_OFFSET))(this);
		}

		::System::Void LKPBHODJPIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_LKPBHODJPIM_OFFSET))(this);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_ILHIIDBCNEC_OFFSET))(this);
		}

		::System::Single EMLLPAAAHNG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_EMLLPAAAHNG_OFFSET))(this);
		}

		::System::Void BPAMAMICDKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_BPAMAMICDKI_OFFSET))(this);
		}

		static ::System::Single LFBJOLPHBFF()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_LFBJOLPHBFF_OFFSET))();
		}

		::System::Void PIOOPLAPDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_PIOOPLAPDPK_OFFSET))(this);
		}

		static ::System::Single PDMKAEDLDPB()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_PDMKAEDLDPB_OFFSET))();
		}

		::System::Single LJLHPGBFLGC(::System::Single BBEBNGKKMBK, ::System::Single MGJOFMPHEJK, ::System::Int32 EJOIHNMAENJ, ::System::Boolean FOAIBAIJEGC)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_LJLHPGBFLGC_OFFSET))(this, BBEBNGKKMBK, MGJOFMPHEJK, EJOIHNMAENJ, FOAIBAIJEGC);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_GPGLNOBDBGJ_OFFSET))(this);
		}

		::System::Boolean DJFLFBMCHLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_DJFLFBMCHLH_OFFSET))(this);
		}

		::System::Void BMOGOLBNPCF(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_BMOGOLBNPCF_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void MCJGEECCCPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_MCJGEECCCPG_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> ALNLFJPKIPO(::UnityEngine::RectTransform* EMDOIDLAFDB, ::UnityEngine::Camera* KONLMDBCDCK, ::UnityEngine::Vector2 GIIEMKDKBGB, ::UnityEngine::Vector2 EFABMKPHAPN)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_ALNLFJPKIPO_OFFSET))(EMDOIDLAFDB, KONLMDBCDCK, GIIEMKDKBGB, EFABMKPHAPN);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_KDOIBCBFBAG_OFFSET))(this);
		}

		::UnityEngine::Vector2 KEHPPNIHBOH(::System::Single NGIAEEBHCOC, ::System::Single EHEGJCCCJCA)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_KEHPPNIHBOH_OFFSET))(this, NGIAEEBHCOC, EHEGJCCCJCA);
		}

		::System::Boolean GHNAIJKPLKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_GHNAIJKPLKK_OFFSET))(this);
		}
	};
}
