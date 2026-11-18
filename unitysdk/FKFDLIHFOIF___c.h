#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityScreenSpaceAmbientOcclusionEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKFDLIHFOIF___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x11D80480)
#define FKFDLIHFOIF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D80430)
#define FKFDLIHFOIF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D80470)

inline static constexpr unsigned int FKFDLIHFOIF___c_TypeDefinitionIndex = 91388;

class FKFDLIHFOIF___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(FKFDLIHFOIF___c_TypeDefinitionIndex)->GetStaticField(0x3ACD0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FKFDLIHFOIF___c_TypeDefinitionIndex)->GetStaticField(0x3ACD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKFDLIHFOIF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFDLIHFOIF___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFDLIHFOIF___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
