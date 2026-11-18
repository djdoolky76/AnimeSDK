#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityGlitchEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POOJJNIHFOM___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x1C6B87C0)
#define POOJJNIHFOM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6B8770)
#define POOJJNIHFOM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B87B0)

inline static constexpr unsigned int POOJJNIHFOM___c_TypeDefinitionIndex = 55595;

class POOJJNIHFOM___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(POOJJNIHFOM___c_TypeDefinitionIndex)->GetStaticField(0x363D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(POOJJNIHFOM___c_TypeDefinitionIndex)->GetStaticField(0x363D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POOJJNIHFOM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOJJNIHFOM___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POOJJNIHFOM___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
