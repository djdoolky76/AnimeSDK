#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityCullingEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CECGNAHOBEK___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x11539470)
#define CECGNAHOBEK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11539420)
#define CECGNAHOBEK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11539460)

inline static constexpr unsigned int CECGNAHOBEK___c_TypeDefinitionIndex = 85944;

class CECGNAHOBEK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CECGNAHOBEK___c_TypeDefinitionIndex)->GetStaticField(0x370C0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CECGNAHOBEK___c_TypeDefinitionIndex)->GetStaticField(0x370C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CECGNAHOBEK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CECGNAHOBEK___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCullingEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CECGNAHOBEK___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
