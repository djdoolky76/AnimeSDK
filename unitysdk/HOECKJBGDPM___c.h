#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityChannelMixerEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOECKJBGDPM___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0xEA01C10)
#define HOECKJBGDPM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA01BC0)
#define HOECKJBGDPM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEA01C00)

inline static constexpr unsigned int HOECKJBGDPM___c_TypeDefinitionIndex = 87025;

class HOECKJBGDPM___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(HOECKJBGDPM___c_TypeDefinitionIndex)->GetStaticField(0x46500);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HOECKJBGDPM___c_TypeDefinitionIndex)->GetStaticField(0x46508);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOECKJBGDPM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOECKJBGDPM___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOECKJBGDPM___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
