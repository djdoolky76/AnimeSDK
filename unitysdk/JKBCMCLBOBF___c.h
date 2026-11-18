#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigWindFieldProperty; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKBCMCLBOBF___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x157C6B20)
#define JKBCMCLBOBF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157C6AD0)
#define JKBCMCLBOBF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157C6B10)

inline static constexpr unsigned int JKBCMCLBOBF___c_TypeDefinitionIndex = 88665;

class JKBCMCLBOBF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JKBCMCLBOBF___c_TypeDefinitionIndex)->GetStaticField(0x40F70);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigWindFieldProperty*>*>*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigWindFieldProperty*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(JKBCMCLBOBF___c_TypeDefinitionIndex)->GetStaticField(0x40F78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKBCMCLBOBF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBCMCLBOBF___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigWindFieldProperty*>*>* LPCHADDECLC()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigWindFieldProperty*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBCMCLBOBF___C_LPCHADDECLC_OFFSET))(this);
	}
};
