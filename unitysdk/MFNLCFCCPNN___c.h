#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIEDOGIBIMC;
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFNLCFCCPNN___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x18537030)
#define MFNLCFCCPNN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18536FE0)
#define MFNLCFCCPNN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18537020)

inline static constexpr unsigned int MFNLCFCCPNN___c_TypeDefinitionIndex = 92488;

class MFNLCFCCPNN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MFNLCFCCPNN___c_TypeDefinitionIndex)->GetStaticField(0x4BFB0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::GIEDOGIBIMC*>*>*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::GIEDOGIBIMC*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MFNLCFCCPNN___c_TypeDefinitionIndex)->GetStaticField(0x4BFB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFNLCFCCPNN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNLCFCCPNN___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::GIEDOGIBIMC*>*>* LPCHADDECLC()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::GIEDOGIBIMC*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNLCFCCPNN___C_LPCHADDECLC_OFFSET))(this);
	}
};
