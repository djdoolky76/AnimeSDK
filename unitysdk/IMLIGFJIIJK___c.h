#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityCharacterVolumeProxyEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IMLIGFJIIJK___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x160B5450)
#define IMLIGFJIIJK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160B5400)
#define IMLIGFJIIJK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x160B5440)

inline static constexpr unsigned int IMLIGFJIIJK___c_TypeDefinitionIndex = 49613;

class IMLIGFJIIJK___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(IMLIGFJIIJK___c_TypeDefinitionIndex)->GetStaticField(0x40EB0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IMLIGFJIIJK___c_TypeDefinitionIndex)->GetStaticField(0x40EB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMLIGFJIIJK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLIGFJIIJK___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLIGFJIIJK___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
