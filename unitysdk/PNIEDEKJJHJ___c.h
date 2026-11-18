#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityScreenSpacePlanarReflectionEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNIEDEKJJHJ___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x1C1E0D80)
#define PNIEDEKJJHJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1E0D30)
#define PNIEDEKJJHJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E0D70)

inline static constexpr unsigned int PNIEDEKJJHJ___c_TypeDefinitionIndex = 39278;

class PNIEDEKJJHJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PNIEDEKJJHJ___c_TypeDefinitionIndex)->GetStaticField(0x493F0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(PNIEDEKJJHJ___c_TypeDefinitionIndex)->GetStaticField(0x493F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNIEDEKJJHJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIEDEKJJHJ___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIEDEKJJHJ___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
