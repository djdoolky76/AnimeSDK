#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityFXColorCorrection; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBLFGIOFOHD___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x13E0B130)
#define HBLFGIOFOHD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E0B0E0)
#define HBLFGIOFOHD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E0B120)

inline static constexpr unsigned int HBLFGIOFOHD___c_TypeDefinitionIndex = 66817;

class HBLFGIOFOHD___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(HBLFGIOFOHD___c_TypeDefinitionIndex)->GetStaticField(0x37AC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HBLFGIOFOHD___c_TypeDefinitionIndex)->GetStaticField(0x37AC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBLFGIOFOHD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLFGIOFOHD___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLFGIOFOHD___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
