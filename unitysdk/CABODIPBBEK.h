#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
namespace System { class Action; }
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CABODIPBBEK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x169382A0)
#define CABODIPBBEK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16937C30)
#define CABODIPBBEK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16938E60)
#define CABODIPBBEK_HECEOFNCALM_OFFSET UNITYSDK_OFFSET(0x169388B0)
#define CABODIPBBEK_HLMBPFDDLJO_OFFSET UNITYSDK_OFFSET(0x16938DE0)
#define CABODIPBBEK_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x16938EF0)
#define CABODIPBBEK_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x16937960)
#define CABODIPBBEK__CTOR_OFFSET UNITYSDK_OFFSET(0x16938980)

inline static constexpr unsigned int CABODIPBBEK_TypeDefinitionIndex = 91310;

class CABODIPBBEK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* JINNOPANEFP; // 0x18
	::KCMIFNGABDC_1<::System::Single>* OBCKMKOPAJD; // 0x20
	::KCMIFNGABDC_1<::System::Single>* DCJCPJMOMDI; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* EDGAAHNGNCB; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* LKPBACBAHNH; // 0x38
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x40
	::KCMIFNGABDC_1<::System::Boolean>* MKPJHCKPMHF; // 0x48
	::KCMIFNGABDC_1<::System::Single>* EPKJKHKFLGK; // 0x50
	::KCMIFNGABDC_1<::System::Single>* OFLJKKKKLFK; // 0x58
	::KCMIFNGABDC_1<::System::Int32>* NNNPLPPOCCA; // 0x60
	::KCMIFNGABDC_1<::System::Int32>* NGPNIBFNPLK; // 0x68
	::KCMIFNGABDC_1<::System::Boolean>* DJKOLPBALNJ; // 0x70
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OOPLCPKCDJA; // 0x78
	::KCMIFNGABDC_1<::System::String*>* AMDPEEPELAP; // 0x80
	::KCMIFNGABDC_1<::System::Single>* MPMFFIBLOAC; // 0x88
	::CPABOPKIGAL* MMFNFINOFPN; // 0x90
	::KCMIFNGABDC_1<::System::Single>* FKGDPAOIINO; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABODIPBBEK__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + CABODIPBBEK_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABODIPBBEK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CABODIPBBEK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Action* HECEOFNCALM(::LGCNEDCMPKM& BKBGPKNGNMF, ::System::String* PMMOBMKAHPI)
	{
		return ((::System::Action*(*)(::PVOID, ::LGCNEDCMPKM&, ::System::String*))((::PBYTE)hIl2Cpp + CABODIPBBEK_HECEOFNCALM_OFFSET))(this, BKBGPKNGNMF, PMMOBMKAHPI);
	}

	static ::System::Void HLMBPFDDLJO(::Foundation::ViewObject::ViewObjectHandle GDMNDDJHBDJ, ::System::String* PMMOBMKAHPI)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + CABODIPBBEK_HLMBPFDDLJO_OFFSET))(GDMNDDJHBDJ, PMMOBMKAHPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABODIPBBEK_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + CABODIPBBEK_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
