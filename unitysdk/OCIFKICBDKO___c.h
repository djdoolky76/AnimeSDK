#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }

#define OCIFKICBDKO___C_FEOBHMKLLEP_OFFSET UNITYSDK_OFFSET(0x13A4A970)
#define OCIFKICBDKO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A4A920)
#define OCIFKICBDKO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4A960)

inline static constexpr unsigned int OCIFKICBDKO___c_TypeDefinitionIndex = 47834;

class OCIFKICBDKO___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::Int32, ::System::UInt32>** StaticGet___9__5_0()
	{
		return (::System::Converter_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(OCIFKICBDKO___c_TypeDefinitionIndex)->GetStaticField(0x4B190);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OCIFKICBDKO___c_TypeDefinitionIndex)->GetStaticField(0x4B198);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCIFKICBDKO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIFKICBDKO___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 FEOBHMKLLEP(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCIFKICBDKO___C_FEOBHMKLLEP_OFFSET))(this, HAAEBCOBKFF);
	}
};
