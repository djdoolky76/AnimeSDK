#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityAmplifyOcclusionEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENKFLJCMCJN___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x17130010)
#define ENKFLJCMCJN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1712FFC0)
#define ENKFLJCMCJN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17130000)

inline static constexpr unsigned int ENKFLJCMCJN___c_TypeDefinitionIndex = 66395;

class ENKFLJCMCJN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ENKFLJCMCJN___c_TypeDefinitionIndex)->GetStaticField(0x461A0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ENKFLJCMCJN___c_TypeDefinitionIndex)->GetStaticField(0x461A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENKFLJCMCJN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKFLJCMCJN___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKFLJCMCJN___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
