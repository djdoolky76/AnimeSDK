#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_BDCIINGEKMH.h"
#include "unitysdk/MoleMole/UIPhysicalSizeHandler_OPALJPKBDGK.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIPHYSICALSIZEHANDLER_APPLYLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x14CB5090)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_BMOGOLBNPCF_OFFSET UNITYSDK_OFFSET(0x14CB5CA0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_BPAMAMICDKI_OFFSET UNITYSDK_OFFSET(0x14CB5AA0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x14CB39E0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_DJFLFBMCHLH_OFFSET UNITYSDK_OFFSET(0x14CB5A10)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_DMCIDMFIADP_OFFSET UNITYSDK_OFFSET(0x14CB3FD0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_DPNHHDNJLDA_OFFSET UNITYSDK_OFFSET(0x14CB3B90)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_GETLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x14CB41A0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_INLEAIPJAHP_OFFSET UNITYSDK_OFFSET(0x14CB56A0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x14CB5920)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_KEHPPNIHBOH_OFFSET UNITYSDK_OFFSET(0x14CB55F0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14CB38C0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_LJLHPGBFLGC_OFFSET UNITYSDK_OFFSET(0x14CB5480)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_LKPBHODJPIM_OFFSET UNITYSDK_OFFSET(0x14CB3DD0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_MCJGEECCCPG_OFFSET UNITYSDK_OFFSET(0x14CB59B0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14CB3870)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_PIOOPLAPDPK_OFFSET UNITYSDK_OFFSET(0x14CB5A20)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CB5900)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14CB58B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhysicalSizeHandler_TypeDefinitionIndex = 39421;

	class UIPhysicalSizeHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Single* StaticGet_GEBOLAMCLOF()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalSizeHandler_TypeDefinitionIndex)->GetStaticField(0xE9F0);
		}
		static ::UnityEngine::Vector2* StaticGet_LGJKBKMCDBI()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalSizeHandler_TypeDefinitionIndex)->GetStaticField(0xE9F4);
		}
		::System::Boolean _needConstraintXSize; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single _xSize; // 0x1C
		::System::Boolean _needConstraintYSize; // 0x20
		::System::Byte _padding1[0x3];
		::System::Single _ySize; // 0x24
		::MoleMole::UIPhysicalSizeHandler_OPALJPKBDGK _constraintSizeType; // 0x28
		::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH JFKFALDOBCL; // 0x2C
		::System::Byte _padding2[0x4];
		::UnityEngine::Canvas* LHHCBJMINFM; // 0x88
		::System::Boolean JJJFLPOLELO; // 0x90
		::System::Boolean IANHKOLCODN; // 0x91
		::System::Boolean NHBJNGHHKMC; // 0x92
		::System::Boolean _ADPHDBHIELK_k__BackingField; // 0x93

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH GetLayoutResult(::System::Single EBKDKKMDEMJ)
		{
			return ((::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_GETLAYOUTRESULT_OFFSET))(this, EBKDKKMDEMJ);
		}

		::System::Void ApplyLayoutResult(::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH EKAAIJAKBPM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIPhysicalPosHandler_BDCIINGEKMH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_APPLYLAYOUTRESULT_OFFSET))(this, EKAAIJAKBPM);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_KDOIBCBFBAG_OFFSET))(this);
		}

		::UnityEngine::Vector2 KEHPPNIHBOH(::System::Single NGIAEEBHCOC, ::System::Single EHEGJCCCJCA)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_KEHPPNIHBOH_OFFSET))(this, NGIAEEBHCOC, EHEGJCCCJCA);
		}

		::System::Single DMCIDMFIADP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_DMCIDMFIADP_OFFSET))(this);
		}

		::System::Boolean DPNHHDNJLDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_DPNHHDNJLDA_OFFSET))(this);
		}

		::System::Void MCJGEECCCPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_MCJGEECCCPG_OFFSET))(this);
		}

		::System::Boolean DJFLFBMCHLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_DJFLFBMCHLH_OFFSET))(this);
		}

		::System::Void PIOOPLAPDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_PIOOPLAPDPK_OFFSET))(this);
		}

		::UnityEngine::Canvas* INLEAIPJAHP()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_INLEAIPJAHP_OFFSET))(this);
		}

		::System::Void BPAMAMICDKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_BPAMAMICDKI_OFFSET))(this);
		}

		::System::Void BMOGOLBNPCF(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_BMOGOLBNPCF_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single LJLHPGBFLGC(::System::Single BBEBNGKKMBK, ::System::Single MGJOFMPHEJK, ::System::Int32 EJOIHNMAENJ, ::System::Boolean FOAIBAIJEGC)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_LJLHPGBFLGC_OFFSET))(this, BBEBNGKKMBK, MGJOFMPHEJK, EJOIHNMAENJ, FOAIBAIJEGC);
		}

		::System::Void LKPBHODJPIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_LKPBHODJPIM_OFFSET))(this);
		}
	};
}
