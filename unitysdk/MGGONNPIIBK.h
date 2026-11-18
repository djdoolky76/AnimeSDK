#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define MGGONNPIIBK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x156A8CC0)
#define MGGONNPIIBK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x156A8A00)
#define MGGONNPIIBK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x156A9320)
#define MGGONNPIIBK__CTOR_OFFSET UNITYSDK_OFFSET(0x156A9120)

inline static constexpr unsigned int MGGONNPIIBK_TypeDefinitionIndex = 91040;

class MGGONNPIIBK : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* DGEMGGAAPFF; // 0x20
	::KCMIFNGABDC_1<::System::String*>* HNINACKMAFC; // 0x28
	::KCMIFNGABDC_1<::System::String*>* AFFNAHDCFJE; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* JFMBDPIBJLN; // 0x38
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x40
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGONNPIIBK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGONNPIIBK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MGGONNPIIBK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGONNPIIBK_GDEOPIBNOIN_OFFSET))(this);
	}
};
