#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BCBPFGJABAA__CCTOR_OFFSET UNITYSDK_OFFSET(0x169DF3D0)

inline static constexpr unsigned int BCBPFGJABAA_TypeDefinitionIndex = 52642;

class BCBPFGJABAA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MNGNKEJHACD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BCBPFGJABAA_TypeDefinitionIndex)->GetStaticField(0x4E110);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCBPFGJABAA__CCTOR_OFFSET))();
	}
};
