#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNCOIOPBFKI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1A47F870)
#define JNCOIOPBFKI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A47F820)
#define JNCOIOPBFKI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47F860)

inline static constexpr unsigned int JNCOIOPBFKI___c_TypeDefinitionIndex = 71991;

class JNCOIOPBFKI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JNCOIOPBFKI___c_TypeDefinitionIndex)->GetStaticField(0x444A0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(JNCOIOPBFKI___c_TypeDefinitionIndex)->GetStaticField(0x444A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNCOIOPBFKI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCOIOPBFKI___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* LPCHADDECLC()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCOIOPBFKI___C_LPCHADDECLC_OFFSET))(this);
	}
};
