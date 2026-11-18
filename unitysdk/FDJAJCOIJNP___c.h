#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDJAJCOIJNP___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x10F5FE60)
#define FDJAJCOIJNP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F5FE10)
#define FDJAJCOIJNP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F5FE50)

inline static constexpr unsigned int FDJAJCOIJNP___c_TypeDefinitionIndex = 65317;

class FDJAJCOIJNP___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(FDJAJCOIJNP___c_TypeDefinitionIndex)->GetStaticField(0x3DB40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FDJAJCOIJNP___c_TypeDefinitionIndex)->GetStaticField(0x3DB48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDJAJCOIJNP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJAJCOIJNP___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJAJCOIJNP___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
