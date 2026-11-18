#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define BBLEFJPJLHJ___C_MNLIDFBJEDC_OFFSET UNITYSDK_OFFSET(0x11BE70C0)
#define BBLEFJPJLHJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BE7070)
#define BBLEFJPJLHJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE70B0)

inline static constexpr unsigned int BBLEFJPJLHJ___c_TypeDefinitionIndex = 92748;

class BBLEFJPJLHJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BBLEFJPJLHJ___c_TypeDefinitionIndex)->GetStaticField(0x40030);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__6_6()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(BBLEFJPJLHJ___c_TypeDefinitionIndex)->GetStaticField(0x40038);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBLEFJPJLHJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLEFJPJLHJ___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath MNLIDFBJEDC()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLEFJPJLHJ___C_MNLIDFBJEDC_OFFSET))(this);
	}
};
