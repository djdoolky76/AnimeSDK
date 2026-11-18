#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityAvatarColorCorrection; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHFPPFPBOJP___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x13A61710)
#define OHFPPFPBOJP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A616C0)
#define OHFPPFPBOJP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A61700)

inline static constexpr unsigned int OHFPPFPBOJP___c_TypeDefinitionIndex = 65381;

class OHFPPFPBOJP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OHFPPFPBOJP___c_TypeDefinitionIndex)->GetStaticField(0x4B1E0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(OHFPPFPBOJP___c_TypeDefinitionIndex)->GetStaticField(0x4B1E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHFPPFPBOJP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFPPFPBOJP___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFPPFPBOJP___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
