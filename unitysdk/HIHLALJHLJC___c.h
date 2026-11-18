#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }

#define HIHLALJHLJC___C_MEMFHNGDGIN_OFFSET UNITYSDK_OFFSET(0x17E4D180)
#define HIHLALJHLJC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E4D130)
#define HIHLALJHLJC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4D170)

inline static constexpr unsigned int HIHLALJHLJC___c_TypeDefinitionIndex = 87562;

class HIHLALJHLJC___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(HIHLALJHLJC___c_TypeDefinitionIndex)->GetStaticField(0x46490);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HIHLALJHLJC___c_TypeDefinitionIndex)->GetStaticField(0x46498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIHLALJHLJC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHLALJHLJC___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* MEMFHNGDGIN()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHLALJHLJC___C_MEMFHNGDGIN_OFFSET))(this);
	}
};
