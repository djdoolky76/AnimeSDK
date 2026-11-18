#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierBatchLoad; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKLPMEAJCLP___C_KJIMAGGPDCB_OFFSET UNITYSDK_OFFSET(0x18195780)
#define HKLPMEAJCLP___C_MOGKJKPDDKA_OFFSET UNITYSDK_OFFSET(0x181959E0)
#define HKLPMEAJCLP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18195730)
#define HKLPMEAJCLP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18195770)

inline static constexpr unsigned int HKLPMEAJCLP___c_TypeDefinitionIndex = 91260;

class HKLPMEAJCLP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HKLPMEAJCLP___c_TypeDefinitionIndex)->GetStaticField(0x32230);
	}
	static ::System::Func_2<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad*>*, ::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>** StaticGet___9__4_1()
	{
		return (::System::Func_2<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad*>*, ::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(HKLPMEAJCLP___c_TypeDefinitionIndex)->GetStaticField(0x32238);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(HKLPMEAJCLP___c_TypeDefinitionIndex)->GetStaticField(0x32240);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKLPMEAJCLP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLPMEAJCLP___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* KJIMAGGPDCB()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLPMEAJCLP___C_KJIMAGGPDCB_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* MOGKJKPDDKA(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad*>* MHDAJGPGLOD)
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad*>*))((::PBYTE)hIl2Cpp + HKLPMEAJCLP___C_MOGKJKPDDKA_OFFSET))(this, MHDAJGPGLOD);
	}
};
