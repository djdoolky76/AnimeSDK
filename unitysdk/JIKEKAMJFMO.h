#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define JIKEKAMJFMO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A7F700)
#define JIKEKAMJFMO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A7F670)
#define JIKEKAMJFMO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A7F900)
#define JIKEKAMJFMO__CTOR_OFFSET UNITYSDK_OFFSET(0x14A7F860)

inline static constexpr unsigned int JIKEKAMJFMO_TypeDefinitionIndex = 40672;

class JIKEKAMJFMO : public ::MHMFINLCNFN
{
public:
	// static const ::System::String* LKOLDCJCOCA; // 0x0
	::KCMIFNGABDC_1<::System::Boolean>* JPJHAJKJOHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKEKAMJFMO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKEKAMJFMO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JIKEKAMJFMO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKEKAMJFMO_GDEOPIBNOIN_OFFSET))(this);
	}
};
