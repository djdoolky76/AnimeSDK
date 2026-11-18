#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define HAAGMMMCPDB___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x15B38330)
#define HAAGMMMCPDB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B382E0)
#define HAAGMMMCPDB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B38320)

inline static constexpr unsigned int HAAGMMMCPDB___c_TypeDefinitionIndex = 63338;

class HAAGMMMCPDB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HAAGMMMCPDB___c_TypeDefinitionIndex)->GetStaticField(0x37AA0);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(HAAGMMMCPDB___c_TypeDefinitionIndex)->GetStaticField(0x37AA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAAGMMMCPDB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAAGMMMCPDB___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + HAAGMMMCPDB___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
