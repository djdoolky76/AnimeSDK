#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PBEIGHBPNDN__CCTOR_OFFSET UNITYSDK_OFFSET(0x172F1530)

inline static constexpr unsigned int PBEIGHBPNDN_TypeDefinitionIndex = 79899;

class PBEIGHBPNDN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IFMHOMMPBGG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PBEIGHBPNDN_TypeDefinitionIndex)->GetStaticField(0x4FE10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBEIGHBPNDN__CCTOR_OFFSET))();
	}
};
