#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { class String; }

#define CPNKBOADPAJ_FALINFKOKPJ_OFFSET UNITYSDK_OFFSET(0x193EEB70)
#define CPNKBOADPAJ_JOEAKFPBDAH_1_OFFSET UNITYSDK_OFFSET(0x193EED10)
#define CPNKBOADPAJ_JOEAKFPBDAH_OFFSET UNITYSDK_OFFSET(0x193EEC30)
#define CPNKBOADPAJ_PHIGKCCKHIF_1_OFFSET UNITYSDK_OFFSET(0x193EEBD0)
#define CPNKBOADPAJ_PHIGKCCKHIF_OFFSET UNITYSDK_OFFSET(0x193EEB80)
#define CPNKBOADPAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x193EEE10)

inline static constexpr unsigned int CPNKBOADPAJ_TypeDefinitionIndex = 91820;

class CPNKBOADPAJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKBOADPAJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FALINFKOKPJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_FALINFKOKPJ_OFFSET))(this);
	}

	::System::String* PHIGKCCKHIF(::System::String* CEKNHIDPNNA)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_PHIGKCCKHIF_OFFSET))(this, CEKNHIDPNNA);
	}

	::System::String* PHIGKCCKHIF_1(::Foundation::AssetPath CEKNHIDPNNA)
	{
		return ((::System::String*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_PHIGKCCKHIF_1_OFFSET))(this, CEKNHIDPNNA);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::String*> JOEAKFPBDAH(::System::String* CEKNHIDPNNA)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_JOEAKFPBDAH_OFFSET))(this, CEKNHIDPNNA);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::String*> JOEAKFPBDAH_1(::Foundation::AssetPath CEKNHIDPNNA)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_JOEAKFPBDAH_1_OFFSET))(this, CEKNHIDPNNA);
	}
};
