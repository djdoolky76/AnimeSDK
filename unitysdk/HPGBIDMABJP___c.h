#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
class HGAJKHIMKJP;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define HPGBIDMABJP___C_BBOBECFINFM_OFFSET UNITYSDK_OFFSET(0x1819B9A0)
#define HPGBIDMABJP___C_BFIGBAOEGAC_OFFSET UNITYSDK_OFFSET(0x1819B9B0)
#define HPGBIDMABJP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1819B950)
#define HPGBIDMABJP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1819B990)

inline static constexpr unsigned int HPGBIDMABJP___c_TypeDefinitionIndex = 48815;

class HPGBIDMABJP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HPGBIDMABJP___c_TypeDefinitionIndex)->GetStaticField(0x4BB20);
	}
	static ::System::Converter_2<::System::UInt32, ::System::Int32>** StaticGet___9__159_0()
	{
		return (::System::Converter_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HPGBIDMABJP___c_TypeDefinitionIndex)->GetStaticField(0x4BB28);
	}
	static ::System::Converter_2<::BPHGNMNLLHF*, ::HGAJKHIMKJP*>** StaticGet___9__168_0()
	{
		return (::System::Converter_2<::BPHGNMNLLHF*, ::HGAJKHIMKJP*>**)Il2CppClass::FromTypeDefinitionIndex(HPGBIDMABJP___c_TypeDefinitionIndex)->GetStaticField(0x4BB30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPGBIDMABJP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGBIDMABJP___C__CTOR_OFFSET))(this);
	}

	::HGAJKHIMKJP* BBOBECFINFM(::BPHGNMNLLHF* HAAEBCOBKFF)
	{
		return ((::HGAJKHIMKJP*(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + HPGBIDMABJP___C_BBOBECFINFM_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 BFIGBAOEGAC(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPGBIDMABJP___C_BFIGBAOEGAC_OFFSET))(this, HAAEBCOBKFF);
	}
};
