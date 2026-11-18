#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DOAHFCLNMOK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x7FD4850)
#define DOAHFCLNMOK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x7FD44D0)
#define DOAHFCLNMOK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x7FD4FC0)
#define DOAHFCLNMOK__CTOR_OFFSET UNITYSDK_OFFSET(0x7FD4D30)

inline static constexpr unsigned int DOAHFCLNMOK_TypeDefinitionIndex = 44889;

class DOAHFCLNMOK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* ILIFBDJGLKN; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* AMPDDKLLHOI; // 0x30
	::KCMIFNGABDC_1<::System::String*>* LLPKOLMBOLE; // 0x38
	::KCMIFNGABDC_1<::System::String*>* NGABGPBHHPA; // 0x40
	::KCMIFNGABDC_1<::System::Single>* PBFHFBGJNCE; // 0x48
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* CNMALHEPEMO; // 0x50
	::KCMIFNGABDC_1<::System::Int32>* DEAGLKKALPD; // 0x58
	::KCMIFNGABDC_1<::System::Single>* NNNJMCBKOLL; // 0x60
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* NIKGOEAGAKM; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAHFCLNMOK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAHFCLNMOK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DOAHFCLNMOK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAHFCLNMOK_GDEOPIBNOIN_OFFSET))(this);
	}
};
