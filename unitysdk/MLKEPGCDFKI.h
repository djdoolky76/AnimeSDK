#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MLKEPGCDFKI__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A1DBA0)

inline static constexpr unsigned int MLKEPGCDFKI_TypeDefinitionIndex = 74294;

class MLKEPGCDFKI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CNCGBEAEHHL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MLKEPGCDFKI_TypeDefinitionIndex)->GetStaticField(0x4D710);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLKEPGCDFKI__CCTOR_OFFSET))();
	}
};
