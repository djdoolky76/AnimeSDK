#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }

#define PDMELGNDNPB___C_KJIMAGGPDCB_OFFSET UNITYSDK_OFFSET(0x17316340)
#define PDMELGNDNPB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173162F0)
#define PDMELGNDNPB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17316330)

inline static constexpr unsigned int PDMELGNDNPB___c_TypeDefinitionIndex = 54782;

class PDMELGNDNPB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PDMELGNDNPB___c_TypeDefinitionIndex)->GetStaticField(0x39DB0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(PDMELGNDNPB___c_TypeDefinitionIndex)->GetStaticField(0x39DB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDMELGNDNPB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMELGNDNPB___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* KJIMAGGPDCB()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMELGNDNPB___C_KJIMAGGPDCB_OFFSET))(this);
	}
};
