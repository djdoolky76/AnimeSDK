#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityNapCapsuleAOLightingEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLJMPHDDLJO___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x169FA070)
#define BLJMPHDDLJO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169FA020)
#define BLJMPHDDLJO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169FA060)

inline static constexpr unsigned int BLJMPHDDLJO___c_TypeDefinitionIndex = 39603;

class BLJMPHDDLJO___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(BLJMPHDDLJO___c_TypeDefinitionIndex)->GetStaticField(0x36F70);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BLJMPHDDLJO___c_TypeDefinitionIndex)->GetStaticField(0x36F78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLJMPHDDLJO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJMPHDDLJO___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJMPHDDLJO___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
