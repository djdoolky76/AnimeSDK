#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EBPKIAGDKPA;
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GCGLPOLGFPI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x18130E00)
#define GCGLPOLGFPI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18130DB0)
#define GCGLPOLGFPI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18130DF0)

inline static constexpr unsigned int GCGLPOLGFPI___c_TypeDefinitionIndex = 65554;

class GCGLPOLGFPI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GCGLPOLGFPI___c_TypeDefinitionIndex)->GetStaticField(0x377F0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>*>*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(GCGLPOLGFPI___c_TypeDefinitionIndex)->GetStaticField(0x377F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCGLPOLGFPI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGLPOLGFPI___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>*>* LPCHADDECLC()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGLPOLGFPI___C_LPCHADDECLC_OFFSET))(this);
	}
};
