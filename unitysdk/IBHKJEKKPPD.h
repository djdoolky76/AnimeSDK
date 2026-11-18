#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IBHKJEKKPPD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A90CC0)

inline static constexpr unsigned int IBHKJEKKPPD_TypeDefinitionIndex = 88757;

class IBHKJEKKPPD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HIIMOFIOMDF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IBHKJEKKPPD_TypeDefinitionIndex)->GetStaticField(0x4F630);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBHKJEKKPPD__CCTOR_OFFSET))();
	}
};
