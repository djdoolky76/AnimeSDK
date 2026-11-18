#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityDistortionEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOFCGAAHENO___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0xD43BD30)
#define LOFCGAAHENO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD43BCE0)
#define LOFCGAAHENO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD43BD20)

inline static constexpr unsigned int LOFCGAAHENO___c_TypeDefinitionIndex = 76095;

class LOFCGAAHENO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LOFCGAAHENO___c_TypeDefinitionIndex)->GetStaticField(0x32B30);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(LOFCGAAHENO___c_TypeDefinitionIndex)->GetStaticField(0x32B38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOFCGAAHENO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFCGAAHENO___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFCGAAHENO___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
