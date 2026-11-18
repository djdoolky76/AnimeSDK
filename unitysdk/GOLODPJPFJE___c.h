#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLCFODKNNLB;
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOLODPJPFJE___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x15B311F0)
#define GOLODPJPFJE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B311A0)
#define GOLODPJPFJE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B311E0)

inline static constexpr unsigned int GOLODPJPFJE___c_TypeDefinitionIndex = 59569;

class GOLODPJPFJE___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::LLCFODKNNLB*>*>*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::LLCFODKNNLB*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(GOLODPJPFJE___c_TypeDefinitionIndex)->GetStaticField(0x40B00);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GOLODPJPFJE___c_TypeDefinitionIndex)->GetStaticField(0x40B08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOLODPJPFJE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLODPJPFJE___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::LLCFODKNNLB*>*>* LPCHADDECLC()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::LLCFODKNNLB*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLODPJPFJE___C_LPCHADDECLC_OFFSET))(this);
	}
};
