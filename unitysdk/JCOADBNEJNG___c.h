#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityScreenSpaceReflectionEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCOADBNEJNG___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x14A53520)
#define JCOADBNEJNG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A534D0)
#define JCOADBNEJNG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A53510)

inline static constexpr unsigned int JCOADBNEJNG___c_TypeDefinitionIndex = 51434;

class JCOADBNEJNG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JCOADBNEJNG___c_TypeDefinitionIndex)->GetStaticField(0x49EC0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(JCOADBNEJNG___c_TypeDefinitionIndex)->GetStaticField(0x49EC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCOADBNEJNG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOADBNEJNG___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceReflectionEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOADBNEJNG___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
