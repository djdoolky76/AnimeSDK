#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define BJGENLEOELM___C_PELNHPMMLGA_OFFSET UNITYSDK_OFFSET(0x14ECF740)
#define BJGENLEOELM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14ECF6F0)
#define BJGENLEOELM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14ECF730)

inline static constexpr unsigned int BJGENLEOELM___c_TypeDefinitionIndex = 68079;

class BJGENLEOELM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BJGENLEOELM___c_TypeDefinitionIndex)->GetStaticField(0x30C30);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__33_19()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BJGENLEOELM___c_TypeDefinitionIndex)->GetStaticField(0x30C38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJGENLEOELM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGENLEOELM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean PELNHPMMLGA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGENLEOELM___C_PELNHPMMLGA_OFFSET))(this);
	}
};
