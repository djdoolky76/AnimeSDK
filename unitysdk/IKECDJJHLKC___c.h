#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityUnsharpMaskEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IKECDJJHLKC___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x13AA8890)
#define IKECDJJHLKC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AA8840)
#define IKECDJJHLKC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA8880)

inline static constexpr unsigned int IKECDJJHLKC___c_TypeDefinitionIndex = 67145;

class IKECDJJHLKC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IKECDJJHLKC___c_TypeDefinitionIndex)->GetStaticField(0x48110);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(IKECDJJHLKC___c_TypeDefinitionIndex)->GetStaticField(0x48118);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKECDJJHLKC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECDJJHLKC___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityUnsharpMaskEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKECDJJHLKC___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
