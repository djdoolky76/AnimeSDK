#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/F669CFE5643AA19D.h"

class BAD914528AA19877;
class F7499DF1533C7100;
namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }

#define F40F9AE0653A40FF_AC5C9E62FFDE6CC6_OFFSET UNITYSDK_OFFSET(0x38BDA70)
#define F40F9AE0653A40FF__CTOR_OFFSET UNITYSDK_OFFSET(0x38BE570)

inline static constexpr unsigned int F40F9AE0653A40FF_TypeDefinitionIndex = 20292;

class F40F9AE0653A40FF : public ::System::Object
{
public:
	::System::Int32 E0EBDFDB71912972; // 0x10
	::System::Boolean E3EF643275A7EDE2; // 0x14
	::System::Boolean E1457244EDA51118; // 0x15
	::System::Byte _padding0[0x2];
	::Il2CppArray<::System::Boolean>* FF4FCBE3A9A55275; // 0x18
	::Il2CppArray<::System::Boolean>* EC4B36E4F024F16C; // 0x20
	::Il2CppArray<::System::Type*>* B44AAE1260AF1160; // 0x28
	::BAD914528AA19877* EA8FABEC6D125B33; // 0x30
	::System::Reflection::ConstructorInfo* BE6B6BEF6E8B35AA; // 0x38
	::System::Type* A45AE7F564EA0518; // 0x40
	::System::Boolean EF2E614912F70F20; // 0x48
	::System::Boolean F3BF2DF5095D4807; // 0x49
	::System::Boolean BAF9994592819B9D; // 0x4A

	::System::Void _ctor(::BAD914528AA19877* EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::BAD914528AA19877*))((::PBYTE)hIl2Cpp + F40F9AE0653A40FF__CTOR_OFFSET))(this, EA8FABEC6D125B33);
	}

	::System::Void AC5C9E62FFDE6CC6(::F7499DF1533C7100* F3E7993BB0986694, ::F669CFE5643AA19D& BB7BEB2027376C69, ::System::Boolean AF99588DF4766B4E)
	{
		return ((::System::Void(*)(::PVOID, ::F7499DF1533C7100*, ::F669CFE5643AA19D&, ::System::Boolean))((::PBYTE)hIl2Cpp + F40F9AE0653A40FF_AC5C9E62FFDE6CC6_OFFSET))(this, F3E7993BB0986694, BB7BEB2027376C69, AF99588DF4766B4E);
	}
};
