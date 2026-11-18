#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityRadialBlur; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGLIMDMDFFF___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0xFF6FFD0)
#define BGLIMDMDFFF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF6FF80)
#define BGLIMDMDFFF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6FFC0)

inline static constexpr unsigned int BGLIMDMDFFF___c_TypeDefinitionIndex = 47345;

class BGLIMDMDFFF___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(BGLIMDMDFFF___c_TypeDefinitionIndex)->GetStaticField(0x3D4B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BGLIMDMDFFF___c_TypeDefinitionIndex)->GetStaticField(0x3D4B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLIMDMDFFF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLIMDMDFFF___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLIMDMDFFF___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
