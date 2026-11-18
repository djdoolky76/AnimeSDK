#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityColorCurvesEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBDFAALPFDI___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x1845C770)
#define PBDFAALPFDI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1845C720)
#define PBDFAALPFDI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1845C760)

inline static constexpr unsigned int PBDFAALPFDI___c_TypeDefinitionIndex = 84789;

class PBDFAALPFDI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PBDFAALPFDI___c_TypeDefinitionIndex)->GetStaticField(0x3FA40);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(PBDFAALPFDI___c_TypeDefinitionIndex)->GetStaticField(0x3FA48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBDFAALPFDI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDFAALPFDI___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDFAALPFDI___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
