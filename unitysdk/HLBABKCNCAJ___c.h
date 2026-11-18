#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntitySplitToningEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLBABKCNCAJ___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x12E64A80)
#define HLBABKCNCAJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E64A30)
#define HLBABKCNCAJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E64A70)

inline static constexpr unsigned int HLBABKCNCAJ___c_TypeDefinitionIndex = 82284;

class HLBABKCNCAJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HLBABKCNCAJ___c_TypeDefinitionIndex)->GetStaticField(0x40BD0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(HLBABKCNCAJ___c_TypeDefinitionIndex)->GetStaticField(0x40BD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLBABKCNCAJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBABKCNCAJ___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBABKCNCAJ___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
