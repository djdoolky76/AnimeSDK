#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityVignette; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JLMIBIBPFDD___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x19460AB0)
#define JLMIBIBPFDD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19460A60)
#define JLMIBIBPFDD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19460AA0)

inline static constexpr unsigned int JLMIBIBPFDD___c_TypeDefinitionIndex = 60389;

class JLMIBIBPFDD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JLMIBIBPFDD___c_TypeDefinitionIndex)->GetStaticField(0x380B0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(JLMIBIBPFDD___c_TypeDefinitionIndex)->GetStaticField(0x380B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLMIBIBPFDD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMIBIBPFDD___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMIBIBPFDD___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
