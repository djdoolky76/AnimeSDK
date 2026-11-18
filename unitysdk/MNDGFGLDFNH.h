#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MPJKPJAIOEM;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class KCMIFNGABDC_1;

#define MNDGFGLDFNH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14DF57D0)
#define MNDGFGLDFNH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14DF5690)
#define MNDGFGLDFNH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14DF5B80)
#define MNDGFGLDFNH__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF5A80)

inline static constexpr unsigned int MNDGFGLDFNH_TypeDefinitionIndex = 63759;

class MNDGFGLDFNH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x18
	::MPJKPJAIOEM* FDPMDEJANJH; // 0x20
	::KCMIFNGABDC_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* PAALGICAION; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDGFGLDFNH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDGFGLDFNH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MNDGFGLDFNH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDGFGLDFNH_GDEOPIBNOIN_OFFSET))(this);
	}
};
