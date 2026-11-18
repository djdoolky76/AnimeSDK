#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityPaniniProjectionEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDDFBJOHLCM___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x17524010)
#define GDDFBJOHLCM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17523FC0)
#define GDDFBJOHLCM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17524000)

inline static constexpr unsigned int GDDFBJOHLCM___c_TypeDefinitionIndex = 69652;

class GDDFBJOHLCM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GDDFBJOHLCM___c_TypeDefinitionIndex)->GetStaticField(0x31BC0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(GDDFBJOHLCM___c_TypeDefinitionIndex)->GetStaticField(0x31BC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDDFBJOHLCM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDFBJOHLCM___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDFBJOHLCM___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
