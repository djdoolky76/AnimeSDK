#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityColorAdjustment; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGPOFBNLKFF___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x14A8B2B0)
#define EGPOFBNLKFF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A8B260)
#define EGPOFBNLKFF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A8B2A0)

inline static constexpr unsigned int EGPOFBNLKFF___c_TypeDefinitionIndex = 54408;

class EGPOFBNLKFF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EGPOFBNLKFF___c_TypeDefinitionIndex)->GetStaticField(0x4E370);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(EGPOFBNLKFF___c_TypeDefinitionIndex)->GetStaticField(0x4E378);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGPOFBNLKFF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPOFBNLKFF___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorAdjustment*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPOFBNLKFF___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
