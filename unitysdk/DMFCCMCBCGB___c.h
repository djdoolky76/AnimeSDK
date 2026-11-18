#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define DMFCCMCBCGB___C_AEFBOOEDKPK_OFFSET UNITYSDK_OFFSET(0x148B3BA0)
#define DMFCCMCBCGB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148B3B50)
#define DMFCCMCBCGB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148B3B90)

inline static constexpr unsigned int DMFCCMCBCGB___c_TypeDefinitionIndex = 88964;

class DMFCCMCBCGB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DMFCCMCBCGB___c_TypeDefinitionIndex)->GetStaticField(0x31530);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__8_1()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(DMFCCMCBCGB___c_TypeDefinitionIndex)->GetStaticField(0x31538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMFCCMCBCGB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFCCMCBCGB___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath AEFBOOEDKPK()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFCCMCBCGB___C_AEFBOOEDKPK_OFFSET))(this);
	}
};
