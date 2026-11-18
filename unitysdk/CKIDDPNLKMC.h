#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CKIDDPNLKMC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1B7BF0)

inline static constexpr unsigned int CKIDDPNLKMC_TypeDefinitionIndex = 71407;

class CKIDDPNLKMC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KDBMGBCGKKM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CKIDDPNLKMC_TypeDefinitionIndex)->GetStaticField(0x3D690);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKIDDPNLKMC__CCTOR_OFFSET))();
	}
};
