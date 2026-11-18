#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole::Config { class ConfigEntityFilmGrain; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHFDNMINDGP___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0xBB42290)
#define FHFDNMINDGP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB42240)
#define FHFDNMINDGP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBB42280)

inline static constexpr unsigned int FHFDNMINDGP___c_TypeDefinitionIndex = 66933;

class FHFDNMINDGP___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(FHFDNMINDGP___c_TypeDefinitionIndex)->GetStaticField(0x47F10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FHFDNMINDGP___c_TypeDefinitionIndex)->GetStaticField(0x47F18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHFDNMINDGP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDNMINDGP___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>*>* JFNPHKAHEJF()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDNMINDGP___C_JFNPHKAHEJF_OFFSET))(this);
	}
};
