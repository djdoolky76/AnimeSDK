#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IDGLBNDPCLD_IDIPHCOBFCA_OFFSET UNITYSDK_OFFSET(0x15BF98B0)
#define IDGLBNDPCLD_KDEJHCKJFKF_OFFSET UNITYSDK_OFFSET(0x15BF9680)
#define IDGLBNDPCLD_NDBGIBBPKEM_OFFSET UNITYSDK_OFFSET(0x15BF9710)
#define IDGLBNDPCLD_NEJJIHLDJGK_OFFSET UNITYSDK_OFFSET(0x15BF9800)
#define IDGLBNDPCLD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BF9620)

inline static constexpr unsigned int IDGLBNDPCLD_TypeDefinitionIndex = 66509;

struct alignas(4) IDGLBNDPCLD
{
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_PINBEFAEIDA()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(IDGLBNDPCLD_TypeDefinitionIndex)->GetStaticField(0x32340);
	}
	static ::System::UInt32* StaticGet_GIILJFFGLGK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(IDGLBNDPCLD_TypeDefinitionIndex)->GetStaticField(0xAC30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDGLBNDPCLD__CCTOR_OFFSET))();
	}

	static ::System::UInt32 KDEJHCKJFKF()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + IDGLBNDPCLD_KDEJHCKJFKF_OFFSET))();
	}

	static ::System::Void NDBGIBBPKEM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDGLBNDPCLD_NDBGIBBPKEM_OFFSET))();
	}

	static ::System::Boolean NEJJIHLDJGK(::System::UInt32 GDEHNMNMKJN)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IDGLBNDPCLD_NEJJIHLDJGK_OFFSET))(GDEHNMNMKJN);
	}

	static ::System::Boolean IDIPHCOBFCA(::System::UInt32 GDEHNMNMKJN)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IDGLBNDPCLD_IDIPHCOBFCA_OFFSET))(GDEHNMNMKJN);
	}
};
