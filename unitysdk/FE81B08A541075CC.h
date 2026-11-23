#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E67BC3C6BB775B97;
namespace ABC::Splines::CatmullRom { class Spline; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FE81B08A541075CC__CTOR_OFFSET UNITYSDK_OFFSET(0x17BFAA0)

inline static constexpr unsigned int FE81B08A541075CC_TypeDefinitionIndex = 913;

class FE81B08A541075CC : public ::System::Object
{
public:
	::System::UInt32 EDB42C4C835AAD90; // 0x10
	::System::UInt32 B289D9A1F114D305; // 0x14
	::System::UInt32 E46F3697AF1234FC; // 0x18
	::System::Byte _padding0[0x4];
	::System::UInt64 B70991CAB8C4B95E; // 0x20
	::ABC::Splines::CatmullRom::Spline* ED5CE2E00999B89B; // 0x28
	::System::Collections::Generic::List_1<::E67BC3C6BB775B97*>* E9AE6C2BD86284FC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE81B08A541075CC__CTOR_OFFSET))(this);
	}
};
