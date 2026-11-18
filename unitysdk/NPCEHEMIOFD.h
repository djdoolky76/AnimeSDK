#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCEHEMIOFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FB5470)

inline static constexpr unsigned int NPCEHEMIOFD_TypeDefinitionIndex = 43647;

class NPCEHEMIOFD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LKPEGIDJNKP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPCEHEMIOFD_TypeDefinitionIndex)->GetStaticField(0x4EEE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCEHEMIOFD__CCTOR_OFFSET))();
	}
};
