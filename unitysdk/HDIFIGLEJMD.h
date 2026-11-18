#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HDIFIGLEJMD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1100B820)

inline static constexpr unsigned int HDIFIGLEJMD_TypeDefinitionIndex = 72914;

class HDIFIGLEJMD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MKGFNJJIAFM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HDIFIGLEJMD_TypeDefinitionIndex)->GetStaticField(0x508B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDIFIGLEJMD__CCTOR_OFFSET))();
	}
};
