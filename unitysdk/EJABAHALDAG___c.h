#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DynamicCheckTreeDataEntry.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJABAHALDAG___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x158B2B40)
#define EJABAHALDAG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158B2AF0)
#define EJABAHALDAG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158B2B30)

inline static constexpr unsigned int EJABAHALDAG___c_TypeDefinitionIndex = 57907;

class EJABAHALDAG___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>*>*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>*>*>**)Il2CppClass::FromTypeDefinitionIndex(EJABAHALDAG___c_TypeDefinitionIndex)->GetStaticField(0x31740);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EJABAHALDAG___c_TypeDefinitionIndex)->GetStaticField(0x31748);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJABAHALDAG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJABAHALDAG___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>*>* LPCHADDECLC()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJABAHALDAG___C_LPCHADDECLC_OFFSET))(this);
	}
};
