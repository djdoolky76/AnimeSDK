#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole { class LanguageVideo; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJNPMNFPBBA___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1533A930)
#define CJNPMNFPBBA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1533A8E0)
#define CJNPMNFPBBA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1533A920)

inline static constexpr unsigned int CJNPMNFPBBA___c_TypeDefinitionIndex = 68540;

class CJNPMNFPBBA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CJNPMNFPBBA___c_TypeDefinitionIndex)->GetStaticField(0x3A700);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>*>*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(CJNPMNFPBBA___c_TypeDefinitionIndex)->GetStaticField(0x3A708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJNPMNFPBBA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNPMNFPBBA___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>*>* LPCHADDECLC()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNPMNFPBBA___C_LPCHADDECLC_OFFSET))(this);
	}
};
