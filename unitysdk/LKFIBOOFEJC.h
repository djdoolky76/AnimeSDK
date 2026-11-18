#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHKMHJOHPPH_MJMAKIAGLFD;

#define LKFIBOOFEJC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16C5F5B0)
#define LKFIBOOFEJC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5F570)

inline static constexpr unsigned int LKFIBOOFEJC_TypeDefinitionIndex = 67913;

class LKFIBOOFEJC : public ::System::Object
{
public:
	// static const ::System::Int64 DFIKFIDMCDI = 0x10000; // 0x0
	::GHKMHJOHPPH_MJMAKIAGLFD* PLBEAIIJADM; // 0x10
	::Il2CppArray<::System::Byte>* PMAMMGFJAJL; // 0x18
	::System::Int64 ALLDMBDDNIG; // 0x20
	::System::Boolean MKKEMIOMCHL; // 0x28
	::System::Byte _padding0[0x7];
	::System::Int64 ILAGGECBKBO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFIBOOFEJC__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFIBOOFEJC_NPOLNFDBOOD_OFFSET))(this);
	}
};
