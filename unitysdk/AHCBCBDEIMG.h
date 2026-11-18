#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AHCBCBDEIMG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12655DB0)

inline static constexpr unsigned int AHCBCBDEIMG_TypeDefinitionIndex = 81469;

class AHCBCBDEIMG : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_EPPEMJFGIFI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AHCBCBDEIMG_TypeDefinitionIndex)->GetStaticField(0xA480);
	}
	// static const ::System::Int32 EAKFLFJLAGF = 0x3; // 0x0
	// static const ::System::Int32 ILGMLOBNHAK = 0x6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHCBCBDEIMG__CCTOR_OFFSET))();
	}
};
