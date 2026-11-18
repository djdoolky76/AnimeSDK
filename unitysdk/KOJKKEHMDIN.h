#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KOJKKEHMDIN_LFFAKJJBOLJ_OFFSET UNITYSDK_OFFSET(0x17673280)
#define KOJKKEHMDIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x17673260)

inline static constexpr unsigned int KOJKKEHMDIN_TypeDefinitionIndex = 81484;

class KOJKKEHMDIN : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_DCHFDAOOILE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KOJKKEHMDIN_TypeDefinitionIndex)->GetStaticField(0x12120);
	}
	static ::System::Int32* StaticGet_EEIELFGIGKC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(KOJKKEHMDIN_TypeDefinitionIndex)->GetStaticField(0x12124);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOJKKEHMDIN__CCTOR_OFFSET))();
	}

	static ::System::Boolean LFFAKJJBOLJ(::System::Int32 PKLEACGKDBH)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + KOJKKEHMDIN_LFFAKJJBOLJ_OFFSET))(PKLEACGKDBH);
	}
};
