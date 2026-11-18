#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFGOBPJPGBE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IBENDELLLAO;
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGeneralPopNumHintWidgetController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define NNHCKAIIBKD_ANNCLDEHAJN_OFFSET UNITYSDK_OFFSET(0x172A8500)
#define NNHCKAIIBKD_BKOELODPAGH_OFFSET UNITYSDK_OFFSET(0x172A6B40)
#define NNHCKAIIBKD_DEGAODLIHOF_OFFSET UNITYSDK_OFFSET(0x172A7D40)
#define NNHCKAIIBKD_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x172A83A0)
#define NNHCKAIIBKD_HFPALAEFDOE_OFFSET UNITYSDK_OFFSET(0x172A7780)
#define NNHCKAIIBKD_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x172A8330)
#define NNHCKAIIBKD_PGJMCFNKKEH_OFFSET UNITYSDK_OFFSET(0x172A8410)
#define NNHCKAIIBKD__CTOR_OFFSET UNITYSDK_OFFSET(0x172A6B20)

inline static constexpr unsigned int NNHCKAIIBKD_TypeDefinitionIndex = 92181;

class NNHCKAIIBKD : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* LOFCNOLBNHM; // 0x10
	::MoleMole::UIGeneralNewHintWidgetController* HFKAOMFONJE; // 0x18
	::MoleMole::UIGeneralPopUpHintWidgetController* MEEECOAJBCG; // 0x20
	::MoleMole::UIGeneralPopNumHintWidgetController* LKIGBFFHCHB; // 0x28
	::UnityEngine::Transform* ACDOKEGBJAO; // 0x30
	::System::Boolean IFDBIPJPJDG; // 0x38
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 HBPAINCDEIH; // 0x3C

	::System::Void _ctor(::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NNHCKAIIBKD__CTOR_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Void BKOELODPAGH(::BFGOBPJPGBE PHNLHFCHPGC)
	{
		return ((::System::Void(*)(::PVOID, ::BFGOBPJPGBE))((::PBYTE)hIl2Cpp + NNHCKAIIBKD_BKOELODPAGH_OFFSET))(this, PHNLHFCHPGC);
	}

	::System::Void HFPALAEFDOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHCKAIIBKD_HFPALAEFDOE_OFFSET))(this);
	}

	::System::Void DEGAODLIHOF(::UnityEngine::Vector3 IJPANKCOLCP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNHCKAIIBKD_DEGAODLIHOF_OFFSET))(this, IJPANKCOLCP);
	}

	::System::Void LJAPJFDPIKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHCKAIIBKD_LJAPJFDPIKF_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHCKAIIBKD_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void PGJMCFNKKEH(::IBENDELLLAO* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + NNHCKAIIBKD_PGJMCFNKKEH_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void ANNCLDEHAJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHCKAIIBKD_ANNCLDEHAJN_OFFSET))(this);
	}
};
