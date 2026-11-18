#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LDFAPHCGFOA_AEBNDMAPNIK_OFFSET UNITYSDK_OFFSET(0x15242A50)
#define LDFAPHCGFOA_PJOCBGKNGDP_OFFSET UNITYSDK_OFFSET(0x15242BA0)

inline static constexpr unsigned int LDFAPHCGFOA_TypeDefinitionIndex = 92754;

class LDFAPHCGFOA : public ::System::Object
{
public:
	static ::System::String* AEBNDMAPNIK(::System::Int32 EJCHIKICJGJ, ::Il2CppArray<::System::Object*>* KOIBHLHLMFC)
	{
		return ((::System::String*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LDFAPHCGFOA_AEBNDMAPNIK_OFFSET))(EJCHIKICJGJ, KOIBHLHLMFC);
	}

	static ::System::String* PJOCBGKNGDP(::System::Int32 EJCHIKICJGJ, ::Il2CppArray<::System::Object*>* KOIBHLHLMFC)
	{
		return ((::System::String*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LDFAPHCGFOA_PJOCBGKNGDP_OFFSET))(EJCHIKICJGJ, KOIBHLHLMFC);
	}
};
