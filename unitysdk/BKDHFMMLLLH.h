#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BKDHFMMLLLH__CCTOR_OFFSET UNITYSDK_OFFSET(0x115F43D0)

inline static constexpr unsigned int BKDHFMMLLLH_TypeDefinitionIndex = 45686;

class BKDHFMMLLLH : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_LNJGNECJPKF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BKDHFMMLLLH_TypeDefinitionIndex)->GetStaticField(0x13290);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKDHFMMLLLH__CCTOR_OFFSET))();
	}
};
