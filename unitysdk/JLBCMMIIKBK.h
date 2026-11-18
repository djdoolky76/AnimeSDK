#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JLBCMMIIKBK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13862E00)

inline static constexpr unsigned int JLBCMMIIKBK_TypeDefinitionIndex = 54615;

class JLBCMMIIKBK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HAIPFADBPMC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JLBCMMIIKBK_TypeDefinitionIndex)->GetStaticField(0x3E3A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBCMMIIKBK__CCTOR_OFFSET))();
	}
};
