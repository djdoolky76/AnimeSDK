#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityColorLookupEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGNOCBIKJOD___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x184F43A0)
#define LGNOCBIKJOD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184F4350)
#define LGNOCBIKJOD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184F4390)

inline static constexpr unsigned int LGNOCBIKJOD___c_TypeDefinitionIndex = 53489;

class LGNOCBIKJOD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LGNOCBIKJOD___c_TypeDefinitionIndex)->GetStaticField(0x4BEC0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(LGNOCBIKJOD___c_TypeDefinitionIndex)->GetStaticField(0x4BEC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGNOCBIKJOD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNOCBIKJOD___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNOCBIKJOD___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
