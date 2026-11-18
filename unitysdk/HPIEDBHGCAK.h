#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define HPIEDBHGCAK_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0xF832440)
#define HPIEDBHGCAK_COLLEFFCFAJ_OFFSET UNITYSDK_OFFSET(0xF8324F0)
#define HPIEDBHGCAK_FALINFKOKPJ_OFFSET UNITYSDK_OFFSET(0xF832010)
#define HPIEDBHGCAK_JOEAKFPBDAH_1_OFFSET UNITYSDK_OFFSET(0xF832310)
#define HPIEDBHGCAK_JOEAKFPBDAH_OFFSET UNITYSDK_OFFSET(0xF832210)
#define HPIEDBHGCAK_OCDJJBCONAH_OFFSET UNITYSDK_OFFSET(0xF8325F0)
#define HPIEDBHGCAK_PHIGKCCKHIF_1_OFFSET UNITYSDK_OFFSET(0xF832100)
#define HPIEDBHGCAK_PHIGKCCKHIF_OFFSET UNITYSDK_OFFSET(0xF832020)
#define HPIEDBHGCAK__CTOR_OFFSET UNITYSDK_OFFSET(0xF832430)

inline static constexpr unsigned int HPIEDBHGCAK_TypeDefinitionIndex = 41641;

class HPIEDBHGCAK : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle BMBIECOOIBI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEDBHGCAK__CTOR_OFFSET))(this);
	}

	::System::Boolean FALINFKOKPJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_FALINFKOKPJ_OFFSET))(this);
	}

	::System::String* PHIGKCCKHIF(::System::String* CEKNHIDPNNA)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_PHIGKCCKHIF_OFFSET))(this, CEKNHIDPNNA);
	}

	::System::String* PHIGKCCKHIF_1(::Foundation::AssetPath CEKNHIDPNNA)
	{
		return ((::System::String*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_PHIGKCCKHIF_1_OFFSET))(this, CEKNHIDPNNA);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::String*> JOEAKFPBDAH(::System::String* CEKNHIDPNNA)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_JOEAKFPBDAH_OFFSET))(this, CEKNHIDPNNA);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::String*> JOEAKFPBDAH_1(::Foundation::AssetPath CEKNHIDPNNA)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_JOEAKFPBDAH_1_OFFSET))(this, CEKNHIDPNNA);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_BJANDJKKNCD_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::IO::Stream*> COLLEFFCFAJ(::Foundation::AssetPath CEKNHIDPNNA)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::IO::Stream*>(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_COLLEFFCFAJ_OFFSET))(this, CEKNHIDPNNA);
	}

	::System::Void OCDJJBCONAH(::Foundation::AssetPath CEKNHIDPNNA, ::System::IO::Stream*& CPKODGLINAO)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::IO::Stream*&))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_OCDJJBCONAH_OFFSET))(this, CEKNHIDPNNA, CPKODGLINAO);
	}
};
