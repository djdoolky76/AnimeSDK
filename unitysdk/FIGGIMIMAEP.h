#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;

#define FIGGIMIMAEP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10F6DDC0)
#define FIGGIMIMAEP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10F6DCE0)
#define FIGGIMIMAEP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10F6E220)
#define FIGGIMIMAEP__CTOR_OFFSET UNITYSDK_OFFSET(0x10F6E090)

inline static constexpr unsigned int FIGGIMIMAEP_TypeDefinitionIndex = 65985;

class FIGGIMIMAEP : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* JMBPGMDOIAF; // 0x28
	::MKBBPOFGLOF* KNMBHIBCKBN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGGIMIMAEP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGGIMIMAEP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FIGGIMIMAEP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGGIMIMAEP_GDEOPIBNOIN_OFFSET))(this);
	}
};
