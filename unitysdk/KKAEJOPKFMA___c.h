#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKAEJOPKFMA___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x16817460)
#define KKAEJOPKFMA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16817410)
#define KKAEJOPKFMA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16817450)

inline static constexpr unsigned int KKAEJOPKFMA___c_TypeDefinitionIndex = 63391;

class KKAEJOPKFMA___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(KKAEJOPKFMA___c_TypeDefinitionIndex)->GetStaticField(0x38280);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KKAEJOPKFMA___c_TypeDefinitionIndex)->GetStaticField(0x38288);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKAEJOPKFMA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAEJOPKFMA___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAEJOPKFMA___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
