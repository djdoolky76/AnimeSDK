#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityLensDirtEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKLIPAHPPJL___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0xFB92EB0)
#define OKLIPAHPPJL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB92E60)
#define OKLIPAHPPJL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFB92EA0)

inline static constexpr unsigned int OKLIPAHPPJL___c_TypeDefinitionIndex = 83816;

class OKLIPAHPPJL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OKLIPAHPPJL___c_TypeDefinitionIndex)->GetStaticField(0x458A0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(OKLIPAHPPJL___c_TypeDefinitionIndex)->GetStaticField(0x458A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKLIPAHPPJL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLIPAHPPJL___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLensDirtEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLIPAHPPJL___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
