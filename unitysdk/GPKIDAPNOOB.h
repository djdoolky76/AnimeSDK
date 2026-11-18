#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JAANLMNKDAF;
class NKBGLDFAMOJ;

#define GPKIDAPNOOB_GOKKLBCCHBP_OFFSET UNITYSDK_OFFSET(0x17ADD580)
#define GPKIDAPNOOB__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADD570)

inline static constexpr unsigned int GPKIDAPNOOB_TypeDefinitionIndex = 47521;

class GPKIDAPNOOB : public ::System::Object
{
public:
	::JAANLMNKDAF* FAFJHMHFMAN; // 0x10
	::System::Boolean GEIFPDBINNL; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 MGMDJCCEAIB; // 0x1C
	::System::UInt32 GJOCGANNFDP; // 0x20
	::System::UInt32 PMCNDKMMFDG; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPKIDAPNOOB__CTOR_OFFSET))(this);
	}

	::System::Void GOKKLBCCHBP(::NKBGLDFAMOJ* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::NKBGLDFAMOJ*))((::PBYTE)hIl2Cpp + GPKIDAPNOOB_GOKKLBCCHBP_OFFSET))(this, LJBPECKCCEA);
	}
};
