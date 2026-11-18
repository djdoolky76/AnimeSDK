#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityFXComicDotEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPLCBMOHADD___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x1323EF50)
#define FPLCBMOHADD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1323EF00)
#define FPLCBMOHADD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1323EF40)

inline static constexpr unsigned int FPLCBMOHADD___c_TypeDefinitionIndex = 73376;

class FPLCBMOHADD___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FPLCBMOHADD___c_TypeDefinitionIndex)->GetStaticField(0x31AA0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(FPLCBMOHADD___c_TypeDefinitionIndex)->GetStaticField(0x31AA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPLCBMOHADD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLCBMOHADD___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLCBMOHADD___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
