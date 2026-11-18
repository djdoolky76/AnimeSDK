#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
class JJEAFFDIDAP;

#define JJEAFFDIDAP_BAEKAHCJPHP_DKOHFJJPEAO_OFFSET UNITYSDK_OFFSET(0x14FBE590)
#define JJEAFFDIDAP_BAEKAHCJPHP_JNIDFDFBBOO_OFFSET UNITYSDK_OFFSET(0x14FBE9E0)
#define JJEAFFDIDAP_BAEKAHCJPHP__CTOR_OFFSET UNITYSDK_OFFSET(0x14FBE580)

inline static constexpr unsigned int JJEAFFDIDAP_BAEKAHCJPHP_TypeDefinitionIndex = 72520;

class JJEAFFDIDAP_BAEKAHCJPHP : public ::System::Object
{
public:
	::Il2CppArray<::BPHGNMNLLHF*>* HNDJNLIKPJG; // 0x10
	::JJEAFFDIDAP* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEAFFDIDAP_BAEKAHCJPHP__CTOR_OFFSET))(this);
	}

	::System::Void DKOHFJJPEAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEAFFDIDAP_BAEKAHCJPHP_DKOHFJJPEAO_OFFSET))(this);
	}

	::System::Void JNIDFDFBBOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEAFFDIDAP_BAEKAHCJPHP_JNIDFDFBBOO_OFFSET))(this);
	}
};
