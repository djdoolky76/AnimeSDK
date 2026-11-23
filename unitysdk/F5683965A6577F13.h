#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFC1DD2E8F3C45AF.h"

namespace System { class String; }

#define F5683965A6577F13_A379D575D81B1D38_OFFSET UNITYSDK_OFFSET(0x266F7B0)
#define F5683965A6577F13__CCTOR_OFFSET UNITYSDK_OFFSET(0x266F6A0)
#define F5683965A6577F13__CTOR_OFFSET UNITYSDK_OFFSET(0x266F760)

inline static constexpr unsigned int F5683965A6577F13_TypeDefinitionIndex = 6280;

class F5683965A6577F13 : public ::AFC1DD2E8F3C45AF
{
public:
	static ::System::String** StaticGet_A8F803BA33BDA9A7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(F5683965A6577F13_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5683965A6577F13__CTOR_OFFSET))(this);
	}

	::System::String* A379D575D81B1D38()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F5683965A6577F13_A379D575D81B1D38_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F5683965A6577F13__CCTOR_OFFSET))();
	}
};
