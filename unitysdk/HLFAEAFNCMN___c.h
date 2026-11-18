#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole { class ConfigRichtapSound; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLFAEAFNCMN___C_JAFCCEBIBJP_OFFSET UNITYSDK_OFFSET(0x149571A0)
#define HLFAEAFNCMN___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x14957030)
#define HLFAEAFNCMN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14956FE0)
#define HLFAEAFNCMN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14957020)

inline static constexpr unsigned int HLFAEAFNCMN___c_TypeDefinitionIndex = 42541;

class HLFAEAFNCMN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HLFAEAFNCMN___c_TypeDefinitionIndex)->GetStaticField(0x40BE0);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(HLFAEAFNCMN___c_TypeDefinitionIndex)->GetStaticField(0x40BE8);
	}
	static ::System::Func_2<::System::Collections::Generic::List_1<::MoleMole::ConfigRichtapSound*>*, ::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::System::Collections::Generic::List_1<::MoleMole::ConfigRichtapSound*>*, ::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(HLFAEAFNCMN___c_TypeDefinitionIndex)->GetStaticField(0x40BF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLFAEAFNCMN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAEAFNCMN___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAEAFNCMN___C_JFNPHKAHEJF_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* JAFCCEBIBJP(::System::Collections::Generic::List_1<::MoleMole::ConfigRichtapSound*>* MHDAJGPGLOD)
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ConfigRichtapSound*>*))((::PBYTE)hIl2Cpp + HLFAEAFNCMN___C_JAFCCEBIBJP_OFFSET))(this, MHDAJGPGLOD);
	}
};
