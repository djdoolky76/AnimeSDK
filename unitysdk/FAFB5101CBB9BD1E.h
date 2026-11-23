#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FAFB5101CBB9BD1E_A7BA41BAA13A4D57;
namespace System { class String; }

#define FAFB5101CBB9BD1E_A77708DE91265E43_OFFSET UNITYSDK_OFFSET(0x38B81B0)
#define FAFB5101CBB9BD1E_BD1EA225F8391F62_OFFSET UNITYSDK_OFFSET(0x38B8280)
#define FAFB5101CBB9BD1E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FAFB5101CBB9BD1E_TypeDefinitionIndex = 20304;

class FAFB5101CBB9BD1E : public ::System::Object
{
public:
	static ::FAFB5101CBB9BD1E_A7BA41BAA13A4D57** StaticGet_EFDA3B4856933B0F()
	{
		return (::FAFB5101CBB9BD1E_A7BA41BAA13A4D57**)Il2CppClass::FromTypeDefinitionIndex(FAFB5101CBB9BD1E_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void BD1EA225F8391F62(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FAFB5101CBB9BD1E_BD1EA225F8391F62_OFFSET))(B083BE7841B347C4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFB5101CBB9BD1E__CTOR_OFFSET))(this);
	}

	static ::System::Void A77708DE91265E43(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FAFB5101CBB9BD1E_A77708DE91265E43_OFFSET))(B083BE7841B347C4);
	}
};
