#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityShadowsMidtonesHighlightsEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHCMBAFAPHD___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x12D87850)
#define MHCMBAFAPHD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D87800)
#define MHCMBAFAPHD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D87840)

inline static constexpr unsigned int MHCMBAFAPHD___c_TypeDefinitionIndex = 44331;

class MHCMBAFAPHD___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MHCMBAFAPHD___c_TypeDefinitionIndex)->GetStaticField(0x46A80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MHCMBAFAPHD___c_TypeDefinitionIndex)->GetStaticField(0x46A88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHCMBAFAPHD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCMBAFAPHD___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCMBAFAPHD___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
