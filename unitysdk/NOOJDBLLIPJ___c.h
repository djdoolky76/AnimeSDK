#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityFXFogEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NOOJDBLLIPJ___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x105D1B00)
#define NOOJDBLLIPJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105D1AB0)
#define NOOJDBLLIPJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105D1AF0)

inline static constexpr unsigned int NOOJDBLLIPJ___c_TypeDefinitionIndex = 66965;

class NOOJDBLLIPJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NOOJDBLLIPJ___c_TypeDefinitionIndex)->GetStaticField(0x425C0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NOOJDBLLIPJ___c_TypeDefinitionIndex)->GetStaticField(0x425C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOOJDBLLIPJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOJDBLLIPJ___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOJDBLLIPJ___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
