#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityPartialBlurEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKFFOKILBLN___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x14369C80)
#define AKFFOKILBLN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14369C30)
#define AKFFOKILBLN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14369C70)

inline static constexpr unsigned int AKFFOKILBLN___c_TypeDefinitionIndex = 63892;

class AKFFOKILBLN___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AKFFOKILBLN___c_TypeDefinitionIndex)->GetStaticField(0x3A2A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AKFFOKILBLN___c_TypeDefinitionIndex)->GetStaticField(0x3A2A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFFOKILBLN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFFOKILBLN___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFFOKILBLN___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
