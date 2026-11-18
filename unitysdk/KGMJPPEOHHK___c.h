#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityMonsterIgnisFatuusEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGMJPPEOHHK___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x157EB480)
#define KGMJPPEOHHK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157EB430)
#define KGMJPPEOHHK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157EB470)

inline static constexpr unsigned int KGMJPPEOHHK___c_TypeDefinitionIndex = 50963;

class KGMJPPEOHHK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KGMJPPEOHHK___c_TypeDefinitionIndex)->GetStaticField(0x51570);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(KGMJPPEOHHK___c_TypeDefinitionIndex)->GetStaticField(0x51578);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGMJPPEOHHK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMJPPEOHHK___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMJPPEOHHK___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
