#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNELBOCJJOB__CCTOR_OFFSET UNITYSDK_OFFSET(0xE1AB270)

inline static constexpr unsigned int NNELBOCJJOB_TypeDefinitionIndex = 47363;

class NNELBOCJJOB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MKDENKIBBIK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NNELBOCJJOB_TypeDefinitionIndex)->GetStaticField(0x474C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNELBOCJJOB__CCTOR_OFFSET))();
	}
};
