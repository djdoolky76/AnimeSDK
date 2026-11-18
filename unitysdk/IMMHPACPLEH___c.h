#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }

#define IMMHPACPLEH___C_MEMFHNGDGIN_OFFSET UNITYSDK_OFFSET(0x1ACC0DF0)
#define IMMHPACPLEH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACC0DA0)
#define IMMHPACPLEH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC0DE0)

inline static constexpr unsigned int IMMHPACPLEH___c_TypeDefinitionIndex = 39744;

class IMMHPACPLEH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IMMHPACPLEH___c_TypeDefinitionIndex)->GetStaticField(0x32530);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(IMMHPACPLEH___c_TypeDefinitionIndex)->GetStaticField(0x32538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMMHPACPLEH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMHPACPLEH___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* MEMFHNGDGIN()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMHPACPLEH___C_MEMFHNGDGIN_OFFSET))(this);
	}
};
