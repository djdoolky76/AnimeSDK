#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityTonemappingEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DALJDMCDGAE___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x13E27C70)
#define DALJDMCDGAE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E27C20)
#define DALJDMCDGAE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E27C60)

inline static constexpr unsigned int DALJDMCDGAE___c_TypeDefinitionIndex = 58535;

class DALJDMCDGAE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DALJDMCDGAE___c_TypeDefinitionIndex)->GetStaticField(0x4B6C0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(DALJDMCDGAE___c_TypeDefinitionIndex)->GetStaticField(0x4B6C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DALJDMCDGAE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DALJDMCDGAE___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DALJDMCDGAE___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
