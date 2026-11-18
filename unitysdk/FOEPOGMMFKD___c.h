#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityDepthOfFieldEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOEPOGMMFKD___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x165C4810)
#define FOEPOGMMFKD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165C47C0)
#define FOEPOGMMFKD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165C4800)

inline static constexpr unsigned int FOEPOGMMFKD___c_TypeDefinitionIndex = 57660;

class FOEPOGMMFKD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FOEPOGMMFKD___c_TypeDefinitionIndex)->GetStaticField(0x43570);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(FOEPOGMMFKD___c_TypeDefinitionIndex)->GetStaticField(0x43578);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOEPOGMMFKD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEPOGMMFKD___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEPOGMMFKD___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
