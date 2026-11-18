#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityAutoExposureEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIAFFEDAMOA___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x15210530)
#define KIAFFEDAMOA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152104E0)
#define KIAFFEDAMOA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15210520)

inline static constexpr unsigned int KIAFFEDAMOA___c_TypeDefinitionIndex = 72462;

class KIAFFEDAMOA___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(KIAFFEDAMOA___c_TypeDefinitionIndex)->GetStaticField(0x41400);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KIAFFEDAMOA___c_TypeDefinitionIndex)->GetStaticField(0x41408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIAFFEDAMOA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAFFEDAMOA___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAFFEDAMOA___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
