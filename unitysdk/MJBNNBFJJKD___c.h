#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/WeatherV1CastV2Entry.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJBNNBFJJKD___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x12FF13D0)
#define MJBNNBFJJKD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FF1380)
#define MJBNNBFJJKD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF13C0)

inline static constexpr unsigned int MJBNNBFJJKD___c_TypeDefinitionIndex = 55505;

class MJBNNBFJJKD___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>*>*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MJBNNBFJJKD___c_TypeDefinitionIndex)->GetStaticField(0x48550);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MJBNNBFJJKD___c_TypeDefinitionIndex)->GetStaticField(0x48558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJBNNBFJJKD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBNNBFJJKD___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>*>* LPCHADDECLC()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::List_1<::MoleMole::WeatherV1CastV2Entry>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBNNBFJJKD___C_LPCHADDECLC_OFFSET))(this);
	}
};
