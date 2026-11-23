#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BF2D65A5B38F5A13;
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BF2D65A5B38F5A13_F5628F8349D4A8A6_E3469BAD583474D1_OFFSET UNITYSDK_OFFSET(0x403C2C0)
#define BF2D65A5B38F5A13_F5628F8349D4A8A6_E8EA661750B5B844_OFFSET UNITYSDK_OFFSET(0x403C210)
#define BF2D65A5B38F5A13_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x403C430)
#define BF2D65A5B38F5A13_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BF2D65A5B38F5A13_F5628F8349D4A8A6_TypeDefinitionIndex = 20355;

class BF2D65A5B38F5A13_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::BF2D65A5B38F5A13_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::BF2D65A5B38F5A13_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(BF2D65A5B38F5A13_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet_F343E8F0EA5266E6()
	{
		return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BF2D65A5B38F5A13_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BF2D65A5B38F5A13_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF2D65A5B38F5A13_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean E8EA661750B5B844(::System::Type* BBCFEC7DB309E927)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BF2D65A5B38F5A13_F5628F8349D4A8A6_E8EA661750B5B844_OFFSET))(this, BBCFEC7DB309E927);
	}

	::BF2D65A5B38F5A13* E3469BAD583474D1()
	{
		return ((::BF2D65A5B38F5A13*(*)(::PVOID))((::PBYTE)hIl2Cpp + BF2D65A5B38F5A13_F5628F8349D4A8A6_E3469BAD583474D1_OFFSET))(this);
	}
};
