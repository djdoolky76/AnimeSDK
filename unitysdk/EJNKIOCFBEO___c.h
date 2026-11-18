#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityScreenEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJNKIOCFBEO___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x161497D0)
#define EJNKIOCFBEO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16149780)
#define EJNKIOCFBEO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161497C0)

inline static constexpr unsigned int EJNKIOCFBEO___c_TypeDefinitionIndex = 59177;

class EJNKIOCFBEO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EJNKIOCFBEO___c_TypeDefinitionIndex)->GetStaticField(0x49A90);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(EJNKIOCFBEO___c_TypeDefinitionIndex)->GetStaticField(0x49A98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJNKIOCFBEO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNKIOCFBEO___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNKIOCFBEO___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
