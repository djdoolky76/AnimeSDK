#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityGaussianBlurEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PCCEDEKPIFC___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x15530340)
#define PCCEDEKPIFC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155302F0)
#define PCCEDEKPIFC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15530330)

inline static constexpr unsigned int PCCEDEKPIFC___c_TypeDefinitionIndex = 77690;

class PCCEDEKPIFC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PCCEDEKPIFC___c_TypeDefinitionIndex)->GetStaticField(0x51070);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(PCCEDEKPIFC___c_TypeDefinitionIndex)->GetStaticField(0x51078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCCEDEKPIFC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCEDEKPIFC___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGaussianBlurEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCEDEKPIFC___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
