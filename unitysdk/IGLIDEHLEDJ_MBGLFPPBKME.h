#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABGMNCCINDG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class EKHEOJOFLLA;
class IGLIDEHLEDJ;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define IGLIDEHLEDJ_MBGLFPPBKME_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0xF86CB30)
#define IGLIDEHLEDJ_MBGLFPPBKME_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0xF86CE40)
#define IGLIDEHLEDJ_MBGLFPPBKME__CTOR_OFFSET UNITYSDK_OFFSET(0xF86CB20)

inline static constexpr unsigned int IGLIDEHLEDJ_MBGLFPPBKME_TypeDefinitionIndex = 60209;

class IGLIDEHLEDJ_MBGLFPPBKME : public ::System::Object
{
public:
	::ABGMNCCINDG PHHDHIBOCKA; // 0x10
	::HOCDHMEPPEG LEHJGCEIMCF; // 0x38
	::UnityEngine::GameObject* DHMCDBJGPEN; // 0x68
	::IGLIDEHLEDJ* KLHPEBKNIFB; // 0x70
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* DLMJCFBENGB; // 0x78
	::System::Int32 MDKMEMLADPC; // 0x80
	::System::Int32 MHMIBPMIGLG; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLIDEHLEDJ_MBGLFPPBKME__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN(::Foundation::ViewObject::ViewObjectHandle IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + IGLIDEHLEDJ_MBGLFPPBKME_AAHMACBDCPN_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Void LIDNPLMPHAL(::EKHEOJOFLLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + IGLIDEHLEDJ_MBGLFPPBKME_LIDNPLMPHAL_OFFSET))(this, AAOCANGHBDG);
	}
};
