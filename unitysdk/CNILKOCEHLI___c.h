#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole { class ConfigUIAvatarShow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CNILKOCEHLI___C_JAFCCEBIBJP_OFFSET UNITYSDK_OFFSET(0x12043FA0)
#define CNILKOCEHLI___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x12043D70)
#define CNILKOCEHLI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12043D20)
#define CNILKOCEHLI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12043D60)

inline static constexpr unsigned int CNILKOCEHLI___c_TypeDefinitionIndex = 92738;

class CNILKOCEHLI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CNILKOCEHLI___c_TypeDefinitionIndex)->GetStaticField(0x430B0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::ConfigUIAvatarShow*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::ConfigUIAvatarShow*>*>**)Il2CppClass::FromTypeDefinitionIndex(CNILKOCEHLI___c_TypeDefinitionIndex)->GetStaticField(0x430B8);
	}
	static ::System::Func_2<::MoleMole::ConfigUIAvatarShow*, ::MoleMole::ConfigUIAvatarShow*>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::MoleMole::ConfigUIAvatarShow*, ::MoleMole::ConfigUIAvatarShow*>**)Il2CppClass::FromTypeDefinitionIndex(CNILKOCEHLI___c_TypeDefinitionIndex)->GetStaticField(0x430C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNILKOCEHLI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNILKOCEHLI___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::ConfigUIAvatarShow*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::ConfigUIAvatarShow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNILKOCEHLI___C_JFNPHKAHEJF_OFFSET))(this);
	}

	::MoleMole::ConfigUIAvatarShow* JAFCCEBIBJP(::MoleMole::ConfigUIAvatarShow* DFMKILICPFB)
	{
		return ((::MoleMole::ConfigUIAvatarShow*(*)(::PVOID, ::MoleMole::ConfigUIAvatarShow*))((::PBYTE)hIl2Cpp + CNILKOCEHLI___C_JAFCCEBIBJP_OFFSET))(this, DFMKILICPFB);
	}
};
