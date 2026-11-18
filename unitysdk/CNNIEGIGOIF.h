#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CNNIEGIGOIF__CCTOR_OFFSET UNITYSDK_OFFSET(0x132703B0)

inline static constexpr unsigned int CNNIEGIGOIF_TypeDefinitionIndex = 71309;

class CNNIEGIGOIF : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_DMKBPKFHFAM()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CNNIEGIGOIF_TypeDefinitionIndex)->GetStaticField(0x11260);
	}
	// static const ::System::String* BIBOAABKOFI; // 0x0
	// static const ::System::Int32 EIOBGEBIFNF = 0xA; // 0x0
	// static const ::System::Int32 IDABFBFALMP = 0xA; // 0x0
	// static const ::System::Int32 PBEFAECJDHK = 0x5; // 0x0
	// static const ::System::Int32 EALJCFIKCLK = 0xA; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNNIEGIGOIF__CCTOR_OFFSET))();
	}
};
