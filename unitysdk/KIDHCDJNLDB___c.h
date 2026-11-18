#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityLightingEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIDHCDJNLDB___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x1299CB00)
#define KIDHCDJNLDB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1299CAB0)
#define KIDHCDJNLDB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1299CAF0)

inline static constexpr unsigned int KIDHCDJNLDB___c_TypeDefinitionIndex = 41586;

class KIDHCDJNLDB___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(KIDHCDJNLDB___c_TypeDefinitionIndex)->GetStaticField(0x41410);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KIDHCDJNLDB___c_TypeDefinitionIndex)->GetStaticField(0x41418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIDHCDJNLDB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHCDJNLDB___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHCDJNLDB___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
