#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F7026CC0C8DB127A.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define BBDC09ADB44AB217_A36CAD33AF7BBE16_1_OFFSET UNITYSDK_OFFSET(0x400AB60)
#define BBDC09ADB44AB217_A36CAD33AF7BBE16_OFFSET UNITYSDK_OFFSET(0x400A9C0)

inline static constexpr unsigned int BBDC09ADB44AB217_TypeDefinitionIndex = 14561;

class BBDC09ADB44AB217 : public ::System::Object
{
public:
	static ::F7026CC0C8DB127A* StaticGet_E19CAAA81CB0B521()
	{
		return (::F7026CC0C8DB127A*)Il2CppClass::FromTypeDefinitionIndex(BBDC09ADB44AB217_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::String* A36CAD33AF7BBE16(::System::Type* F13AE34CF0DCFAF9)
	{
		return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + BBDC09ADB44AB217_A36CAD33AF7BBE16_OFFSET))(F13AE34CF0DCFAF9);
	}

	static ::System::String* A36CAD33AF7BBE16_1(::System::String* E30AD3D7AFF54D84)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BBDC09ADB44AB217_A36CAD33AF7BBE16_1_OFFSET))(E30AD3D7AFF54D84);
	}
};
