#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigShaderCustomBase; }
namespace MoleMole::Config { class ConfigShaderCustomFogMap; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDFJFILBDHI_CCGHKMCFHOC_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x178F3F30)
#define KDFJFILBDHI_CCGHKMCFHOC_HJDFGAPKGKA_OFFSET UNITYSDK_OFFSET(0x178F3F20)
#define KDFJFILBDHI_CCGHKMCFHOC__CTOR_OFFSET UNITYSDK_OFFSET(0x178F3F10)

inline static constexpr unsigned int KDFJFILBDHI_CCGHKMCFHOC_TypeDefinitionIndex = 85079;

class KDFJFILBDHI_CCGHKMCFHOC : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* DGFHJGHBGOE; // 0x10
	::System::Func_2<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigShaderCustomFogMap*>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>*>* FFMGICPLKFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFJFILBDHI_CCGHKMCFHOC__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>* HJDFGAPKGKA(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigShaderCustomFogMap*>* KEJJKECGLOP)
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigShaderCustomFogMap*>*))((::PBYTE)hIl2Cpp + KDFJFILBDHI_CCGHKMCFHOC_HJDFGAPKGKA_OFFSET))(this, KEJJKECGLOP);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>*>* FLIAEJGDMLI()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFJFILBDHI_CCGHKMCFHOC_FLIAEJGDMLI_OFFSET))(this);
	}
};
