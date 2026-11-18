#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityCausticsEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JOFNAEPBGGL___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x152B3E70)
#define JOFNAEPBGGL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152B3E20)
#define JOFNAEPBGGL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152B3E60)

inline static constexpr unsigned int JOFNAEPBGGL___c_TypeDefinitionIndex = 44972;

class JOFNAEPBGGL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JOFNAEPBGGL___c_TypeDefinitionIndex)->GetStaticField(0x4E660);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(JOFNAEPBGGL___c_TypeDefinitionIndex)->GetStaticField(0x4E668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOFNAEPBGGL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFNAEPBGGL___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCausticsEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFNAEPBGGL___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
