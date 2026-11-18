#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class CPABOPKIGAL;
class GLBEJPBPDEN;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HPKILDNBABE_BIPKIOJCFEH_OFFSET UNITYSDK_OFFSET(0xF832E50)
#define HPKILDNBABE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF832A90)
#define HPKILDNBABE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF8327D0)
#define HPKILDNBABE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF833510)
#define HPKILDNBABE__CTOR_OFFSET UNITYSDK_OFFSET(0xF8332D0)

inline static constexpr unsigned int HPKILDNBABE_TypeDefinitionIndex = 72796;

class HPKILDNBABE : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x20
	::KCMIFNGABDC_1<::System::String*>* KKCJDFEHKIA; // 0x28
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x30
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x40
	::CPABOPKIGAL* MMFNFINOFPN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKILDNBABE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKILDNBABE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HPKILDNBABE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::GLBEJPBPDEN* BIPKIOJCFEH(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::GLBEJPBPDEN*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + HPKILDNBABE_BIPKIOJCFEH_OFFSET))(HPADNAEINPK);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKILDNBABE_GDEOPIBNOIN_OFFSET))(this);
	}
};
