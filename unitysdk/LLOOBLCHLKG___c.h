#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLPHAEAKLMP;

#define LLOOBLCHLKG___C_HLJPEHOCPJM_OFFSET UNITYSDK_OFFSET(0x12596AB0)
#define LLOOBLCHLKG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12596A60)
#define LLOOBLCHLKG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12596AA0)

inline static constexpr unsigned int LLOOBLCHLKG___c_TypeDefinitionIndex = 83937;

class LLOOBLCHLKG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LLOOBLCHLKG___c_TypeDefinitionIndex)->GetStaticField(0x417C0);
	}
	static ::System::Object** StaticGet___9__88_0()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LLOOBLCHLKG___c_TypeDefinitionIndex)->GetStaticField(0x417C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLOOBLCHLKG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLOOBLCHLKG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HLJPEHOCPJM(::LLPHAEAKLMP* EMIKCAHJLGB)
	{
		return ((::System::Int32(*)(::PVOID, ::LLPHAEAKLMP*))((::PBYTE)hIl2Cpp + LLOOBLCHLKG___C_HLJPEHOCPJM_OFFSET))(this, EMIKCAHJLGB);
	}
};
