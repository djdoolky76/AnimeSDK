#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/E2DE926113CB084F.h"

class A78907ADC941398E;
class BB47EAF881108FFD;

#define A1587803B4B97369_B891286B3458104D_OFFSET UNITYSDK_OFFSET(0x2768570)
#define A1587803B4B97369_F151250C58A9F9D4_11_OFFSET UNITYSDK_OFFSET(0x2768500)
#define A1587803B4B97369__CCTOR_OFFSET UNITYSDK_OFFSET(0x27685E0)
#define A1587803B4B97369__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A1587803B4B97369_TypeDefinitionIndex = 21450;

class A1587803B4B97369 : public ::System::Object
{
public:
	static ::A78907ADC941398E** StaticGet_BC313161A1878D79()
	{
		return (::A78907ADC941398E**)Il2CppClass::FromTypeDefinitionIndex(A1587803B4B97369_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void B891286B3458104D(::E2DE926113CB084F F564B9A293C703ED, ::BB47EAF881108FFD* AB87A6963AA1A3EB)
	{
		return ((::System::Void(*)(::E2DE926113CB084F, ::BB47EAF881108FFD*))((::PBYTE)hIl2Cpp + A1587803B4B97369_B891286B3458104D_OFFSET))(F564B9A293C703ED, AB87A6963AA1A3EB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A1587803B4B97369__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1587803B4B97369__CTOR_OFFSET))(this);
	}

	static ::System::Void F151250C58A9F9D4_11(::System::Object* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + A1587803B4B97369_F151250C58A9F9D4_11_OFFSET))(E937D4885DAA1AE8);
	}
};
