#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NKPNLAJKKBM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1315D420)

inline static constexpr unsigned int NKPNLAJKKBM_TypeDefinitionIndex = 53685;

class NKPNLAJKKBM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NOMEMPDDHHA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NKPNLAJKKBM_TypeDefinitionIndex)->GetStaticField(0x42560);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKPNLAJKKBM__CCTOR_OFFSET))();
	}
};
