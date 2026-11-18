#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JMNDGEPOFPB__CCTOR_OFFSET UNITYSDK_OFFSET(0x152AFB50)

inline static constexpr unsigned int JMNDGEPOFPB_TypeDefinitionIndex = 47205;

class JMNDGEPOFPB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BHALAPPMPPB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JMNDGEPOFPB_TypeDefinitionIndex)->GetStaticField(0x4E640);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMNDGEPOFPB__CCTOR_OFFSET))();
	}
};
