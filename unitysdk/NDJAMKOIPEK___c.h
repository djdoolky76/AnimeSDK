#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigLensDistortion; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDJAMKOIPEK___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x13136860)
#define NDJAMKOIPEK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13136810)
#define NDJAMKOIPEK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13136850)

inline static constexpr unsigned int NDJAMKOIPEK___c_TypeDefinitionIndex = 69518;

class NDJAMKOIPEK___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NDJAMKOIPEK___c_TypeDefinitionIndex)->GetStaticField(0x42480);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NDJAMKOIPEK___c_TypeDefinitionIndex)->GetStaticField(0x42488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDJAMKOIPEK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJAMKOIPEK___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJAMKOIPEK___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
