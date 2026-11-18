#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole { class NewConfigUICommon; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define BDPPNOENHOJ___C_JAFCCEBIBJP_OFFSET UNITYSDK_OFFSET(0x17020CA0)
#define BDPPNOENHOJ___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x17020FE0)
#define BDPPNOENHOJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17020C50)
#define BDPPNOENHOJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17020C90)

inline static constexpr unsigned int BDPPNOENHOJ___c_TypeDefinitionIndex = 87016;

class BDPPNOENHOJ___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::NewConfigUICommon*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::NewConfigUICommon*>*>**)Il2CppClass::FromTypeDefinitionIndex(BDPPNOENHOJ___c_TypeDefinitionIndex)->GetStaticField(0x36E10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BDPPNOENHOJ___c_TypeDefinitionIndex)->GetStaticField(0x36E18);
	}
	static ::System::Func_2<::MoleMole::NewConfigUICommon*, ::MoleMole::NewConfigUICommon*>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::MoleMole::NewConfigUICommon*, ::MoleMole::NewConfigUICommon*>**)Il2CppClass::FromTypeDefinitionIndex(BDPPNOENHOJ___c_TypeDefinitionIndex)->GetStaticField(0x36E20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDPPNOENHOJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPPNOENHOJ___C__CTOR_OFFSET))(this);
	}

	::MoleMole::NewConfigUICommon* JAFCCEBIBJP(::MoleMole::NewConfigUICommon* DFMKILICPFB)
	{
		return ((::MoleMole::NewConfigUICommon*(*)(::PVOID, ::MoleMole::NewConfigUICommon*))((::PBYTE)hIl2Cpp + BDPPNOENHOJ___C_JAFCCEBIBJP_OFFSET))(this, DFMKILICPFB);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::NewConfigUICommon*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::MoleMole::NewConfigUICommon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPPNOENHOJ___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
