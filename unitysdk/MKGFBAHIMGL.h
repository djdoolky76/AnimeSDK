#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define MKGFBAHIMGL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16C94170)
#define MKGFBAHIMGL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16C93C80)
#define MKGFBAHIMGL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16C94BF0)
#define MKGFBAHIMGL_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x16C94B60)
#define MKGFBAHIMGL_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x16C93B30)
#define MKGFBAHIMGL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C947F0)

inline static constexpr unsigned int MKGFBAHIMGL_TypeDefinitionIndex = 44346;

class MKGFBAHIMGL : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* ILNGPICCDFO; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* MIEFPIJFHKI; // 0x20
	::KCMIFNGABDC_1<::System::Single>* BLHNGHIAAEI; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* GPEBALONPLK; // 0x30
	::KCMIFNGABDC_1<::System::Single>* JIMHIICFOIH; // 0x38
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* NNIIKNMLOGE; // 0x40
	::CPABOPKIGAL* HMNPNEALHEH; // 0x48
	::KCMIFNGABDC_1<::System::Boolean>* FGEJDIKDGLB; // 0x50
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* NHBAOKMDEPA; // 0x58
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x60
	::KCMIFNGABDC_1<::System::Boolean>* GENIPIONCNP; // 0x68
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x70
	::KCMIFNGABDC_1<::System::String*>* GGANBBCNDDI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGFBAHIMGL__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + MKGFBAHIMGL_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGFBAHIMGL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MKGFBAHIMGL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + MKGFBAHIMGL_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGFBAHIMGL_GDEOPIBNOIN_OFFSET))(this);
	}
};
