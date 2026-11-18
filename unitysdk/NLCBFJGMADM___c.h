#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigChromaticAberration; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLCBFJGMADM___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x11F86F70)
#define NLCBFJGMADM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F86F20)
#define NLCBFJGMADM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F86F60)

inline static constexpr unsigned int NLCBFJGMADM___c_TypeDefinitionIndex = 74686;

class NLCBFJGMADM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NLCBFJGMADM___c_TypeDefinitionIndex)->GetStaticField(0x4FCF0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NLCBFJGMADM___c_TypeDefinitionIndex)->GetStaticField(0x4FCF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLCBFJGMADM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCBFJGMADM___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCBFJGMADM___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
