#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BCFKBFFLFGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0A3710)

inline static constexpr unsigned int BCFKBFFLFGH_TypeDefinitionIndex = 29027;

class BCFKBFFLFGH : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* ICIGKNGAJIP; // 0x10
	::Il2CppArray<::System::Int32>* BCJKKHOHAPA; // 0x18
	::Il2CppArray<::BCFKBFFLFGH*>* JJKEAIEDLHG; // 0x20
	::System::Single JGNCDFNAIMI; // 0x28
	::System::Single FHMJKMGICCK; // 0x2C
	::System::Boolean NEEKHOIPDIC; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 BMILAKIOPOH; // 0x34
	::System::Int32 ABMMJGJEHHO; // 0x38
	::System::Int32 JJFMGPHAGKB; // 0x3C
	::System::Int32 MFLCCPAHBKN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFKBFFLFGH__CTOR_OFFSET))(this);
	}
};
